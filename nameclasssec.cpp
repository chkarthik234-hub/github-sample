#include<stdio.h>
int main()
{
	char name[30],college[30],section[30];
	printf("enter your name\n");
	scanf("%[^\n]s",name);
	printf("enter your college name\n");
	scanf("%s",college);
	printf("enter your section\n");
	scanf("%s",section);
	
	printf("name:%s\n",name);
	printf("college:%s\n",college);
	printf("section:%s\n",section);
	return 0;
}
