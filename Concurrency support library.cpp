#include<chrono> 
#include<iostream>
#include<map>
#include<mutex>  
#include<thread>

std::map<std::string, std::string> g_pages;
std::mutex g_pages_mutex;

//��ʾ����ʾ���ʹ�� lock �� unlock �������������ݡ�
int g_num = 0;
std::mutex g_num_mutex;

void slow_increment(int id) {
	for (int i = 0; i < 3; ++i)
	{
		g_num_mutex.lock();
		++g_num;
		std::cout << "id: " << id << ", g_num: " << g_num << '\n';
		g_num_mutex.unlock();

		std::this_thread::sleep_for(std::chrono::milliseconds(1000));
	}
}


//��ʾ����ʾ���ʹ�� mutex �����������߳�֮�乲��� std::map��
void save_page(const std::string& url) {
	std::this_thread::sleep_for(std::chrono::seconds(1));
	std::string result = "fake content";

	std::lock_guard<std::mutex>guard(g_pages_mutex);
	g_pages[url] = result;

}

int main() {
	//using namespace std::chrono_literals; 
	//std::cout << "Hello waiter\n" << std::flush;//std::flush��ˢ�»����������ӵĻ���������ڽ���ǰ������е�����
	//const auto start = std::chrono::high_resolution_clock::now();
	//std::this_thread::sleep_for(1000ms);
	//const auto end = std::chrono::high_resolution_clock::now();
	//const std::chrono::duration<double, std::milli> elapsed = end - start;//����ĵ�λ��s����centi�൱�ڳ���100������milli�൱�ڳ�1000��

	//std::cout << "Waited " << elapsed.count() << "ms";

	/*std::thread t1(save_page, "http://foo");
	std::thread t2(save_page, "http://bar");
	t1.join();
	t2.join();
	for (const auto& pair :g_pages)
	{
		std::cout << pair.first << " => " << pair.second << '\n';
	}*/

	std::thread t1{ slow_increment,0 };
	std::this_thread::sleep_for(std::chrono::milliseconds(500));
	std::thread t2{ slow_increment,1 };
	t1.join();
	t2.join();
}