#include <stdio.h>
////define��һ��Ԥ����ָ��
////1.define�������
//#define MAX 1000
////define�����
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
//	printf("%p\n", &a);//%pר��������ӡ��ַ
//	int * pa = &a;//pa��������ŵ�ַ�ģ���c�����н�ָ�����
//	//*˵��pa��ָ�����
//	//int˵��paִ�еĶ�����int���͵�
//	char ch = 'W';
//	char * pc = &ch;
//
//	return 0;
//}
//int main()
//{
//    int a = 10;
//    int * pa = &a;
//    *pa = 20;//�����ò��� *pa����ͨ��pa����ĵ�ַ���ҵ�a
//    printf("%d\n", a);
//
//    return 0;
//}
//ָ������Ĵ�С
//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(long long*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//	//ָ���С����ͬ��
//	//ָ����������ַ��
//	//ָ����Ҫ���ռ䣬ȡ���ڵ�ַ�Ĵ洢��Ҫ���ռ�
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
////	printf("%c\n", c + 32);//���ַ���ʽ���
////	printf("%d\n", c );//����ֵ��ʽ���
//
////int i = 5;
////float f = i / 2;
////printf("%f\n", f);
////float k = (float)i / 2;
////printf("%f\n", k);
//
//	//int i = 123;
//	//printf("%d\n", i);//ʮ�������
//	//printf("%o\n", i);//�˽������
//	//printf("%x\n", i);//ʮ������
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
//	//i&& printf("you can't see me\n");//��iΪ��ʱ������ִ�б��ʽ����Ϊ��·����
//	////�ȼ���
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
//    //��ٷ� ѭ�����ֽ�Ǯ������
//    int m10, m5, m2, m1; //ÿһ��ֽ������һ��
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
//    int sum = 0;//����;
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
//	//scanf_s("%s",c);//�ַ�����c�д洢�˵�ַ�����Բ���Ҫȡ��ַ//%s�����ȡ�ո�
//	//printf("%s\n",c);
//	//char d[10];
//	//scanf_s("%s%s",c,d);
//	//printf("c = %s,d = %s\n",c,d);//��ȡ����
//	//char c[20];
//	//gets_s(c);//�������ַ������ڿո�ʱ����Ҫgets��������
//	//printf("%s\n",c);
//	//int len;
//	//char d[100] = "world";
//	//len = strlen(c);
//	//printf("len = %s\n",len);
//	//strcat(c, d);//��d�е��ַ���ƴ�ӵ�c��
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
//	int *i_pointer = &i;*///ָ������ĳ�ʼ����ĳ������ȥ��ַ����ֵ���������д����
//	//printf("i = %d\n",i);//ֱ�ӷ���
//	//printf("*p = %d\n",*p);//��ӷ���
//	//���Ӻ����иı�������Ī��������ֵ
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
//	int a[N] = { 1,2,3,4,5 };//���������е�ַ
//	int *p;
//	p = a;
//	int i;
//	for (i = 0; i < N; i++)
//	{
//	  printf("%3d",*(p+1));//��a[i]�ȼ�
//	}
//
//	return 0;
//}

//#include <stdio.h>
////ָ����һά����Ĵ���
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
////�ṹ��
////�ṹ�������
//struct Stu///����һ��ѧ�������֣����䣬�绰���Ա�
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1, s2, s3;//ȫ�ֱ�����������ʹ��
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
//	Stu s = {"����",20,"12315251234","��"};//�ֲ�����
//	//struct Stu s;//����ṹ�����  �ֲ�����
//	print1(s);
//	print2(&s);
//    
//	return 0;
// }

                //����c������ϰ��
//#include <stdio.h>
//int main()
//{
//	printf("������������������\n");
//	int a1 = 0, a2 = 0, mutiply = 0;
//	printf("����1��");
//	scanf_s("%d",&a1);
//	printf("����2��");
//	scanf_s("%d", &a2);
//	mutiply = a1 * a2;
//	printf("���ǵĳ˻���%d",mutiply);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	printf("����A:");
//	scanf_s("%d",&a);
//	printf("����B:");
//	scanf_s("%d", &b);
//	printf("����C:");
//	scanf_s("%d", &c);
//	if (a == b == c)
//	{
//		printf("����ֵ�����");
//	}
//	else if (a == b || a == c || b == c)
//	{
//		printf("������ֵ���");
//	}
//	else
//	{
//		printf("����ֵ�������");
//	}
//	return 0;
// }


//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int a1, a2;
//	printf("��������������\n");
//	printf("����A��");
//	scanf_s("%d",&a1);
//	printf("����B��");
//	scanf_s("%d", &a2);
//	if (abs(a1 - a2) <= 10)
//	{
//		printf("���ǵĲ�С�ڵ���10");
//	}
//	else
//	{
//		printf("���ǵĲ���ڵ���11");
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
//	printf("��������������\n");
//	printf("����a");
//	scanf_s("%d",&a);
//	printf("����b");
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
//	printf("������һ��������");
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
    printf("������һ��������");
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
    printf("������һ��������");
    scanf_s("%d",&a);
    while (a / )
    {
       
    }
    return 0;
}