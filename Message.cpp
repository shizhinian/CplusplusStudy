#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<set>
#include<memory>
#include"Message.h"
using namespace::std;

Message& Message::save(Folder& fd) {
	//1��fd�е�message��set�о���this�ļ�¼�ˣ������this����һ��Message*
	//2��this->floder�ٽ�fd����
	//˼·��û���
	//*fd.message.insert(this);
	//(*this).floder = &fd;
	
}

int main() {
	Folder fd1("floder-1");
	Folder fd2("floder-2");
	Message mg("this is a txt");
	mg.save(fd1);
	//mg.save(fd2);
}