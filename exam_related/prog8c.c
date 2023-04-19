#include <stdio.h>

int binarySearch(int array[], int x, int low, int high) {
  if (high >= low) {
    int mid = low + (high - low) / 2;
    if (array[mid] == x)
      return mid;
    if (array[mid] > x)
      return binarySearch(array, x, low, mid - 1);
    return binarySearch(array, x, mid + 1, high);
  }
  return -1;
}
void bubbleSort(int arr[],int n)
{
    for(int i=n-1;i>0;i--){
        for(int j=0;j<i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

int main(void) {
  int n;
  printf("Enter the value of n: ");
  scanf("%d",&n);
  int array[n];
  printf("Enter the array elements: ");
  for(int i=0;i<n;i++){
    scanf("%d",&array[i]);
  }
  bubbleSort(array,n);
  printf("Array after sorting: ");
  for(int i=0;i<n;i++){
    printf("%d ",array[i]);
  }
  int x;
  printf("Enter the element to be searched: ");
  scanf("%d",&x);
  int result = binarySearch(array, x, 0, n - 1);
  if (result == -1)
    printf("Not found");
  else
    printf("Element is found at index %d", result);
}
