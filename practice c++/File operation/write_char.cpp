#include <stdio.h>
#include <string.h>

int main()
{
    FILE *f;
    char name[50]="Imtiaz Zaman Mehedi\n";
    int length=strlen(name);
    f=fopen("write_char.txt","w");
    if(f==NULL)
    {
        printf("File does't exist\n");
    }
    else
    {
        printf("File exist\n");
        for (int  i = 0; i < length; i++)
        {
            fputc(name[i],f);
        }
        printf("File written sucessfully!\n");
        
    }
    
    fclose(f);

}