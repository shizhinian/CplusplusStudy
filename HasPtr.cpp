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
	auto newps = new string(*hp.ps);
	//newps = hp.ps;
	delete ps;//�ͷ�*this.ps���ڴ�
	ps = newps;
	//ps = hp.ps;
	i = hp.i;
	return *this;
}


int main() {
	HasPtr hp1("abc");

	HasPtr hp2("def");

	hp2 = hp1;

	//HasPtr(hp1);
}