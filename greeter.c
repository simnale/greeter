#include <stdio.h>

int main(int argc, char const *argv[])
{
	char name[20];
	printf("Please tell me your name!\n>");
	scanf("%s", name);
	printf("Hello, %s!\n", name);
	return 0;
}