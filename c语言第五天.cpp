#include <stdio.h>
int main()
{
	int i, j= 0, k, n = 0, sumi = 0;
	scanf_s("%d",&i);
	for (k = 0; k >= ((1 + 2 * j) - 1) / 2; k++)//每层几个空格
	{
		printf(" ");
	}
	for (j = 1; j <= i; j++)//每一层的数字是几
	{
		
		
		for (n = (1+2*j); n <= (1 + 2 * j); n++)//每层几个数字
		{
			printf("j");
		}
		printf("\n");
	}
	return 0;
}

//练习5-7!!!!!!!
//#include <stdio.h>
//int main()
//{
//	int i, j, k, n, m;
//	printf("数据个数：");
//	scanf_s("%d",&i);
//	printf("1号：");
//	scanf_s("%d", &j);
//	printf("2号：");
//	scanf_s("%d", &k);
//	printf("3号：");
//	scanf_s("%d", &n);
//	printf("4号：");
//	scanf_s("%d", &m);
//	char a[]
//	return 0;
//}

//5-11
#include <stdio.h>
int main()
{
	float chinese[6]{};
	float math[6]{};
	for (i = 0; i <= 5; i++)
	{
		scanf_s("%d",&chinese[i]);
		sum_chinese = sum_chinese + chinese[i];//总分
	}
	for (j = 0; j <= 5; j++)
	{
		scanf_s("%d", &math[j]);
		sum_math = sum_math + math[j];//总分
	}
	average_chinese = sum_chinese / 6.0;
	average_math = sum_math / 6.0;
	printf("%f\n", average_chinese);
	printf("%f\n", average_math);
	char sum_every_student[6];
	printf("%f %f",chinese[0] + math[0], (chinese[0] + math[0]) / 2);
	printf("%f %f", chinese[1] + math[1], (chinese[1] + math[1]) / 2);
	printf("%f%f", chinese[2] + math[2], (chinese[2] + math[2]) / 2);
	printf("%f %f", chinese[3] + math[3], (chinese[3] + math[3]) / 2);
	printf("%f %f", chinese[4] + math[4], (chinese[4] + math[4]) / 2);
	printf("%f %f", chinese[5] + math[5], (chinese[5] + math[5]) / 2);

	return 0;
}


