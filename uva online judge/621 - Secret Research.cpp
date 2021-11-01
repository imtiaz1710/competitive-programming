#include <cstdio>
#include <cstring>
int main()
{
    int t;
    char num[1000];
    scanf("%d",&t);
    while(t>0){
            scanf("%s",num);

    int len=strlen(num);
        if(strcmp(num,"1")==0||strcmp(num,"4")==0||strcmp(num,"78")==0)
        {
            printf("+\n");
            t--;
            continue;
        }
        if(num[len-1]=='5'&&num[len-2]=='3')
        {
            printf("-\n");
            t--;
            continue;
        }
        if(num[0]=='9'&&num[len-1]=='4')
        {
            printf("*\n");
             t--;
            continue;
        }
        if(num[0]=='1'&&num[1]=='9'&&num[2]=='0')
        {
            printf("?\n");
             t--;
            continue;
        }
     printf("?\n");
    }
    return 0;
}
