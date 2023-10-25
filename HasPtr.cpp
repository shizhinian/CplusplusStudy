#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<set>
#include<memory>
#include"HasPtr.h"

using namespace::std;
//��ֵ�����ͨ��Ӧ�÷���һ��ָ�������������������
HasPtr& HasPtr::operator=(const HasPtr& hp) {
	/*
	auto newps = new string(*hp.ps);
	//newps = hp.ps;
	delete ps;//�ͷ�*this.ps���ڴ�
	ps = newps;
	//ps = hp.ps;
	i = hp.i;
	return *this;
	*/
	++*hp.use;
	if (--*use == 0)
	{
		delete ps;
		delete use;
	}
	ps = hp.ps;
	i = hp.i;
	use = hp.use;
	return *this;
}

HasPtr::~HasPtr(){
	if (--*use==0)
	{
		delete ps;
		delete use;
	}
}


int main() {
	HasPtr hp1("abc");

	HasPtr hp2;

	hp2 = hp1;
	cout << "hp1:" << hp1.ps << endl << "hp1:" << hp2.ps;
	cout <<"hp1:"<< *hp1.use <<endl <<"hp1:"<< *hp2.use;
	//HasPtr(hp1);
}