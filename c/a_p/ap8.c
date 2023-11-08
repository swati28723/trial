//8.Take two sorted lists of size m and n from the user as input and return the median of the two sorted lists.
#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int* list1=(int*)malloc(100*sizeof(int));
    int* list2=(int*)malloc(100*sizeof(int));
    int* mergedList=(int*)malloc(100*sizeof(int));
    int len1, len2, i = 0, j = 0, k = 0, e=0;

    printf("Enter length of list 1: ");
    scanf("%d", &len1);
    printf("Enter sorted list 1: ");
    for (i = 0; i < len1; i++) 
    {
        scanf("%d", &list1[i]);
    }

    printf("Enter length of list 2: ");
    scanf("%d", &len2);
    printf("Enter sorted list 2: ");
    for (i = 0; i < len2; i++) 
    {
        scanf("%d", &list2[i]);
    }

    i = 0;
    j = 0;
    while (i < len1 && j < len2) 
    {
        if (list1[i] <= list2[j]) 
        {
            mergedList[k++] = list1[i++];
        } 
        else
        {
            mergedList[k++] = list2[j++];
        }
    }
    while (i < len1) 
    {
        mergedList[k++] = list1[i++];
    }
    while (j < len2) 
    {
        mergedList[k++] = list2[j++];
    }
    printf("Merged list=[");
    for (i = 0; i < k; i++)
     {
        printf("%d ", mergedList[i]);
        e=e+1;
     }
    printf("]");
    printf("\n");
    
    int c=e/2, b=c-1;
    float median;
    if (e%2==0)
    {
    median=(mergedList[c]+mergedList[b])/2.0;
    }
    else
    {
    median=mergedList[c];
    }
    printf("Median of two sorted list is %.1f\n", median);
    free(list1);
    free(list2);
    free(mergedList);

    return 0;
}

