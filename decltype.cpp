//#include<iostream>
//using namespace std;
//
//int main() {
//
//	//decltype ����ָʾ��
//
//	//const int ci = 0, & cj = ci;
//	//decltype(ci) x = 0;//x:const int 
//	//decltype(cj) y = x;//y:const int &
//	//decltype(cj) z;//δ��ʼ�����ر���,z��һ�����ã������ʼ��
//	
//
//	//decltype ������
//	/*int i = 42, *p = &i, &r = i;
//	decltype(r + 1) b;*/
//	//cout << (void*)p << endl;
//	//cout << *p<<endl;
//	//decltype(*p)c;//ԭ�䣺c��int&�������ʼ���������Ҿ���&�������������ȡַ��*p������
//
//	//decltype((i))d;
//	//decltype(i)d;
//
//	/*
//	int a = 3, b = 4;
//	decltype(a) c = a;
//	decltype((b)) d = a;
//	++c;
//	++d;
//	*/
//	//c=4,int
//	//b=4,int
//	//d=4,int&
//	//a=4,int
//
//	/*
//	int a = 3, b = 4;
//	decltype(a)c = a;
//	decltype(a = b)d = a;
//	*/
//	//a=3,int
//	//b=4,int
//	//c=3,int
//	//d=3,int&
//
//}