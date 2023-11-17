#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=4;
    int* ptr=&a;
    cout<<"The value of a is "<<*(ptr)<<endl;

    int *p=new int (40);
    cout<<"The value of address p is "<<*(p)<<endl;
    return 0;
}