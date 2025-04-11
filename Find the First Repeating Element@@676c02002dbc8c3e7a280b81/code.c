#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }int a=0;

    for(int i=0;i<n-1 ;i++){
        for(int j=i+1;j<n;j++){
            if (a[i]==a[j]){
                printf("%d",a[i]);
                a=1;
                break;
            }
            
        }
        if(a==1){
            break;
        }
    }
    return 0;}