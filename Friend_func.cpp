// #include<bits/stdc++.h>
// using namespace std;
// class Y;
// class X{
//     int data;
//     public:
//     void setValue(int value){
//         data=value;
//     }
//     friend void add(X,Y);
// };
// class Y{
//     int num;
//     public:
//     void setValue(int value){
//         num=value;
//     }
//     friend void add(X,Y);
// };

// void add(X o1,Y o2){
//     cout<<"Summing data of X and Y objects give me "<<o1.data+o2.num;
// }
// int main(){

//     X a;
//     Y b;

//     a.setValue(2);
//     b.setValue(5);
//     add(a,b);
    
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
class c2;
class c1{
    int val;
     public:
     void indata(int a){
        val=a;
     }

     void display(void){
        cout<<val<<endl;
     }
     friend void exchange(c1 &,c2 &);
};
class c2{
    int val2;
     friend void exchange(c1 &,c2 &);
     public:
     void indata(int a){
        val2=a;
     }

     void display(void){
        cout<<val2<<endl;
     }
};

void exchange(c1 &x, c2 &y){
    int tmp=x.val;
    x.val=y.val2;
    y.val2=tmp;
    
}
int main(){

    c1 o1;
    c2 o2;

    o1.indata(4);
    o2.indata(7);
    exchange(o1,o2);

    cout<<"The value after exchanging becomes: ";
    o1.display();
    cout<<"The value after exchanging becomes: ";
    o2.display();

    return 0;
}