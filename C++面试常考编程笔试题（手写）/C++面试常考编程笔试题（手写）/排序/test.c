#include "sort.h"
#include <stdio.h>
#include <stdlib.h>


int  main(int argc, char* argv[])
{
	
	int a[10] = { 72,6,57,88,60,42,83,73,48,85 };
	for (int i = 0; i < 10; ++i)
	{
		printf("%d ", a[i]);
	}
	quick_sort(a, 0, 10 - 1);
	printf("\nÅÅÐòºó£º\n");
	for (int i = 0; i < 10; ++i)
	{
		printf("%d ", a[i]);
	}


	system("pause");
}
