#include <stdio.h>		//Header file

int main(void)

{
	/*
	//printf("%-8d\n", 15157);
	//printf("%d%8d%8d", 123,456,789);
	printf("%s %8d %f\n", "ABCDEFG",123456,0.789);
	printf("Print of float:  %8.3f %10.3f", 3.14159265,456.789);
	*/
	printf("data type 별byte 수(char) : %d byte\n", sizeof(char));
	printf("data type 별byte 수(int) : %d byte\n", sizeof(int));
	printf("data type 별byte 수(long) : %d byte\n", sizeof(long));
	printf("data type 별byte 수(float) : %d byte\n", sizeof(float));
	printf("data type 별byte 수(double) : %d byte\n", sizeof(double));
}
