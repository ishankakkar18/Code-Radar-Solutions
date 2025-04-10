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
    int n, i, first, second;

    // Ask user for the number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Check if array size is valid
    if (n < 2) {
        printf("At least two elements are required.\n");
        return 0;
    }

    int arr[n];

    // Input elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    first = second = -2147483648;  // or use INT_MIN if <limits.h> is included

    for (i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }
    printf("%d",second );

    // if (second == -2147483648)
    //     printf("No second largest element (all elements are same).\n");
    // else
    //     printf("Second largest element is %d\n", second);

     return 0;
}
