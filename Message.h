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
	Message(const Message& );
	Message& operator=(const Message&);

	void save(Folder& );
	void remove(Folder& );

	~Message();
private:
	string txt;//��Ϣ�ı�
	set<Folder*> folder;//����Folder��ָ���set

	void add_to_Folders(const Message&);
	void remove_from_Folders();

};
