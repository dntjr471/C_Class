/* swap.c*/
//�ΰ��� ���� a�� b�� ��ȯ (SWAP)
//a=b; b=a; (x)
//a=10; b=20; �϶�, c��� ������ �ʿ���.
//c=a; a=b; b=c;

void iswap(int *a, int *b);
void fswap(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
