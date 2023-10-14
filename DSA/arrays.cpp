// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,p,num;
//     cout<<"Enter array size: ";
//     cin>>n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//        cout<<arr[i]<<" ";
//     } 
//     cout<<"Enter position you want to change with number: \n";
//     cin>>p>>num;
//     arr[p+1]=num;
//     for (int i = 0; i < n; i++)
//     {
//        cout<<arr[i]<<" ";
//     }   
//     return 0;
// }


// Insertion Array
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,p,num;
//     cout<<"Enter array size: ";
//     cin>>n;
//     int arr[n+1];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//        cout<<arr[i]<<" ";
//     } 
//     cout<<endl;
//     cout<<"Enter position: \n";
//     cin>>p;
//     cout<<"Enter number: \n";
//     cin>>num;

//     for (int i = n-1; i >=p-1; i--)
//     {
//         arr[i+1]=arr[i];
//     }
//     arr[p-1]=num;
//     for (int i = 0; i < n+1; i++)
//     {
//        cout<<arr[i]<<" ";
//     } 
//     return 0;
// }

//Deletion Array
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,p,num;
//     cout<<"Enter array size: ";
//     cin>>n;
//     int arr[n+1];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//        cout<<arr[i]<<" ";
//     } 
//     cout<<endl;
//     cout<<"Enter position: \n";
//     cin>>p;
//     for (int i = p-1; i < n-1; i++)
//     {
//         arr[i]=arr[i+1];
//     }
//     n--;
//     for (int i = 0; i < n; i++)
//     {
//        cout<<arr[i]<<" ";
//     } 
    

// return 0;
// }


