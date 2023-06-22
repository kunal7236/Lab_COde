                       /*Solution 21*/

#include <stdio.h>
void bubbleSort(int *arr, int n)
 {
    int i, j;
    for (i = 0; i < n - 1; i++) 
    {
        for (j = 0; j < n - i - 1; j++) 
        {
            if (*(arr + j) > *(arr + j + 1)) 
            {
                // Swap elements using indirection operator '*'
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

int main() 
{
    printf("Enter the size of array\n");
    int n;
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d numbers\n",n);
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);

    printf("Source Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    
    bubbleSort(arr, n);
    
    printf("\nSorted Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    
    return 0;
}
