#include <stdio.h>
int main() {
    int a;
    int m=a;
    int x=1;
    scanf("%d",&a);
    for(int i=1;i<=(2*a)-1;i++){
        for(int j=1;j<m;j++){
            printf(" ");
        }
        for(int k=1;k<=x;k++){
            printf("*");

        }
        if(i<a){
            m--;
            x =x+2;
        }
        else{
            m++;
            x =x-2;
        }
    }

    return 0;
}