#include <iostream>
#include <stdio.h>
#include <vector>
#include<bits/stdc++.h>
using namespace std;
void print(int index,int arr[],vector<int>&ds,int n)
{

    //base case 
    if(index == n)
    {
        for( auto it : ds)
        {
            cout<< it<< " ";
        }
        if(ds.size() == 0)
        {
            cout<< "{}";
        }
        cout<<endl;
        return;
    }

    ///condition for take or not take
    ds.push_back(arr[index]);
    print(index +1 ,arr,ds,n);

    ds.pop_back();

    //conditon for not taking the sequence
     print(index +1 ,arr,ds,n);
     
}
int main()
{
    int arr[3] = {3,1,2};
    int size =3;
    vector<int>ds;
    print(0,arr,ds,size);
  
    return 0;
}
