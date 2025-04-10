#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int c=-9900;
    int b=-9900;
    
     int temp;
     for(int i=0;i<n-1;i++){
      if (a[i]>c){
          b=c;
          c=a[i];
      }   
     }
     printf("%d",b*c);
    //     for(int j=i+1;j<n;j++){
    //         if(a[i]>a[j]){
    //          temp=a[i];
    //          a[i]=a[j];
    //          a[j]=temp;
    //         }
    //     }
    // }
    // for(int i=0;i<n;i++){
    //     printf("%d",a[i]);
    // }
    return 0;
}Loading Code...