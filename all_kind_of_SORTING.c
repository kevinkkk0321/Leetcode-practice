#include <stdio.h>
#include <stdlib.h>
Bubble_sort(int *number,int n);
quicksort(int *data, int left, int right);
void mergesort(int a[],int i,int j);
void swap(int *a, int *b);
void merge(int a[],int i1,int j1,int i2,int j2);

int main()
{
	int n;
	int i=0;
	int j=0;
	int temp=0;
	int k=0;
	int u=0;
	int o=0;
    scanf("%d",&n);
    int number[n];

	while(n)
	{
	for(k=0;k<n;k++)
		scanf("%d",&number[k]);

	mergesort(number,0,n-1);

	for(u=0;u<n;u++){
          printf("%d ",number[u]);
	}
	printf("\n");
	scanf("%d",&n);
	}
	return 0;
}


Bubble_sort(int *number,int n){
  int i;int j; int temp;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(number[j]>number[j+1]) {
				temp=number[j];
				number[j]=number[j+1];
				number[j+1]=temp;
			}
		}
	}
}
void quicksort(vector<int>& nums, int left, int right){
    if(left >= right)
        return;
    int pivot = nums[left];
    int index = left;

    for(int i=index;i<=right;i++){
        if(nums[i]<pivot)
            swap(nums[++index], nums[i]); //the ++index matters
    }
    swap(nums[left], nums[index]);

    quicksort(nums, left, index-1);
    quicksort(nums, index+1, right);
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void mergesort(int a[],int i,int j)
{
    int mid;

    if(i<j)
    {
        mid=(i+j)/2;
        mergesort(a,i,mid);        //left recursion
        mergesort(a,mid+1,j);    //right recursion
        merge(a,i,mid,mid+1,j);    //merging of two sorted sub-arrays
    }
}

void merge(int a[],int i1,int j1,int i2,int j2)
{
    int temp[50];    //array used for merging
    int i,j,k;
    i=i1;    //beginning of the first list
    j=i2;    //beginning of the second list
    k=0;

    while(i<=j1 && j<=j2)    //while elements in both lists
    {
        if(a[i]<a[j])
            temp[k++]=a[i++];
        else
            temp[k++]=a[j++];
    }

    while(i<=j1)    //copy remaining elements of the first list
        temp[k++]=a[i++];

    while(j<=j2)    //copy remaining elements of the second list
        temp[k++]=a[j++];

    //Transfer elements from temp[] back to a[]
    for(i=i1,j=0;i<=j2;i++,j++)
        a[i]=temp[j];
}


/*
Selection_sorting(int *number,int n){
    int array[n];
    int i=0;
    for(i=0;i<n;i++){

    }
}
*/
/*
Insertion_Sort(int *number,int n){
   int i, j, Temp;
   for (i = 1; i <= n; i++)
    {
     Temp=number[i];
     j=i-1;
     while (Temp<number[j])
      {
        number[j+1]=number[j];
        j--;
        if(j==-1) break;
      }
      number[j+1]=Temp;
    }
 }
*/
