#include <stdio.h>

void merge(int arr[], int left[], int leftSize, int right[], int rightSize) 
{
    int i = 0, j = 0, k = 0;
    
    while (i < leftSize && j < rightSize) 
    {
        if (left[i] <= right[j]) 
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

    while (i < leftSize) 
    {
        arr[k] = left[i];
        i++;
        k++;
    }

    while (j < rightSize) 
    {
        arr[k] = right[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int n) 
{
    if (n <= 1) 
    {
        return;
    }
    
    int mid = n / 2;
    int left[mid];
    int right[n - mid];
    
    for (int i = 0; i < mid; i++) 
    {
        left[i] = arr[i];
    }

    for (int i = mid; i < n; i++) 
    {
        right[i - mid] = arr[i];
    }
    
    mergeSort(left, mid);
    mergeSort(right, n - mid);
    merge(arr, left, mid, right, n - mid);
}

int main() 
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    mergeSort(arr, n);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

