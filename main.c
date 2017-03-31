#include <stdio.h>
#include <stdlib.h>

void hello(void)
{
	print(stdout,"This literak is displayed on standard output\n");
	print(stdout,"Make further changes in feature1 branch")
}

int main(void)
{
	hello();

	return EXIT_SUCCESS;
}