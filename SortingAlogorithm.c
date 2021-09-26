#include <stdio.h>

int main() {
  int A[5];
  int j,key,i,x;


  //get 5 values and store them in array
  for(x=0; x<5; x++)
  {
    printf("Element [%d] :",x);
    scanf("%d",&A[x]);

  }

  //insertion sort
  for(j=1; j<5; j++)
  {
    key = A[j];
    i = j-1;

    while(i>=0 && A[i]>key)
    {
      A[i+1] = A[i];
      i = i-1;
    }
    A[i+1] = key;
  }

  //display the sorted array
  for(x=0; x<5; x++)
  {
    printf("A[%d] element =%d \n",x,A[x]);
  }

  return 0;
}