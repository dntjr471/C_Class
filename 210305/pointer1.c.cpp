/*pointer1.c*/ 
#include <stdio.h>
 
int main(void)
{
	int aa=2000;
	int a=2005;
	int b=2021; 
	int*pA=&a;
	void *vp;
	
	printf("pA : %08x \n", pA);		//%08x : 8자리의 16진수 표기 
	printf("&a : %08x \n", &a);		// 08 -> 빈 공간은 0으로 채움 
	
	(*pA)++;	//a++ 와 같은 의미
	
	printf("  a : %d \n", a);
	printf("*pA : %d \n", *pA);
	
//	pA++;		// a변수의 다음 주소
	vp = pA++;
	printf("pA : %08x \n", pA);
	printf("*pA : %d \n", *pA);
	printf("vp : %08x \n", vp++);
	printf("vp : %08x \n", vp++);
	
	return 0;
}
