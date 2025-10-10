#include <stdio.h>
#include <stdlib.h>
int gcd(int a,int b)
{
    if(a==b)return a;
    else if (a>b)
        return gcd(a-b,b);
        return gcd(b,a);
}

int main(int a,int b)
{
    printf("read the values for a and b:\n");
    scanf("%d%d",&a,&b);
    printf("gcd of %d and %d is %d",a,b,gcd (a,b));
    return 0;
}
