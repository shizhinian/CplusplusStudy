#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<set>
#include<memory>
#include"Message.h"
using namespace::std;

Message& Message:: operator=(const Message& mg) {
	remove_from_Folders();
	txt = mg.txt;
	folder = mg.folder;
	add_to_Folders(mg);
	return *this;
}

Message::Message(const Message& mg) :txt(mg.txt), folder(mg.folder) {
	add_to_Folders(mg);
}

Message::~Message() {
	remove_from_Folders();
}

void Message::save(Folder& fd) {
	//1��fd�е�message��set�о���this�ļ�¼�ˣ������this����һ��Message*
	//2��this->floder�ٽ�fd����
	//˼·��û���
	//*fd.message.insert(this);
	//(*this).floder = &fd;
	//fd��һ���������ͣ�����ʹ��&�������ȡ�ñ����ĵ�ַ����������Ϊ�������ݸ�insert����
	folder.insert(&fd);
	fd.addMsg(this);

}
void Message::remove(Folder& fd) {
	folder.erase(&fd);
}

void Folder::addMsg(Message* mg) {
	message.insert(mg);
	//
}






void Folder::remMsg(Message* mg) {
	message.erase(mg);
}

void Message::add_to_Folders(const Message& mg) {
	for (auto f : mg.folder)
		f->addMsg(this);
}

void Message::remove_from_Folders() {
	for (auto f : folder)
		f->remMsg(this);
}

//int main() {
//	Folder fd1("floder-1");
//	Folder fd2("floder-2");
//	Message mg("this is a txt");
//	mg.save(fd1);
//	mg.save(fd2);
//	//mg.save(fd2);
//
//	//int i = 4;
//	//int& r = i;
//	////int&& rr = i;//�޷�����ֵ���ð󶨵���ֵ
//	////int& r2 = i * 4;//�ǳ������õĳ�ʼֵ����Ϊ��ֵ
//	//const int& r3 = i * 4;
//	//int&& rr2 = i * 4;
//	//int&& rr3 = rr2;
//
//	/*int f();
//	vector<int> vi(100);
//	int&& r1 = f();
//	int& r2 = vi[0];
//	int& r3 = r1;
//	int&& r4 = vi[0] * f();*/
//}