#include <stdio.h>
//
//int main (void)
//{	
//	int a = 1 ,b = 100 ,result = 0;
//	
//	printf("������ ���� �� ����� ���� �� ���� �Է��ϼ���.\n"); // Ȧ���� �ո�  
//	printf("1���� 30������ 5�� ����� \n", a, b);
//
//	int t = a;
//	
//	int res1=0, res2=0; // res1:Ȧ���� �� res2:¦���� �� 
//	for (int i=a; i<=b; i++)
//	{
//		if(i%2==0) // ¦��
//		{
//			res2 += i; 
//		}
//		else	   // Ȧ��
//		{
//			res1 += i; 
//		}
//		if(i%5==0)
//		{
//			printf("%7d",i);
//		}
//	}
//	printf("\n");
//	printf("���� ���\n");
//	printf("a = %d\n b = %d\n", t, b);
//	printf("¦���� �� = %d\n", res2);
//	printf("Ȧ���� �� = %d\n", res1);
//	
//	return 0;
//}


int main (void)
{
	int a = 1 ,b = 100 ,result = 0;
	
	printf("������ ���� �� ����� ���� �� ���� �Է��ϼ���.\n"); // Ȧ���� �ո�  
	printf("1���� 30������ 5�� ����� \n", a, b);

	int t = a;
	
	int res1=0, res2=0; // res1:Ȧ���� �� res2:¦���� �� 
	int res3=0, res4=0, res5=0, res6=0, res7=0, res8=0, res9=0;
	for (int i=a; i<=b; i++)
	{
//		if(i%2==0) // ¦��
//		{
//			res2 += i; 
//		}
//		else if()	   // Ȧ��
//		{
//			res1 += i; 
//		}
//		else if()
//		if(i%5==0)
//		{
//			printf("%7d",i);
//		}
		if(i%9==0) res9+=i;
		else if(i%8==0) res8+=i;
		else if(i%7==0) res7+=i;
		else if(i%6==0) res6+=i;
		else if(i%5==0) res5+=i;
		else if(i%4==0) res4+=i;
		else if(i%3==0) res3+=i;
		else if(i%2==0) res2+=i;
		else res1 += i;
	}
	printf("\n");
	printf("�ݺ����� �̿��� ���� ���\n");
	printf("a = %d\nb = %d\n", t, b);
	printf("9�� ����� �� = %d\n", res9);
	printf("8�� ����� �� = %d\n", res8);
	printf("7�� ����� �� = %d\n", res7);
	printf("6�� ����� �� = %d\n", res6);
	printf("5�� ����� �� = %d\n", res5);
	printf("4�� ����� �� = %d\n", res4);
	printf("3�� ����� �� = %d\n", res3);
	printf("2�� ����� �� = %d\n", res2);
	printf("������ ����� �� = %d\n", res1);
	
	return 0;
}
