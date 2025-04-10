// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int a[n];
//     for(int i=0;i<=n;i++){
//         scanf("%d",&a[i]);}
//         int temp=-9900;
//         int max;
//     for(int i=0;i<n;i++){
//         if(a[i]>=temp)
//         {
//             max=temp;
//             temp=a[i];
            
//         }
        

//     }
//     printf("%d",max);

//     return 0;
// }
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int first = -2147483648;
    int second = -2147483648;

    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    if (second == -2147483648)
        printf("-1\n");
    else
        printf("%d\n", second);

    return 0;
}
