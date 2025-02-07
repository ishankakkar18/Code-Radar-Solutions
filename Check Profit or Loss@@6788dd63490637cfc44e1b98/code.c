#include <stdio.h>
int main() {
    int a,b;
    scanf("%d",&a);
    scanf("%d",&a);
    if (a<b)
    {
        printf("Profit");
    }
    else if (b<a){
        printf("Loss");

    }
    else if (a==b){
        printf("No Profit No Loss");
    }

    return 0;
}