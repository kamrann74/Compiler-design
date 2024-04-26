#include<stdio.h>
#include<conio.h>

int spaces=0;
char sentence[100];
int i;
int main()
{
	printf("Enter the string");
	scanf("%[^\n]",&sentence);
	for (i=0; sentence[i]!='\0'; i++)
	{
		if (sentence[i]==' '){
		
		spaces++;
	}
	}
	printf("No of spaces are %d ",spaces);
}
