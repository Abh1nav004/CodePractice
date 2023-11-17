#include<bits/stdc++.h>
#include<fstream>

//The useful classes for working with files in cpp are:
// fstreambase
// ifstream
// ofstream

using namespace std;
int main(){
//     // string st="Abhinav bhai ke aage koi bol sakta hai kyaaaaaaa Aeyyyyyyy abhinav bhaiiiiiiiiiiii";
    string st2;
//     // //Opening files using constructor and writing it
//     // ofstream out("sample.txt"); //write operation
//     // out<<st;


    //Opening files using constructor and reading it
    ifstream in("sample1.txt"); //Read operation
    // in>>st2;
    getline(in,st2);
    getline(in,st2);
    cout<<st2;
    return 0;
}


