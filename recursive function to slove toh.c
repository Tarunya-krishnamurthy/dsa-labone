#include <stdio.h>
#include <stdlib.h>
void toh(int n,char s,char d,char t)
{
    if(n==1)
        printf("\n move %d disc from %c to %c",n,s,d);
    else
    {
        toh((n-1),s,t,d);
        printf("\n move %d disc from %c to %c",n,s,d);
        toh(n-1,t,d,s);

    }
}
int main()
{
    int n;
    printf("\n read numbers of discs :");
    scanf("%d",&n);
    toh(n,'s','d','t');
    return 0;
}
