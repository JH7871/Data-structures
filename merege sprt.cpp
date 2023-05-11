  #include <stdio.h>
  void merge (int arr [],int p,int q,int r) 
  {
  	int n1 =q-p+1;
  	int n2 = r-q;
  	int L[n1],M[n2];
  	for (int i=0; i<n1;i++)
  	L[i] =arr[p+i];
  	for (int j=0;j<n2;j++)
  	M[j]= arr [q+1+j];
  	int i,j,k;
  	i=0;
  	j=0;
  	k=p;
  	if (L[i]<=M[j])
     while (i<n1&& j<n2)
     if(L[i]<=M[j])
     {
     	arr[k]=L[i];
     	i++;
	 }
	 else
	 {
	 	arr[k]=M[j];
	 	j++;
	 }
	 k++;
   while (i < n1) 
   {
}
   {
   	arr[k]=L[i];
   	i++;
   	k++;
   }
   while (j < n2)
   {
   	arr[k]=M[j];
   	j++;
   	k++;
   }
}
void mergeSort(int arr[], int l, int r)
{
	if(1<r)
	 int m = l + (r - l) / 2;
	{
		 mergeSort(arr, l, m);
		merge sort(arr,1,m,r);
			}
			merge (arr ,1,m,r);
}
}
void printarray (int arr[],int size)
{
	for int i=0;i<size; i++)
	printf("%d",arr[i]);
	printf("\n");
}
int main()
{
	int arr[]={6,5,12,10,9,1};
	int size =size of (arr)/size of (arr[0]);
}
merge sort(arr,0,size -1);
printf("sorted array:\n");
printarray(arr ,size);
}