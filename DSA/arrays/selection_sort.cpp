//used when array size is small

#include<bits/stdc++.h>
using namespace std;
void selectionSort(vector<int>&arr,int n){
    
    for (int i = 0; i < n-1; i++)
    {
        int minIndex=i;
        for (int j = i+1; j < n; j++)
        {
           if (arr[j]<arr[minIndex])
            minIndex=j;
        }
        swap(arr[minIndex],arr[i]);
        
    }
    
}
int main(){
    vector<int>a={6,3,9,2,1,0};

    selectionSort(a,6);
    for (int i = 0; i < 6; i++)
    {
        cout<<a[i]<<" ";
    }   
    return 0;
}