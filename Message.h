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
	void addMsg(Message*);
	void remMsg(Message*);
private:
	string name;//�ļ��е�����
	set<Message*> message;//������Щmessage
};

class Message {
	friend class Folder;
public:
	//���캯��
	Message(string txt):txt(txt){}

	void save(Folder& );
	void remove(Folder& );

	//~Message();
private:
	string txt;//��Ϣ�ı�
	set<Folder*> folder;//����Folder��ָ���set

};
