#include<iostream>
using namespace std;
int main()
{
	double h,m,BMI;//double��ʾ��ȷС�� 
	cout <<"�������������" << endl;
	cin >> h;
	cout <<"��������������" << endl;
	cin >> m;
	BMI = m/h/h;
	cout <<"����BMI��" << BMI;
	if(BMI < 18.5)
	{
		cout << "������" << endl; 
	}
	else if(BMI < 24.9)
	{
		cout << "����" << endl;
	}
	else
	{
		cout << "��" << endl; 
	}
	system("PAUSE");//ʹ�������䣬�����ó�����û��DEV C++�ĵ��������С� 
	  return 0; 
	
	}
