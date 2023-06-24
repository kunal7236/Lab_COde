#include <stdio.h>
#include <stdlib.h>

void mergeSort(int arr[], int start, int end)
{
    if (start < end)
    {
        int mid = (start + end) / 2;
        mergeSort(arr, start, mid);
        mergeSort(arr, mid + 1, end);
        merge(arr, start, mid, end);
    }
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        (i!=n-1)? printf("%d,", arr[i]): printf("%d", arr[i]);
    }
    printf("\n");
}

void merge(int arr[], int start, int mid, int end)
{
    int i, j, k;
    int p1 = mid - start + 1;
    int p2 = end - mid;

    int left[p1], right[p2];

    for (int i = 0; i < p1; i++)
    {
        left[i] = arr[start + i];
    }
    for (int j = 0; j < p2; j++)
    {
        right[j] = arr[mid + 1 + j];
    }

    i = 0;
    j = 0;
    k = start;

    while (i < p1 && j < p2)
    {
        if(left[i] <= right[j])
        {
            arr[k] = left[i];
            i++;
        }
        else
        {
            arr[k] = right[j];
            j++;
        }
        k++;
    }
    while (i<p1)
    {
        arr[k] = left[i];
        i++;
        k++;
    }

    while (j<p2)
    {
        arr[k] = right[j];
        j++;
        k++;
    }
}

int main()
{
    int n;
    printf("Enter size of Array: ");
    scanf("%d", &n);
    int arr[n];
    printf("\n");
    for(int i=0;i<n;i++)
    {
        printf("Enter %dth element: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("\nInput Array is: \n");
    print(arr, n);
    mergeSort(arr, 0, n - 1);
    printf("\nSorted Array is: \n");
    print(arr, n);
    return 0;
}
