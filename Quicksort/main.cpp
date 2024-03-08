#include <iostream>

using namespace std;


int partitionArray(int arr[], int s, int e){

    int pivot = arr[s];
    int cnt = 0;

    for(int i=s+1; i<=e; i++){
        if(arr[i]<pivot){
            cnt++;
        }
    }

    //Place the pivot
    int pivotIndex = s + cnt;

    swap(arr[pivotIndex],arr[s]);

    //left and right part check
    int i = s, j = e;

    while(i<pivotIndex && j>pivotIndex){

        while(arr[i] < pivot){
            i++;
        }
        while(arr[j] > pivot){
            j--;
        }

        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i++],arr[j--]);
        }
    }

}

 void quickSort(int arr[], int s, int e)
{
    //base case
    if(s>=e){
        return;
    }
    //Partition the Array
    int p = partitionArray(arr, s, e);

    //left partition
    quickSort(arr, s, p-1);

    //right partion
    quickSort(arr, p+1, e);
}

int main()
{
  int arr[5] = {3,1,4,5,2};
  //int arr[5] = {9,1,3,7,2};
  int n = 5;

  quickSort(arr, 0, n-1);

  cout<<"After using Quick Sort : ";
  for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;

  return 0;
}
