	 #include<stdio.h>

	 int sortarray(int *a, int *b)
	 {
	     return *a - *b;
	 }
	 int main()
	 {
	     int arr[]={34,2,67,12,8,34};
	     int n=sizeof(arr)/sizeof arr[0];
	     
        qsort(arr, n, sizeof(int), sortarray);
        
	    for(int i=0;i<n;i++)
	    {
	        printf("%d ",arr[i]);
	    }
	     return 0;
	 }
