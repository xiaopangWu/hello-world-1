#include<iostream>

int main(){
    double a = 3.14;//char���浥���� 
    double b =(int) a;

    int c = 98;
    char d = c;
    std::cout <<"�����char = ��a�� ��int��ֵ��"<< b << std::endl;
    std::cout <<"�����int = 98 �� char��ֵ��" <<d << std::endl;

    //���Լ���д����鿴double��int֮���ת��
    //�Լ�bool��int��ת��,���㼴һ�� 
    //���������в���unsigned���ǰ׺��int,char�Ĺ�ϵ��
    //ע�⣬��Ҫ����unsigned int �� int!!!!
}
