//5.Take two sorted lists from the user as input and Merge them into a single sorted list
#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int* list1=(int*)malloc(100*sizeof(int));
    int* list2=(int*)malloc(100*sizeof(int));
    int* mergedList=(int*)malloc(100*sizeof(int));
    int len1, len2, i = 0, j = 0, k = 0;

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

    printf("Merged_list: ");
    for (i = 0; i < k; i++)
     {
        printf("%d ", mergedList[i]);
     }
    printf("\n");
    free(list1);
    free(list2);
    free(mergedList);

    return 0;
}		      

