#include <stdio.h>
int GetCD(int num1, int *arr1)
//int GetGCD(arr1,arr2)

int main()
{
	int num1, num2; 
	int n1, n2, MaxNum;	//���  
	int arr1[100], arr2[100];	//������ �迭 ���� 
	
	printf("�� ������ �Է��Ͻÿ�:");
	scanf("%d %d", &num1, &num2);
	
	n1 = GetCD(num1, arr1);	// n1:ù ��° ���� ���  
	n2 = GetCD(num2, arr2);	// n2:�� ��° ���� ��� 
	
	MaxNum = GetGCD(arr1,arr2);
	
	printf("%d�� ��� : ",num1);
	for(int i=0; i<n1; i++) printf("%d ",arr1[i]);
	printf("\n%d�� ��� : ",num2);
	for(int i=0; i<n2; i++) printf("%d ",arr2[i]);

	
	printf("\n\n%d�� %d�� �ִ������� %d�Դϴ�. \n", num1,num2,MaxNum);
	
	int GetCD(int num1, int *arr1)
	{
		int i,j,k;
		
		for(i=1, j=0; i<num1; i++)
		{
			if (num1%i == 0) 
			{
				*(arr+j)= i;
				j++;
			}
		}
	}
	
	int GetGCD(int arr1, int n1, int *arr2, int n2)
	{
		int i,j,k;
		
		for(i=n1;i>0;i--)
		{
			for(j=0; j<n2; j++)
			{
				if(*(arr1+i) == *(arr2+j)) return *(arr1+i);
			}
		}
		return -1;
	}
	
	int GetGCD(int n1, int n2)
	{
		int i,j,k;
		
		for(int i=n1;i>0;i--)
		{
			if(n1%i == 0 && n2%i == 0)
			return i;
		}
	}
	
	return 0;
}

