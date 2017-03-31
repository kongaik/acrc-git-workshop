#include <stdio.h>
#include <stdlib.h>

void hello1(void)
{
	print(stdout,"This literak is displayed on standard output\n");
}

int main(void)
{
	hello1();

	return EXIT_SUCCESS;
}