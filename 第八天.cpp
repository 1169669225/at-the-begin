//#include<iostream>
//
//using namespace std;
//
////void myswap(int a, int b)
////{
////	int temp = a;
////	a = b;
////	b = temp;
////}
////��ַ����
////void myswap(int *a, int *b)
////{
////	int temp = *a;
////	*a = *b;
////	*b = temp;
////}
////���ô���
////void myswap(int& a, int& b)
////{
////	int temp = a;
////	a = b;
////	b = temp;
////}
////���������������ķ���ֵ
////1.��Ҫ���ֲ����� ������
////int& test01()
////{
////	int a = 10;
////	return a;
////}
////2.�����ĵ��ÿ���Ϊ��ֵ
////int& test02()
////{
////	static int a = 10;//��̬�����������ȫ������ȫ�����������ڳ��������ϵͳ�ͷ�
////
////	return a;
////}
////int func(int a, int b, int c)//���ĳ��λ����Ĭ��ֵ����ô���λ������Ҫ��Ĭ��ֵ
////{                             //�������������Ĭ�ϲ���������ʵ�־Ͳ�����Ĭ�ϲ���
////	return a + b + c;
////}
///*void func(int a, int){}*///ռλ����
////int main()
////{
//	//int a =  10;
//	////int &b = a;//���ñ����ʼ��,���ò��ܸ���
//	////int c = 20;
//	////b = c;//��ֵ����
//	////printf("%d",c);
//	////printf("%d",a);
//	//int b = 20;
//	//myswap(a, b);
//	//printf("%d\n%d",a,b);
//	/*int& ref = test01();*/
//	/*int& ref2 = test02();
//	printf("%d",ref2);*/
//
////	return 0;
////}
//
//int main()
//{
//	//�������أ������ú�������ͬ����߸�����
//	//������1.ͬһ����������2.����������ͬ3.�����������Ͳ�ͬ�����߸�����ͬ������˳��ͬ
//	//�������ص�ע�����
//	//1.������Ϊ���ص�����
//	//����ÿɶ���д�ģ�����const,�����const����ֱ���ó���
//	//2.������������Ĭ�ϲ���
//	//������
//
//	return 0;
//}


//#include <iostream>
//#include <math.h>
//#define PI acos(-1)
//
//using namespace std;
//
////���һ��Բ�࣬��԰���ܳ�
////class�������һ���࣬�������������
//class Circle
//{
//	//����Ȩ��
//public://����Ȩ��
//	//����
//	int m_r;//�뾶
//	//��Ϊ����ȡԲ���ܳ�
//	double calculateZC()
//	{
//		return 2 * PI * m_r;
//	}
//};
//
//int main()
//{
//	//ͨ��԰�ഴ�������Ԫ
//	Circle c1;
//	c1.m_r = 10;
//	printf("%d", c1.calculateZC());
//
//	return 0;
//}

#include <iostream>


using namespace std;
//���һ��ѧ���࣬����i��ʾѧ�ţ�����

class Student
{
public://����Ȩ�ޡ�
	//����
	string S_name;
	int S_id;
	//��Ϊ
	void showstudent()
	{
		printf("ѧ�ţ�%d   ����:%c  ",S_id,S_name);
	}
};
int main()
{
	//����һ��ʵ��
	Student s1;
	s1.S_name = "����";
	s1.S_id = 1;
	//��ʾѧ����Ϣ
	s1. showstudent();
	return 0;
}