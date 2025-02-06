#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    int b=a;
    for (int i=1;i<=a;i++)
    {
        if (a>1){for (int j=b;j>=1;j--)
        {printf(" ");}
        for (int k=1;k<=i;k++){

            printf("*");
            
        }
        }
        for(int l=2;l<=i;l++){
            printf("*");
        }
        b--;
        printf("\n");

    }
    else{
        print("*")
    }
    return 0;
}