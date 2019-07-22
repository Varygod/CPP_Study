#include "mystring.h"
#include <stdlib.h>
#include <stdio.h>

int  main(int argc, char* argv[])
{
	//char *str = "abcdefg";
	//char buf[1024] = { 0 };
	//mystrcpy(buf, str);
	//printf("buf = %s", buf);

	char str[] = "0123456789";
	//mymemcpy(str + 1,str + 0, 9);
	//printf("%s\n", str);
	mymemcpy(str, str + 5, 5);
	printf("%s\n", str);
	system("pause");
}
