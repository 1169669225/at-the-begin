#include <stdio.h>
////define是一个预处理指令
////1.define定义符号
//#define MAX 1000
////define定义宏
//#define ADD(X,Y) ((X)+(Y))
//
//int main()
//{
//	printf("%d/n", ADD(2,3));
//	//4*ADD(2,3)=4*2+3
//
//	return 0;
//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);//%p专门用来打印地址
//	int * pa = &a;//pa是用来存放地址的，在c语言中叫指针变量
//	//*说明pa是指针变量
//	//int说明pa执行的对象是int类型的
//	char ch = 'W';
//	char * pc = &ch;
//
//	return 0;
//}
//int main()
//{
//    int a = 10;
//    int * pa = &a;
//    *pa = 20;//解引用操作 *pa就是通过pa里面的地址，找到a
//    printf("%d\n", a);
//
//    return 0;
//}
//指针变量的大小
//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(long long*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//	//指针大小是相同的
//	//指针是用来地址的
//	//指针需要多大空间，取决于地址的存储需要多大空间
//
//	return  0;
//}

//int main()
//{
//	
//	int a[5] = { 1,2,3,4,5 };
//	int j = 20;
//	int i = 10;
//    
//	return 0;
//}

//#include <stdio.h>
//#define PI 3+2
//int main()
//{ 
////	int i = PI * 2;
////	printf("i = %d\n", i);
////	char c = 'A';
////	printf("%c\n", c + 32);//以字符形式输出
////	printf("%d\n", c );//以数值形式输出
//
////int i = 5;
////float f = i / 2;
////printf("%f\n", f);
////float k = (float)i / 2;
////printf("%f\n", k);
//
//	//int i = 123;
//	//printf("%d\n", i);//十进制输出
//	//printf("%o\n", i);//八进制输出
//	//printf("%x\n", i);//十六进制
//
//
//	return 0;
//}


//int main()
//{
//	int i;
//	char c;
//	scanf("%d",&i);
//	printf("i = %d\n",i);
//	scanf("c = %c\n",&c);
//	printf("c = %c\n",c);
//
//	return 0;
//}\

//int main()
//{
//	//int i = 1;
//	//i&& printf("you can't see me\n");//当i为假时，不会执行表达式，称为短路运算
//	////等价于
//	/*if (i)
//	{
//		printf("you can't see me\n");
//	}*/
//
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	int sum = 0;
//	while (i <= 100)
//	{
//		sum = sum + i;
//		i++;
//	}
//	printf("%d",sum);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//    //穷举法 循环各种金钱的数量
//    int m10, m5, m2, m1; //每一张纸币至少一张
//    int sum = 0;
//    for (m10 = 1; m10 <= 40; m10++) {
//        for (m5 = 1; m5 <= 40; m5++) {
//            for (m2 = 1; m2 <= 40; m2++) {
//                for (m1 = 1; m1 <= 40; m1++) {
//                    if ((m10 * 10 + m5 * 5 + m2 * 2 + m1 * 1) == 100 && (m10 + m5 + m2 + m1 == 40)) {
//                        sum += 1;
//                    }
//                }
//            }
//        }
//    }
//    printf("%d\n", sum);
//
//}

//#include<stdio.h>
//int main() {
//	int n;
//	scanf_s("%d", &n);
//	int sum = 1;
//	for (int i = 1; i <= n; i++) {
//		sum = i * sum;
//	}
//	printf("%d", sum);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int sum = 0;//方法;
//    int m10, m5, m2, m1, m3;
//    for (m10 = 1; m10 <= 40; m10++)
//    {
//        for (m5 = 1; m5 <= 40; m5++)
//        {
//            for (m2 = 1; m2 <= 40; m2++)
//            {
//                for (m1 = 1; m1 <= 40; m1++)
//                {
//                    if ((m10 + m5 + m3 + m1 == 40) && (m10 * 10 + m5 * 5 + m2 * 2 + m1 * 1 == 100))
//                    {
//                        sum += 1;
//                    }
//                }
//            }
//            printf("%d\n", sum);
//           
//        }
//    }
//    return 0;
//}


//#include <stdio.h>
//int main()
//{
//	/*int a[5] = { 1,2,3,4,5 };
//	int j = 20;
//	int i = 10;
//	printf("a[4] = %d\n",a[4]);
//	a[5] = 6;
//	a[6] = 7;
//	printf("i = %d\n",i);*/
//	int a[5] = { 1,2,3,4,5 };
//	int i;
//	for (i = 0; i < sizeof(a)/sizeof(int); i++)
//	{
//		printf("%d\n",a[i]);
//	}
//
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	/*char c[10] = { 'i','h','j','k' };
//	char c1[10] = "iamhappy";
//	printf("%s\n",c1);*/
//	/*char c[10];*/
//	//scanf_s("%s",c);//字符数组c中存储了地址，所以不需要取地址//%s不会读取空格
//	//printf("%s\n",c);
//	//char d[10];
//	//scanf_s("%s%s",c,d);
//	//printf("c = %s,d = %s\n",c,d);//读取两个
//	//char c[20];
//	//gets_s(c);//当输入字符串存在空格时，需要gets进行输入
//	//printf("%s\n",c);
//	//int len;
//	//char d[100] = "world";
//	//len = strlen(c);
//	//printf("len = %s\n",len);
//	//strcat(c, d);//吧d中的字符串拼接到c中
//	//strcpy
//
//	return 0;
//}

