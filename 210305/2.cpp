#include <stdio.h>

int GetMin(int *p, int n);
int main(void)
{
	int a[5];
	int min;
	
	printf("5���� ���ڸ� �Է��ϼ���.\n");
	scanf("%d %d% %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4]);
	
	min = GetMin(a,5);
	printf("�Էµ� ���� �� ���� ���� ����  %d�Դϴ�. \n", min);
	
	printf("-----------------------------------------\n");
	printf("�Էµ� ���� �� ó�� �� ���� %d�� %d�Դϴ�. \n", a[0], a[1]);
	swap(a,a+1);
	printf("�Էµ� ���� �� ó�� �� ���� ��ȯ�ϸ� %d�� %d�Դϴ�. \n", a[0], a[1]);
}

int GetMin(int*p, int n)
{
	int min = *p;
	int i,j,k;
	
	for(int i=0; i<n; i++)
	{
		if(min > *(p+i))
		{
			min = *(p+i);
		}
	}
	return min;		
}


