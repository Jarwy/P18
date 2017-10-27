#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	char string1[90] = "Welcome";
	char string2[90];

	int len;

	strcpy(string2,string1);
	printf("srting2=%s\n", string2);

	len = strlen(string2);
	printf("¦r¦êªø«×¬°:%d\n", len);
	system("pause");
	return 0;
}