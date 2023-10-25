#pragma once
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<set>
#include<memory>
using namespace::std;

class QueryResult {

	friend ostream& print(ostream&, const QueryResult&);
public:
	QueryResult(string qw, set<int> ln, shared_ptr<vector<string>> te):queryWord(qw),lineNumber(ln),texts(te){}
private:
	string queryWord;//��ѯ�ĵ���
	set<int> lineNumber;//�õ������г��ֹ����к�
	shared_ptr<vector<string>> texts;

};

class TextQuery {
public:
	TextQuery(ifstream&);
	//TextQuery(ifstream& infile) :texts(make_shared<vector<string>>(infile)) {	}
	//private:
	//vector<string> text;//ʹ��vector<string>�����������ļ��������ļ���ÿһ�б���Ϊvector��һ��Ԫ��
	//istringstream& ;
	//map<string, set<int>> map1;//ʹ��һ��map��ÿ�������������ֵ��к�set����������������ȡ���ⵥ�ʵ�set
	//set<int> lineNumber;//ʹ��һ��set������ÿ�������������ı��г��ֵ��кţ��Ա�֤ÿ��ֻ����һ�����кŰ����򱣴档"A":36 "set":36 "element":36
	QueryResult query(const string &)const;//����/������Ա������һ��QueryResult
private:
	shared_ptr<vector<string>> texts;
	map<string, set<int>> map2;

};


