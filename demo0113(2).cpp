//1.一个数组中只有两个数字是出现一次，
//其他所有数字都出现了两次。
//找出这两个数字，编程实现。
//
//
//2.喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，
//给20元，可以多少汽水。
//编程实现。
//
//3.模拟实现strcpy
//4.模拟实现strcat

#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
void Find(int arr[10],int len)
{
	for (int i = 0; i < len; i++)
	{
		int count = 0;
		for (int j = 0; j < len; j++)
		{
			if (arr[i] == arr[j]&&i!=j)
			{
				count++;
			}
		}
		if (count == 0)
		{
			printf("%d\n", arr[i]);
		}
	}
}

void Soad()
{
	int a = 0;//汽水数
	int b = 0;//空瓶数
	int m = 0;//给的钱数
	int count = 0;//能买到的总数
	printf("请输入钱数->");
	scanf("%d", &m);
	while (m >= 1 || b >= 2 || a >= 2)
	{
		if (m > 0)
		{
			a = m;
			m = 0;
			b = a;
			count += a;
		}
		if (a >= 0)
		{
			b = a;
		}
		if (b >= 2)
		{
			a = b / 2;
			b = b - 2 * a;
			count += a;
		}
	}
	printf("%d\n", count);
}

char* Strcpy(char arr1[],char arr2[])
{
	int i = 0;
	for (; arr1[i] != '\0';i++)
	{
		arr1[i] = arr2[i];
	}
	arr1[i] = '\0';
	return arr1;
}
char* Strcat(char arr1[], char arr2[])
{
	int i = 0;
	for (; arr1[i] != 0; i++);
	for (int j = 0; arr2[j] != '\0'; j++,i++)
	{
		arr1[i] = arr2[j];
	}
	arr1[i] = '\0';
	return arr1;
}
int main()
{
	/*int arr[10] = { 1, 2, 3, 4, 5, 4, 6, 3, 1, 5 };
	int a = sizeof(arr) / sizeof(int);
	Find(arr,a);*/
	//Soad();
	char arr1[1024] = "abcd";
	char arr2[] = "ABCD";
	//Strcpy(arr1, arr2);
	Strcat(arr1, arr2);
	printf("%s\n", arr1);
	system("pause");
	return 0;
}