#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	FILE* ptr;
	char ch;
	ptr = fopen("15.09 student details.cpp", "r");

	if (NULL == ptr) {
		printf("file can't be opened \n");
	}
	printf("content of this file are \n");
	do {
		ch = fgetc(ptr);
		printf("%c", ch);
	} while (ch != EOF);
	fclose(ptr);
	return 0;
}