//#include <stdio.h>
//void change(int j)
//{
//	j = 5;
//}
//int main()
//{
//	/*int i = 5;
//	int *i_pointer = &i;*///指针变量的初始化是某个变量去地址来赋值，不能随机写个数
//	//printf("i = %d\n",i);//直接访问
//	//printf("*p = %d\n",*p);//间接访问
//	//在子函数中改变主函数莫个变量的值
//	int i = 10;
//	printf("before change i = %d\n",i);
//	change(&i);
//	printf("after change i = %d\n", i);
//	return 0;
//}


//#include <stdio.h>
//#define N 5
//int main()
//{
//	
//	int a[N] = { 1,2,3,4,5 };//数组名中有地址
//	int *p;
//	p = a;
//	int i;
//	for (i = 0; i < N; i++)
//	{
//	  printf("%3d",*(p+1));//和a[i]等价
//	}
//
//	return 0;
//}

//#include <stdio.h>
////指针与一维数组的传递
//void change(char* d)
//{
//	*d = 'H';
//	d[1] = 'E';
//	*(d + 2) = 'L';
//
//}
//int main()
//{
//	char c[10] = "hello";
//	change(c);
//	puts(c);
//
//	return 0;
//}

//#include <stdio.h>
////结构体
////结构体的声明
//struct Stu///描述一个学生：名字，年龄，电话，性别
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1, s2, s3;//全局变量，不建议使用
//void print1(Stu tmp)
//{
//	printf("name: %s\n", tmp.name);
//	printf("age:  %d\n", tmp.age);
//	printf("tele: %s\n", tmp.tele);
//	printf("sex:  %s\n", tmp.sex);
//}
//void print2(Stu*ps)
//{
//	printf("name: %s\n",ps->name);
//	printf("age: %d\n", ps->age);
//	printf("tele: %s\n", ps->tele);
//	printf("sex: %s\n", ps->sex);
//}
//int main()
//{
//	Stu s = {"张三",20,"12315251234","男"};//局部变量
//	//struct Stu s;//定义结构体变量  局部变量
//	print1(s);
//	print2(&s);
//    
//	return 0;
// }

                //明解c语言练习题
//#include <stdio.h>
//int main()
//{
//	printf("请输入了两个整数。\n");
//	int a1 = 0, a2 = 0, mutiply = 0;
//	printf("整数1：");
//	scanf_s("%d",&a1);
//	printf("整数2：");
//	scanf_s("%d", &a2);
//	mutiply = a1 * a2;
//	printf("他们的乘积是%d",mutiply);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	printf("整数A:");
//	scanf_s("%d",&a);
//	printf("整数B:");
//	scanf_s("%d", &b);
//	printf("整数C:");
//	scanf_s("%d", &c);
//	if (a == b == c)
//	{
//		printf("三个值都相等");
//	}
//	else if (a == b || a == c || b == c)
//	{
//		printf("有两个值相等");
//	}
//	else
//	{
//		printf("三个值都不相等");
//	}
//	return 0;
// }


//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int a1, a2;
//	printf("请输入两个整数\n");
//	printf("整数A：");
//	scanf_s("%d",&a1);
//	printf("整数B：");
//	scanf_s("%d", &a2);
//	if (abs(a1 - a2) <= 10)
//	{
//		printf("他们的差小于等于10");
//	}
//	else
//	{
//		printf("他们的差大于等于11");
//	}
//	return 0;
//  }

//#include <stdio.h>
//#include <math.h>
//int min(int a, int b)
//{
//	if (a < b)
//	{ 
//		return a;
//	}
//	else
//	{
//		return b;
//	}
//	
//}
//int max(int a1, int a2)
//{
//	if (a1 < a2)
//	{
//		return a2;
//	}
//	else
//	{
//		return a1;
//	}
//}
//int main()
//{
//	int i = 0, sum = 0, a, b;
//	printf("请输入两个整数\n");
//	printf("整数a");
//	scanf_s("%d",&a);
//	printf("整数b");
//	scanf_s("%d", &b);
//	for (i == min(a, b); i < max(a, b); i++)
//	{
//		sum+=i;
//	}
//	printf("%d\n",sum);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int a, i;
//	printf("请输入一个整数：");
//	scanf_s("%d",&a);
//	for (i = 1; i < a; i++)
//	{
//		if (i % 2 == 0)
//		{
//			printf("%d",i);
//		}
//	}
//		return 0;
//}


#include <stdio.h>
#include <math.h>
int main()
{
    int a, i, n;
    printf("请输入一个整数：");
    scanf_s("%d",&a);
    for (i = 1; i < a; i++)
    {
        if (i = log2(a))
        {
            printf("%d",pow(i,2));
        }
    }
    return 0;
}


#include <stdio.h>

int main()
{
    int a;
    printf("请输入一个整数：");
    scanf_s("%d",&a);
    while (a / )
    {
       
    }
    return 0;
}