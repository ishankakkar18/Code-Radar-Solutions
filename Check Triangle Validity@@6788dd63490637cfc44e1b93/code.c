#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    d=a*a;
    e=b*b;
    f=c*c;
    if (d+f==e||e+f==d||d+e==f)
    {
        printf("Valid");

    }
    else
    {
        printf("Invalid");
           }
    return 0;
}