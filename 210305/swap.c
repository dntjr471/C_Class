/* swap.c*/
//두개의 변수 a와 b의 교환 (SWAP)
//a=b; b=a; (x)
//a=10; b=20; 일때, c라는 변수가 필요함.
//c=a; a=b; b=c;

void iswap(int *a, int *b);
void fswap(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
