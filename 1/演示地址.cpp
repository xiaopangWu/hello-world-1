#include<iostream>
using namespace std;
int main(){
    int a=10;

    int *ptr =NULL;//ָ����Ҳ��ã�ҲҪ��ʼ��ΪNULL 
    
    cout << ptr << endl;
    *ptr = 16;
    cout << a << endl;

    //���Լ���д����鿴double��int֮���ת��
    //�Լ�bool��int��ת��,���㼴һ�� 
    //���������в���unsigned���ǰ׺��int,char�Ĺ�ϵ��
    //ע�⣬��Ҫ����unsigned int �� int!!!!
}
