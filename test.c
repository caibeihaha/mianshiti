#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
//bool Find(int *a, int rows, int cols, int key)
//{
//	int i = 0;
//	int j = cols;
//	while (i<rows && j >= 0)
//	{
//		if (a[i*cols + j - 1] == key)
//		{
//			return  true;
//		}
//
//		else if (a[i*cols + j - 1] > key)
//		{
//			j--;
//		}
//		else
//		{
//			i++;
//		}
//	}
//	return false;
//}
//int main()
//{
//	int a[4][4] = { { 1, 2, 8, 9 }, { 2, 4, 9, 12 }, { 4, 7, 10, 13 }, { 6, 8, 11, 15 } };
//	int ret = Find(a, 4, 4, 18);
//	if (ret > 0)
//	{
//		printf("yes");
//	}
//	else
//	{
//		printf("no");
//	}
//	system("pause");
//	return 0;
//}



//void Creat(char a[],int size)
//{
//	int count = 0;
//	char *p = a;
//	while (*p != '\0')
//	{
//		if (*p == ' ')
//		{
//			count++;
//		}
//		p++;
//	}
//	int num = size + 2* count;
//	char *p1 = a + size;
//	char *p2 = a + num;
//	while (p1 != p2)
//	{
//		while (*p1 != ' ')
//		{
//			*p2 = *p1;
//			p2--;
//			p1--;
//		}
//		if (*p1 == ' ')
//		{
//			*(p2--) = '0';
//			*(p2--) = '2';
//			*(p2--) = '%';
//			p1--;
//		}
//	}
//}
//int main()
//{
//	char a[20] = "we are happy.";
//	Creat(a, strlen(a));
//	printf("%s\n", a);
//	system("pause");
//	return 0;
//}
//

//int Find(int n)
//{
//	int count = 0;
//	int num = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		num = i;
//		while (num)
//		{
//			if( num % 10 == 1)
//			{
//				count++;
//			}
//			num= num / 10;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int n = 12;
//	int ret = Find(n);
//	printf("%d", ret);
//	system("pause");
//	return 0;
//}

//int Isbig()
//{
//	int n = 1;
//	char *p = &n;
//	if (*p == 1)
//	{
//		return -1;
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//	int ret = Isbig();
//	if (ret > 0)
//	{
//		printf("big");
//	}
//	else
//	{
//		printf("small");
//	}
//	system("pause");
//	return 0;
//}
//int Count(int n)
//{
//	int num = 0;
//	while (n)
//	{
//		if (n & 1 == 1)
//		{
//			num++;
//		}
//		n = n >> 1;
//	}
//	return num;
//}
//int main()
//{
//	int n = -1;
//	int ret = Count(n);
//	printf("%d", ret);
//	system("pause");
//	return 0;
//}
//int Count(int n)
//{
//	int num = 0;
//	int flag = 1;
//	while (flag)
//	{
//		if (n & 1 == 1)
//		{
//			num++;
//		}
//		flag = flag <<1;
//	}
//	return num;
//}
//int main()
//{
//	int n = -1;
//	int ret = Count(n);
//	printf("%d", ret);
//	system("pause");
//	return 0;
//}
//int Count(int n)
//{
//	int num = 0;
//	while (n)
//	{
//		num++;
//		n = n&(n - 1);
//	}
//	return num;
//}
//int main()
//{
//	int n = -1;
//	int ret = Count(n);
//	printf("%d", ret);
//	system("pause");
//	return 0;
//}
//void sort(int a[], int size, bool(*func)(int ))
//{
//	int left = 0;
//	int right = size-1 ;
//	int tem = 0;
//	while (left < right)
//	{
//		while(left<right && !func(a[left]))
//		{
//			left++;
//		}
//		while (left<right &&func(a[right]))
//		{
//			right--;
//		}
//			tem = a[left];
//			a[left] = a[right];
//			a[right] = tem;
//		
//	}
//}
//bool Isgood(int n)
//{
//	if ((n & 1) == 0)
//	{
//		return true;
//	}
//	return false;
//}
//int main()
//{
//	int a[] = { 2, 4, 5, 3, 7, 8, 1, 0 };
//	sort(a, sizeof(a) / sizeof(int), Isgood);
//	for (int i = 0; i < sizeof(a) / sizeof(int); i++)
//	printf("%d ", a[i]);
//	system("pause");
//	return 0;
//}


int find(int a[], int size)
{
	int left = 0;
	int right = size - 1;
	while (left <= right)
	{
		int mid = (left &right) + (left^right) / 2;
		if (a[mid] <= a[left] && a[mid] <= a[right])
		{
			return a[mid];
		}
		else if (a[mid] < a[left])
		{
			right = mid - 1;
		}
		else if (a[mid] > a[right])
		{
			left = mid + 1;
		}
	}
	return -1;
}
int main()
{
	int a[] = { 3, 4, 5, 1, 2 };
	int ret = find(a, 5);
	printf("%d", ret);
	system("pause");
	return 0;
}