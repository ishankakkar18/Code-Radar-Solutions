#include <stdio.h>
int main() {
    int a,b;
    scanf("%d",&a);
    scanf("%d",&a);
    if (b>a)
    {
        printf("Profit");
    }
    else if (a>b){
        printf("Loss");

    }
    else if (a==b){
        printf("No Profit No Loss");
    }

    return 0;
}