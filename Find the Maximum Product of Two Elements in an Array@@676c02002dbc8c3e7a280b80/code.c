#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);

    }
    int temp;

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                temp =a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }

    }
printf("%d",a[n-1]*a[n-2]);
    return 0;}
