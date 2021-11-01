#include <stdio.h>
//#include <conio.h>
#include <stdlib.h>
int main()
{

FILE *fp;
char name[50];
//clrscr();
fp=fopen("read_and_write_string.txt","w");
if(fp==NULL)
{
    puts("Cannot open file");
    exit(0);
}
fprintf(fp,"Manarat International University\n");
fprintf(fp,"This is a new program\n");
printf("What is your name? :\n");
gets(name);
fprintf(fp,"%s\n",name);
fprintf(fp,"Your name is %s",name);
fclose(fp);
//getch();
return 0;
}
