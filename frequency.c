#include <stdio.h>
 void countFreq(int a[10],int n,int Freq[10])    
 {
  for (int i = 0; i < n; i++)
  {
   int Count = 1;
   for(int j = i + 1; j < n; j++)
    {
     if(a[i] == a[j])    
     {
    	Count++;
    	Freq[j] = 0;    
     }
    }
    if(Freq[i] != 0)        
    {
    Freq[i] = Count;
    }
 }
  printf("\n The Frequency of the elements in this Array is : \n");
for (int i = 0; i < n; i++)
 {
  if(Freq[i] != 0)        
  {
  printf("%d Occurs %d Times \n", a[i], Freq[i]);
  }		
 }
 }
int main()
{
 int  i, j, n;	
 printf("\n Enter the number of elements in an array  :   ");
 scanf("%d", &n);               	
  int a[10], Freq[10];            
  printf("\n Enter the elements of an Array  :  ");
  for (i = 0; i < n; i++)       
  {
   scanf("%d", &a[i]);
    Freq[i] = -1;   
  }     
   countFreq(a,n,Freq);		     
}
