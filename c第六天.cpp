////#include <stdio.h>
////void Add(int* p)
////{
////	(*p)++;
////}
////int main()
////{
////	int num = 0;
////	Add(&num);
////	printf("%d\n",num);
////
////	return 0;
////}
//
////#include <stdio.h>
////int Fib(int n)
////{
////	if (n <= 2)
////		return 1;
////	else
////		return Fib(n - 1) + Fib(n - 2);//�ݹ�Ч��̫��
////}
////int main()
////{
////	int n = 0;
////	scanf_s("%d",&n);
////	int ret = Fib(n);
////	printf("%d\n",ret);
////
////	return 0;
////}
//
//
////��д������һ��1��100�����������г����˶��ٴ�����9
////#include <stdio.h>
////int main()
////{
////	int i = 0;
////	int count = 0;
////	for (i = 1; i <= 100; i++)
////	{
////		if (i % 10 == 9)
////			count++;
////		if (i / 10 == 0)
////			count++;
////	}
////	printf("%d\n",count);
////
////	return 0;
////}
//
////����1/1-1-1/2+1/3-1/4+1/5........+1/99-1/100��ֵ,����ӡ�����
////#include <stdio.h>
////int main()
////{
////	int i = 0;
////	double sum = 0.0;
////	for (i = 1; i <= 100; i++)
////	{
////		if (i % 2 == 0)
////			sum -= 1.0 / i;
////		else
////			sum += 1.0 / i;
////		
////
////	}
////	printf("%d\n",sum);
////	return 0;
////}
//
//
////��10�����������ֵ
////#include <stdio.h>
////int main()
////{
////	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
////	int max = 0;
////	int i = 0;
////	for (i = 0; i < 10; i++)
////	{
////		if (arr[i] > max)
////		{
////			max = arr[i];
////		}
////	}
////	printf("%d\n", max);
////
////	return 0;
////}
//
////99�˷���
////#include <stdio.h>
////int main()
////{
////	int i = 0;
////	int j = 0;
////	for (i = 1; i <= 9; i++)
////	{
////		for (j = 1; j <= i; j++)
////		{
////			printf("%d*%d = %d ",i,j,i*j);
////		}
////		printf("\n");
////	}
////	return 0;
////}
//
////
////#include <stdio.h>
////int Fun(int n)
////{
////	if (n == 5)
////		return 2;
////	else
////		return 2 * Fun(n + 1);
////}
////��дһ���������������ַ����е��ַ��������У����������ӡ
////int my_strlen(char* str)
////{
////	int count = 0;
////	while (*str != '\0')
////	{
////		count++;
////		str++;
////	}
////	return count;
////}
////void reverse_string(char *str);
////{
////	int left = 0;
////	int right = my_strlen(str) - 1;
////	while (left < right)
////	{
////	   char tmp = str[left];
////	   str[left] = str[right];
////	   str[right] = tmp;
////	   left++;
////	   right--;
////    }
////}
////int main()
////{
////	char arr[] = "abcdef";
////	reverse_string(arr);
////	printf("%s\n",arr);
////	return 0;
////}
////�ݹ�ʵ��
//#include <stdio.h>
//void reverse_string(char* str)
//{
//	char tmp = *str;
//	int len = my_strlen(str) - 1;
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	if (my_strlen(str + 1) >= 2)
//	{
//	reverse_string(str + 1);
//    }
//	*(str + len - 1) = tmp;
//
//
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%%s\n",arr);
//	return 0;
//}
//
