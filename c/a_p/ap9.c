#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,item;
	printf("Enter len of list: ");
	scanf("%d", &n);
	//int l[n];
	//int* ptr=l;
	int* l=(int*)malloc(n*sizeof(int));
	for (int i=0; i<n; i++)
	{
		scanf("%d", &l[i]);//scanf("%d", ptr+i);
	}
	printf("Enter search value: ");
	scanf("%d", &item);
	int high=n-1;
	int low=0;
	int mid, guess;
	while (low<=high)
	{
		mid=(low+high)/2;
		guess=l[mid];
		if (guess==item)
		{
			printf("Indexing value of search item is %d\nAnd search value is %d\n", mid, guess);
			break;
		}
		else if (guess>item)
		{
			high=mid-1;
		}
		else
		{
			low=mid+1;
		}
}
free(l);
return 0;
}

