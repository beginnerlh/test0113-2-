//1.һ��������ֻ�����������ǳ���һ�Σ�
//�����������ֶ����������Ρ�
//�ҳ����������֣����ʵ�֡�
//
//
//2.����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ��
//��20Ԫ�����Զ�����ˮ��
//���ʵ�֡�
//
//3.ģ��ʵ��strcpy
//4.ģ��ʵ��strcat

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
	int a = 0;//��ˮ��
	int b = 0;//��ƿ��
	int m = 0;//����Ǯ��
	int count = 0;//���򵽵�����
	printf("������Ǯ��->");
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