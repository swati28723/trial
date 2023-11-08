/*#include <stdio.h>
int main()
{
int n1, n2;
printf("Enter len of array1: ");
scanf("%d", &n1);
int array1[n1];
printf("Enter array1\n");
for (int i=0; i<n1; i++)
{
	scanf("%d", &array1[i]);
}

printf("Enter len of array2: ");
scanf("%d", &n2);
int array2[n2];
printf("Enter array2\n");
for (int i=0; i<n2; i++)
{
	scanf("%d", &array2[i]);
}

int array3[n1+n2];
for (int i=0; i<n1+n2; i++)
{
	scanf("%d", );

}

*/

#include <stdio.h>
int main()
{
int array1[]={1,2,3};
int array2[]={1,2,3,1,2,3};
int n1=sizeof(array1)/sizeof(array1[0]);
int n2=sizeof(array1)/sizeof(array1[0]);
int array3[n1+n2];
int c=0;
for (int i=0; i<n1; i++)
{
array3[c]=array1[i];
c++;
}
for (int i=0; i<n2; i++)
{
array3[c]=array2[i];
c++;
}
printf("merged_array: ");
for (int i=0; i<n1+n2; i++)
{
printf("%d ", array3[i]);
}
printf("\n");
int array4[100];
int p=0;
for (int i=0; i<n1+n2; i++)
{	
	int count=0;
	for (int j=i+1; j<n1+n2; j++)
	{
		if (array3[i]==array3[j])
		{
			count++;
		
		
		       if (count==1)
			{
			array4[p]=array3[i];
			p++;
			}
			
		}
	}
}	
	printf("Duplicate_array: ");
	for (int i=0; i<p; i++)
	{
	printf("%d ", array4[i]);
	}	

printf("\n");			
return 0;
}
