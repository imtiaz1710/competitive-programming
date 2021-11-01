#include <iostream>
#include <cstdio>
using namespace std;

int main()
{

    int n;
    char s[7];
    scanf("%s", s);
    printf("output");
    scanf("%d", &n);
    if (n == 1)
        printf(" %d", n);
    else
        printf(": %d", n);
    while(scanf("%d", &n))
        printf(" %d", n);

    printf(".");

}
