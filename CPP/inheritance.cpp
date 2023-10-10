// #include<bits/stdc++.h>
// using namespace std;

// //Base class
// class Employee{
//     public:
//     int id;
//     float salary;
//     Employee(int inpId){
//         id=inpId;
//         salary = 34.0;
//     }
//     Employee(){};
// };

// //Derived class
// // syntax- class {{derived-class-name}}: {{visibilty-mode}} {{base-class-name}}{
// // }





// //Default visibility mode is private

// //Private Visibility Mode: Public members of base class becomes Private members of the derived class.

// //Public Visibility Mode: Public members of base class becomes Public members of the derived class

// //Private members of base class are never inherited.



// //Creating a Programmer class derived from Employee Base class.

// class Programmer:public Employee{
//     public:
//      Programmer(int intId){
//         id=intId;
//     }
//     int languageCode=9;
// };
// int main(){

//     Employee abhi(1),rohan(2);
//     cout<<abhi.salary<<endl;
//     cout<<rohan.salary<<endl;

//     Programmer skillF(1);
//     cout<<skillF.languageCode<<endl;
//     cout<<skillF.id;
//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;
// class Base{
//     int data1;// private by default and is not inheritable
//     public:
//     int data2;
//     void setData();
//     int getData1();
//     int getData2();
// };

// void Base :: setData(void){
//     data1=10;
//     data2=20;
// }
// int Base :: getData1(){
//     return data1;
// }
// int Base :: getData2(){
//     return data2;
// }
// class Derived:public Base{ //class is derived publically
//     int data3;
//     public:
//     void process();
//     void display();
// };
// void Derived :: process(){
//     data3=data2*getData1();
// }
// void Derived :: display(){
//     cout<<"Value of data 1 is "<<getData1()<<endl;
//     cout<<"Value of data 2 is "<<data2<<endl;
//     cout<<"Value of data 3 is "<<data3<<endl;
// }
// int main(){
//     Derived der;
//     der.setData();
//     der.process();
//     der.display();
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
class Student{
    protected:
    int roll_number;
    public:
    void set_roll_number(int);
    void get_roll_number(void);
};
void Student::set_roll_number(int r){
    roll_number=r;
}
void Student::get_roll_number(){
    cout<<"The roll number is "<<roll_number<<endl;
}
class Exam : public Student{
    protected:
    float maths;
    float physics;
    public:
    void set_marks(float,float);
    void get_marks(void);
};

void Exam :: set_marks(float a, float b){
    maths = a;
    physics= b;
}
void Exam :: get_marks(){
   cout<<"Marks of Maths are "<<maths<<endl;
   cout<<"Marks of Physics are "<<physics<<endl;
}

class Result : public Exam{
    float percentage;
    public:
    void display(){
        get_roll_number();
        get_marks();
        cout<<"Your percentage is "<<(maths+physics)/2<<"%"<<endl;
    }
};

int main(){
    /*
    Notes:
        1. If we are inheriting B from A and C from B:[ A-->B-->C ]
        2. ABC is called Inheritance Path
        
    */
    Result Abhinav;
    Abhinav.set_roll_number(420);
    Abhinav.set_marks(94.0,90.0);
    Abhinav.display();
    return 0;
}
