#include <stdio.h>

int GetMin(int *p, int n);
int main(void)
{
	int a[5];
	int min;
	
	printf("5개의 숫자를 입력하세요.\n");
	scanf("%d %d% %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4]);
	
	min = GetMin(a,5);
	printf("입력된 숫자 중 가장 작은 값은  %d입니다. \n", min);
	
	printf("-----------------------------------------\n");
	printf("입력된 숫자 중 처음 두 수는 %d와 %d입니다. \n", a[0], a[1]);
	swap(a,a+1);
	printf("입력된 숫자 중 처음 두 수를 교환하면 %d와 %d입니다. \n", a[0], a[1]);
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


