#pragma once
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<set>
#include<memory>
using namespace::std;

class Folder {
	friend class Message;
public:
	Folder(string name) :name(name) {};
private:
	string name;//�ļ��е�����
	set<Message*> message;//������Щmessage
};

class Message {
	friend class Folder;
public:
	//���캯��
	Message(string txt):txt(txt){}

	Message& save(Folder& );
	Message& remove(Folder& );

	~Message();
private:
	string txt;//��Ϣ�ı�
	set<Folder*> floder;//����Folder��ָ���set

};
