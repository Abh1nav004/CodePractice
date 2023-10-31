// take two elements and compare aur rounds ke hisaab se karo
// round no. = no. of large elements sorted or in their place

#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[], int n){
    for (int i = 1; i < n; i++)
    {
       // for round 1 to n-1 

       for (int j = 0; j < n-i; j++)
       {
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
       }
       
    }
    

}
int main(){

    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
       cin>>arr[i];
    }

    bubbleSort(arr,n);

   for (int i = 0; i < n; i++)
    {
       cout<<arr[i]<<" ";
    }

    
    return 0;
}