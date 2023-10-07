#include<bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n, char src, char aux , char dest){
    if(n==1){
        cout<<"Moved disc - "<<n<<" from "<< src <<" to "<<dest<<endl;
        return;
    }
    towerOfHanoi(n-1,src,dest,aux);
    cout<<"Moved disc - "<<n<<" from "<< src <<" to "<<dest<<endl;
    towerOfHanoi(n-1,aux,src,dest);
}
int main(){
    int n;
    cout<<"Enter the number of discs: ";
    cin>>n;

    towerOfHanoi(n,'A','B','C');
    return 0;
}