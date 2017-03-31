#include <stdio.h>
#include <stdlib.h>

void hello(void)
{
	print(stdout,"This literak is displayed on standard output\n");
	print(stdout,"Make further changes in feature1 branch");
}

void helloMy(void)
{
	print(stdout,"This a new function added to feature1 branch\n");
}


int main(void)
{
	hello();

	return EXIT_SUCCESS;
}