#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int b=0;

    for(int i=0;i<n-1 ;i++){
        for(int j=i+1;j<n;j++){
            if (a[i]==a[j]){
                printf("%d",a[i]);
                b=1;
                break;
            }
            
        }
        if(b==1){
            break;
        }
    }
    if (b==0){
        printf("-1");
    }
    return 0;}