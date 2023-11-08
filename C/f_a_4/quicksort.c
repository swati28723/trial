#include <stdio.h>

int partition(int *a, int start, int end) 
{
    int pivot = a[end];
    int pindex = start;
    
    for (int i = start; i < end; i++) 
    {
        if (a[i] <= pivot) 
        {
            int temp = a[i];
            a[i] = a[pindex];
            a[pindex] = temp;
            pindex++;
        }
    }
    
    int temp = a[pindex];
    a[pindex] = a[end];
    a[end] = temp;
	
	return pindex;
}

void quicksort(int *a, int start, int end) 
{
    if (start < end) 
    {
        int pindex = partition(a, start, end);
        quicksort(a, start, pindex - 1);
        quicksort(a, pindex + 1, end);
    }
}

int main() 
{
    int n;
    scanf("%d", &n);
    int a[n];
    
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }
    
    quicksort(a, 0, n - 1);
    
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", a[i]);
    }
    
    return 0;
}

