#include <stdio.h>
int main(void)
{
 int a,b;  
 int i,j,k; // 
 int gcd=0; // 최대공약수
 
 scanf("%d %d",&a,&b);
 
 for(i=1;i<=a;i++)    
 {
 	if(a%i==0 && b%i==0)
 	{
 	gcd=i;	
	}gcd=i;
 }
 printf("%d", gcd);
 
return 0;
}

