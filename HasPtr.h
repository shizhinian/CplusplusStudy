#pragma once
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<set>
#include<memory>
using namespace::std;

class HasPtr {
	friend int main();
public:
	//Ĭ�Ϲ��캯��
	//HasPtr()=default;

	//�������캯��
	//HasPtr(const string& s=string()):ps(new string(s)),i(0){}
	HasPtr(const string& s=string()):ps(new string(s)),i(0),use(new size_t(1)){}


	//HasPtr(const HasPtr& p) :ps(p.ps), i(p.i) {}
	HasPtr(const HasPtr& p) :ps(p.ps), i(p.i), use(p.use) { ++*use; }

	//������ֵ�����,�����δ�����Լ��Ŀ�����ֵ�������������������һ���ϳɿ��������
	HasPtr& operator=(const HasPtr&);
	~HasPtr();

	//�ƶ����캯��

	HasPtr(HasPtr&& p) noexcept :ps(p.ps), i(p.i) { p.ps = 0; }
private:
	string* ps;
	int i;
	size_t* use;
};
