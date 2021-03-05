#include <stdio.h>
//
//int main (void)
//{	
//	int a = 1 ,b = 100 ,result = 0;
//	
//	printf("범위의 누적 값 계산을 위한 두 수를 입력하세요.\n"); // 홀수의 합만  
//	printf("1에서 30사이의 5의 배수는 \n", a, b);
//
//	int t = a;
//	
//	int res1=0, res2=0; // res1:홀수의 합 res2:짝수의 합 
//	for (int i=a; i<=b; i++)
//	{
//		if(i%2==0) // 짝수
//		{
//			res2 += i; 
//		}
//		else	   // 홀수
//		{
//			res1 += i; 
//		}
//		if(i%5==0)
//		{
//			printf("%7d",i);
//		}
//	}
//	printf("\n");
//	printf("누적 계산\n");
//	printf("a = %d\n b = %d\n", t, b);
//	printf("짝수의 합 = %d\n", res2);
//	printf("홀수의 합 = %d\n", res1);
//	
//	return 0;
//}


int main (void)
{
	int a = 1 ,b = 100 ,result = 0;
	
	printf("범위의 누적 값 계산을 위한 두 수를 입력하세요.\n"); // 홀수의 합만  
	printf("1에서 30사이의 5의 배수는 \n", a, b);

	int t = a;
	
	int res1=0, res2=0; // res1:홀수의 합 res2:짝수의 합 
	int res3=0, res4=0, res5=0, res6=0, res7=0, res8=0, res9=0;
	for (int i=a; i<=b; i++)
	{
//		if(i%2==0) // 짝수
//		{
//			res2 += i; 
//		}
//		else if()	   // 홀수
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
	printf("반복문을 이용한 누적 계산\n");
	printf("a = %d\nb = %d\n", t, b);
	printf("9의 배수의 합 = %d\n", res9);
	printf("8의 배수의 합 = %d\n", res8);
	printf("7의 배수의 합 = %d\n", res7);
	printf("6의 배수의 합 = %d\n", res6);
	printf("5의 배수의 합 = %d\n", res5);
	printf("4의 배수의 합 = %d\n", res4);
	printf("3의 배수의 합 = %d\n", res3);
	printf("2의 배수의 합 = %d\n", res2);
	printf("나머지 배수의 합 = %d\n", res1);
	
	return 0;
}
