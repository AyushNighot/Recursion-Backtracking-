#include <iostream>
#include <stdio.h>
#include <vector>
#include<bits/stdc++.h>
using namespace std;
void print(int index,int arr[],vector<int>&ds,int n,int sum,int s)
{

    //base case 
    if(index == n)
    {
        if(s == sum)
        {
            for( auto it : ds) cout<< it<< " ";
                cout<<endl;
            
        }
        return;
    }


    ds.push_back(arr[index]);
    s+= arr[index];
    print(index + 1,arr,ds,n,sum,s);

    s-= arr[index];
    ds.pop_back();
    
    print(index + 1,arr,ds,n,sum,s);
    
     
}
int main()
{
    int arr[3] = {3,1,2};
    int size =3;
    int sum = 0;
    int s=0;
    vector<int>ds;
    print(0,arr,ds,size,sum,s);
  
    return 0;
}
