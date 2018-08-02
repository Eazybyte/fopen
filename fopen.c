#include<stdio.h>
#include<string.h>
int main()
{
	char a[10];
	FILE *fp;
	fp=fopen("abc.txt","r");
	fscanf(fp,"%s",a);
	printf("%s",a);
	fclose(fp);
	return 0;
}
