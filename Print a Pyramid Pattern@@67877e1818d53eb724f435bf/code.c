#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    for (int i=1;i<=a;i++)
    {
        if (a>1){for (int  j=1;j<=i-1;j++)
        {printf(" ");}
        for (int k=1;k<=i;k++){

            printf("*");
            
        }}
        printf("\n");

    }
    return 0;
}