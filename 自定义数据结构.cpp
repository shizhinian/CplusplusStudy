#include<iostream>
//#include<string>
#include"Sales_data.h"
using namespace std;



//Sales_data accum, trans, * salesptr;

//��ϰ2.39
struct Foo {};
//��û��д�ֺ�ʱ���������������´���
//����	C2628	��Foo������ӡ�int���ǷǷ���(�Ƿ������ˡ�;�� ? )
//����	C3874	��main���ķ�������ӦΪ��int�����ǡ�Foo��	
//����	C2440	��return�� : �޷��ӡ�int��ת��Ϊ��Foo��	

int main() 
{
	Sales_data data1, data2;
	//���׼�¼��
	//0-201-78345-X 3 20.00
	//0-201-78345-X 2 25.00
	//double price = 0;
	data1.bookNo = "0-201-78345-X";
	data1.units_sold = 3;
	data1.revenue = 3 * 20.00;
	data2 = {
		"0-201-78345-X",
		2,
		2*25.00
	};
	if (data1.bookNo==data2.bookNo)
	{
		unsigned totalCnt = data1.units_sold + data2.units_sold;
		double totalRevenue = data1.revenue + data2.revenue;
		cout << data1.bookNo << " " << totalCnt << " " << totalRevenue << endl;
		if (totalCnt!=0)
		{
			cout << totalRevenue / totalCnt << endl;
		}
		else
		{
			cout << "(no sales)" << endl;
		}
		return 0;
	}
	else
	{
		cerr << "Data must refer to the same ISBN" << endl;
		return -1;
	}
	
};