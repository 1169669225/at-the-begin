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
////地址传递
////void myswap(int *a, int *b)
////{
////	int temp = *a;
////	*a = *b;
////	*b = temp;
////}
////引用传递
////void myswap(int& a, int& b)
////{
////	int temp = a;
////	a = b;
////	b = temp;
////}
////引用做函数变量的返回值
////1.不要做局部变量 的引用
////int& test01()
////{
////	int a = 10;
////	return a;
////}
////2.函数的调用可作为左值
////int& test02()
////{
////	static int a = 10;//静态变量，存放在全局区，全局区的数据在程序结束后系统释放
////
////	return a;
////}
////int func(int a, int b, int c)//如果某个位置有默认值，那么这个位置往后都要有默认值
////{                             //如果函数声明有默认参数，函数实现就不能有默认参数
////	return a + b + c;
////}
///*void func(int a, int){}*///占位参数
////int main()
////{
//	//int a =  10;
//	////int &b = a;//引用必须初始化,引用不能更改
//	////int c = 20;
//	////b = c;//赋值操作
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
//	//函数重载，可以让函数名相同，提高复用性
//	//条件：1.同一个作用域下2.函数名称相同3.函数参数类型不同，或者个数不同，或者顺序不同
//	//函数重载的注意事项：
//	//1.引用作为重载的条件
//	//会调用可读可写的，不加const,如果加const，则直接用常量
//	//2.函数重载遇到默认参数
//	//二义性
//
//	return 0;
//}


//#include <iostream>
//#include <math.h>
//#define PI acos(-1)
//
//using namespace std;
//
////设计一个圆类，求园的周长
////class代表设计一个类，类后面是类名称
//class Circle
//{
//	//访问权限
//public://公共权限
//	//属性
//	int m_r;//半径
//	//行为，获取圆的周长
//	double calculateZC()
//	{
//		return 2 * PI * m_r;
//	}
//};
//
//int main()
//{
//	//通过园类创建具体的元
//	Circle c1;
//	c1.m_r = 10;
//	printf("%d", c1.calculateZC());
//
//	return 0;
//}

#include <iostream>


using namespace std;
//设计一个学生类，可与i显示学号，姓名

class Student
{
public://公共权限、
	//属性
	string S_name;
	int S_id;
	//行为
	void showstudent()
	{
		printf("学号：%d   姓名:%c  ",S_id,S_name);
	}
};
int main()
{
	//创建一个实例
	Student s1;
	s1.S_name = "张三";
	s1.S_id = 1;
	//显示学生信息
	s1. showstudent();
	return 0;
}