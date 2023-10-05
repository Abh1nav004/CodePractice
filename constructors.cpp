// #include<bits/stdc++.h>
// using namespace std;
// class Complex{
//     int a,b;
//     public:
//     //Constructor is a special member function with same name as of class. It is automatically invoked whenever an object is created.
//     // It is used to initialize the objects of its class
//     Complex(void);
//     void printNumber(){
//         cout<<"Your complex number is: "<<a<<" + "<<b<<"i"<<endl;
//     }

// };

// Complex :: Complex(void){
//     a=0;
//     b=9;
// }
// int main(){
//     Complex c;
//     c.printNumber();

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class Complex
// {
//     int a, b;

// public:
//     Complex(int,int);
//     void printNumber()
//     {
//         cout << "Your complex number is: " << a << " + " << b << "i" << endl;
//     }
// };

// Complex :: Complex(int x,int y){
//     a=x;
//     b=y;
// }

// int main(){
//     Complex a(4,6);
//     a.printNumber();
//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;

// class Point{
//     int x,y;
//     public:
//     Point(int a,int b){
//         x=a;
//         y=b;
//     }

    // void displayPoint(){
    //     cout<<"the point is ("<<x<<" , "<<y<<")"<<endl;
    // }

// };
// int main(){

//     Point p(1,1);
//     p.displayPoint();
//     Point q(4,6);
//     q.displayPoint();
    
//     return 0;
// }




// CONSTRUCTOR OVERLOADING

// #include<bits/stdc++.h>
// using namespace std;
// class Complex{
//     int a,b;
//     public:
//     Complex(int x,int y){
//         a=x;
//         b=y;
//     }
//     Complex(int x){
//         a=x;
//         b=0;
//     }
//     Complex(int y){
//         a=0;
//         b=y;
//     }
//     Complex(){
//         a=0;
//         b=0;
//     }
//         void displayPoint(){
//         cout<<"the point is ("<<a<<" , "<<b<<")"<<endl;
//     }
    
// };
// int main(){
//     Complex c1(4,6);
//     c1.displayPoint();
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
class Simple{
    int data1;
    int data2;
    public:
    Simple(int a, int b){
        data1 = a;
        data2 = b;
    }
    void printData();


};
void Simple :: printData(){
    cout<<"The value of data is "<<data1<<" and "<<data2<<endl;
}
int main(){
    Simple s(1,4);
    s.printData();
    
    return 0;
}