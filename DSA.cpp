#include<bits/stdc++.h>
using namespace std;
void replacePi(string s){
    if(s.size()==0) return;

    if(s[0]=='p' && s[1]=='i'){
        cout<<"3.14";
        s.substr(2);
    }
    else{
        cout<<s.substr(1);
    }
}
int main(){
    string st;
    cin>>st;

    replacePi(st);
    
    return 0;
}