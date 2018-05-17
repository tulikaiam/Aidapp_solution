#include<stdio.h>
#include<stdlib.h>

int main()
{
  long int n;
  //int h=2000;
  int inj=1;
long int maxinj=1000000;
  int i;
  scanf("%ld",&n);
  int * a= (int *)malloc(sizeof(int)*n);
  int * b= (int *)malloc(sizeof(int)*n);
  for( i =0;i<n;i++)
  {
    scanf("%d",&a[i]);

  }
  for(i=0;i<n;i++)
  {
  int h=2000;
  int  s=h-a[i];
  long int w=inj*a[i];
  int j=i;
  int count =0;
    while(s>=0 && w<=maxinj)
    {
      j++;
      s=s-a[j];
      count=count+1;
	w=w*a[j];
	
    }
    b[i]=count;

  }
  int m=i;
  /*for(int k=0;k<i;k++)
  {
    printf("%d\t",b[k]);
  }*/
  int x= sizeof(b)/sizeof(b[0]);
  printf("%d", largest(b, x));
}

int largest(int arr[], int n)
{
    int i;

    // Initialize maximum element
    int max = arr[0];

    // Traverse array elements from second and
    // compare every element with current max
    for (i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];

    return max;
}
