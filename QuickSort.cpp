#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;
int  partition(int arr[],int start,int end)
{
   int pivot = arr[start];
   int cnt = 0;

   for(int i = start + 1; i <= end ; i++)
   {
            if(arr[i] <= pivot)
            {
                cnt++;
            }
   }

   int pivotIndex = start + cnt;

   swap(arr[pivotIndex],arr[start]);

   int i = start;
   int j = end;

   while ( i < pivotIndex && j > pivotIndex)
   {

        while(arr[i] < pivot)
        {
            i++;

        }
        while(arr[j] > pivot)
        {
            j--;
        }
        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i],arr[j]);
        }
   }
   return pivotIndex;
    
}
void  quicksort(int arr[],int start,int end)
{
    ///base case
    if ( start >= end) return;

    //parttion 
    int p = partition(arr,start,end);

    ///lefts sort

    quicksort(arr,start, p - 1);

    //right part 

    quicksort(arr,p + 1, end);
}
int main()
{
    int arr[6] = {99,30,22,5,21,21};
    int size =6;
    quicksort(arr,0 ,size - 1);
   for (int i = 0 ; i < size ; i++)
   {
    cout<<arr[i] <<endl;
   }
    return 0;
}
