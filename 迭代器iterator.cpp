#include<iostream>
#include<vector>
#include<string>
using namespace std;

//int main()
//{
	/*vector<int> ivec;
	auto b = ivec.begin(), e = ivec.end();*/


	//string s("some string");
	//if (s.begin()!=s.end())//ȷ��s�ǿ�
	//{
	//	auto it = s.begin();
	//	*it = toupper(*it);
	//}
	//cout << s << endl;

	/*vector<int> ivec = { 1,2,3,4,5,6,7,8,9,10 };
	vector<int> ivec1(10, 2);*/

	//auto it = ivec.begin();


	//ʹ�õ�����������Ԫ�ص�ֵ�����ԭ�������������vector��������ݣ���������Ƿ���ȷ
	/*for (auto it = ivec.begin(); it != ivec.end(); it++)
	{
		*it *= 2;
		cout << *it << endl;
	}*/

	//��������
	/*auto beg = ivec.begin();
	auto end = ivec.end();
	auto mid = ivec.begin() + (end - beg) / 2;

	while (mid != end && *mid != sought)
	{
		if (sought < *mid)
			end = mid;
		else
			beg = mid + 1;
		mid = beg + (end - beg) / 2;
	}*/

	//��ÿ�����������ĺ����

	/*vector<int> ivec = { 1,2,3,4,5,6,7,8,9,10 };

	auto end = ivec.end();

	for (auto it = ivec.begin(); it != end-1; it++)
	{
		cout << *it +*(it+1) << endl;
	}*/


	//�������һ�������һ��Ԫ�صĺͽ�������ڶ����͵����ڶ���Ԫ�صĺ�
	//vector<int> ivec = { 1,2,3,4,6,7,8,9,10 };
	//auto beg = ivec.begin();
	//auto end = ivec.end();
	//
	//int i;
	//

	//for (i = 0; beg + i != end - 1 - i && end - beg - 2 - 2 * i != 0; i++)
	//{
	//	cout << *(beg + i) + *(end - 1 - i) << endl;
	//	//beg += i;
	//	//end -= i;
	//}
	////vectorΪ������
	//if (beg + i == end - 1 - i)
	//{
	//	cout << *(beg + i) << endl << "������";
	//}
	////vectorΪż����
	//if (end - beg - 2 - 2 * i == 0)
	//{
	//	cout << *(beg + i) + *(end - 1 - i) << endl << "ż����";
	//}

	//Ϊʲô��mid1 = beg + (end - beg) / 2;
	//������(beg + end) / 2
	//vector<int> ivec = { 1,2,3,4,6,7,8,9,10 };
	//auto beg = ivec.begin();
	//auto end = ivec.end();

	//auto mid1 = beg + (end - beg) / 2;
	//auto mid2 = (beg + end) / 2;//û������Щ������ƥ���"+"�����



//}