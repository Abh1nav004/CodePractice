// only works on monotonic functions

// find mid element
// compare elements
// true -> return
// false -> part decide and same process


#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;

    while (start<=end)
    {
       if(arr[mid]==key){
            return mid;
       }
       //go to right wala part
       if(key>arr[mid]){
            start=mid+1;
       }
       else
       {
        end=mid-1;
       }

       mid=(start+end)/2;
       

    }

    
    return -1;
    
}

int main(){
    int even[6]={2,4,6,8,12,18};
    int odd[5]={3,8,11,14,16};

    int n;
    cout<<"Number to search: ";
    cin>>n;

    int index=binarySearch(even,6,n);

    cout<<"Index of "<<n<<" is "<<index;

    return 0;
}