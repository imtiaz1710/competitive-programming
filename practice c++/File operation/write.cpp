#include <stdio.h>

int main()
{
    FILE *f;
    f=fopen("write.txt","w");
    if(f==NULL)
    {
        printf("File does't exist\n");
    }
    else
    {
        printf("File exist\n");
        fprintf(f,"How are you all?");
    }
    
    fclose(f);

}