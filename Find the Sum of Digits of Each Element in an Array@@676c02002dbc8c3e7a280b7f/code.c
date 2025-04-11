#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);

    }
    int r,rem;
    for(int i=0;i<n;i++){
        int sum =0;
        while (a[i]>-88888)
        {
            r=a[i]%10;
            sum =sum+r;
            a[i]=a[i]/10;

        }
        printf("%d ",sum);
    }

    return 0;

}