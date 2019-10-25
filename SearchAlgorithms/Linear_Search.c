#include<stdio.h>
int search(int arr[], int n, int key)
{
  int i=0;
  for(i=0;i<n;i++) if(arr[i]==key) return i;
  return -1;
}
  
int main()
{
  int arr[5]={3, 4, 1, 2, 5};
  int key=5;
  int loc=search(arr, 5, key);
  retrurn 0;
}

