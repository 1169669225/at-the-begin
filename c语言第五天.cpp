#include <stdio.h>
int main()
{
	int i, j= 0, k, n = 0, sumi = 0;
	scanf_s("%d",&i);
	for (k = 0; k >= ((1 + 2 * j) - 1) / 2; k++)//ÿ�㼸���ո�
	{
		printf(" ");
	}
	for (j = 1; j <= i; j++)//ÿһ��������Ǽ�
	{
		
		
		for (n = (1+2*j); n <= (1 + 2 * j); n++)//ÿ�㼸������
		{
			printf("j");
		}
		printf("\n");
	}
	return 0;
}

//��ϰ5-7!!!!!!!
//#include <stdio.h>
//int main()
//{
//	int i, j, k, n, m;
//	printf("���ݸ�����");
//	scanf_s("%d",&i);
//	printf("1�ţ�");
//	scanf_s("%d", &j);
//	printf("2�ţ�");
//	scanf_s("%d", &k);
//	printf("3�ţ�");
//	scanf_s("%d", &n);
//	printf("4�ţ�");
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
		sum_chinese = sum_chinese + chinese[i];//�ܷ�
	}
	for (j = 0; j <= 5; j++)
	{
		scanf_s("%d", &math[j]);
		sum_math = sum_math + math[j];//�ܷ�
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


