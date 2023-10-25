#pragma once
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<set>
#include<memory>
using namespace::std;

class HasPtr {
public:
	//Ĭ�Ϲ��캯��
	//HasPtr()=default;

	//�������캯��
	//HasPtr(const string& s=string()):ps(new string(s)),i(0){}
	HasPtr(const string& s):ps(new string(s)),i(0){}


	HasPtr(const HasPtr& p) :ps(p.ps), i(p.i) {}

	//������ֵ�����,�����δ�����Լ��Ŀ�����ֵ�������������������һ���ϳɿ��������
	HasPtr& operator=(const HasPtr&);
private:
	string* ps;
	int i;
};
