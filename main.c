#include <stdio.h>
#include <stdlib.h>

void helloNew01(void)
{
	print(stdout,"Make further changes in feature1 branch");
}

void helloNew02(void)
{
	print(stdout,"This a new function added to feature1 branch\n");
}


int main(void)
{
	hello();

	return EXIT_SUCCESS;
}
