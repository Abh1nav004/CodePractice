// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[3][4];
//     for (int i = 0; i < 4; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             cin>>arr[i][j];
//         }
        
//     }
//     for (int i = 0; i < 4; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             cout<<arr[i][j]<<" ";
//         }

//     cout<<endl;
        
//     }
    
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int row;
//     cin>>row;
//     int colm;
//     cin>>colm;

//     int** arr =new int*[row];
//     for (int i = 0; i < row; i++)
//     {
//         arr[i] = new int[colm];

//     }

//     for (int i = 0; i < colm ; i++)
//     {
//         arr[i] = new int[row];
//     }
    
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < colm; j++)
//         {
//             cin>>arr[i][j];
//         }
//     }
    
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < colm; j++)
//         {
//             cout<<arr[i][j]<<" ";
//         }

//     cout<<endl;
        
//     }

//     for (int i = 0; i < row; i++)
//     {
//         delete[] arr[i];
//     }
    
//     delete[] arr;
    
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
bool isPresent(int arr[][4],int target, int row,int col){
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            if(arr[row][col]==target){
                return true;
            }
        }
        return false;
    }
    
}
void printSum(int arr[][4],int row,int col){
    int sum=0;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
           sum=sum+arr[row][col];
        }
        
    }

    cout<<"Sum is "<<sum;
    
}
int main(){
    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<arr[i][j]<<" ";
        } cout<<endl;
        
    }

    cout<<"Element to search: ";
    int target;
    cin>>target;

    isPresent(arr,target,3,4);
    printSum(arr,3,4);

    
    return 0;
}