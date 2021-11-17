#include <stdio.h>
transfer(int *a,int *b,int n)
{
  int i;
  for(i=0; i<n; i++)
   {
    b[i]=a[i];
   }
 }
 print(int temp[],int n)
 { 
   int i;
   for(i=0; i<n; i++)
    {
    printf("%d ",temp[i]);
    }
}
int main()
{
    int a[30],b[30],i,n;
    printf("Enter size of the array : ");
    scanf("%d", &n);
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    transfer(a,b,n);
    printf(" first array : ");
    print(a,n);
    printf("\nsecond array : "); 
    print(b,n);
}
