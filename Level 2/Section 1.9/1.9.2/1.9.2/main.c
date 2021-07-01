//main.c enables user to write some characters into a named txt file
#include <stdio.h>;
int main()
{
	char filename[64];
	printf("Enter the Filename:\n");
	scanf_s("%s",&filename,64);
	char c = getchar();//use getchar() to remove the empty line;
	FILE *fp;
	errno_t err;
	if ((err = fopen_s(&fp, filename, "w")) != 0 && fp != NULL)//check if the filepath exists
	{
		printf("cannot open file.\n");
		fclose(fp);
	}
	else 
	{
		printf("Type any characters you want\n");
		int i;
		while ((i = getchar()) != 1 && fp !=NULL)
		{
			fputc(i,fp);
		}
		fflush(stdin);
		fputs("CTRL + A is a correct ending.\n", fp);
		fclose(fp);
	}
	return 0;
}


