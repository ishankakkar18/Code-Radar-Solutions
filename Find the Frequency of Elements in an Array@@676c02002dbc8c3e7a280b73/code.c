#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        }
        for(int j=0;j<n/2;j++)
        {int m=1;
        
            for(int k=j+1;k<n;k++){
                
                
                if (a[j]==a[k])
                {
                    m++;
                }
            }
            printf("%d %d",a[j],m);
            printf("\n");
        }

        return 0;
}