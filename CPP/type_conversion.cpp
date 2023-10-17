#include<bits/stdc++.h>
using namespace std;
/* one class type to other class type
When we assign an object of a class onto the object*/
class Rectangle{
    int width;
    int length;
    int area;

    public:
    Rectangle(int w,int l){
        width=w;
        length=l;
        int area=width*length;
    }

    void print(){
        cout<<"Width: "<<width<<"Length: "<<length<<"Area of rectangle: "<<area<<endl;
    }

};
class Triangle{
    int base,height;
    float area;
    public:
    Triangle(int b,int h){
        base=b;
        height=h;
        area=0.5*base*height;
    }

    void print(){
        cout<<"Base: "<<base<<endl<<"Height: "<<height<<endl<<"Area: "<<area<<endl;
    }

    operator Rectangle(){
        Rectangle temp(base,height);
        return temp;
    }
};


int main(){
    Triangle t(10,20);
    Rectangle r=t;
    t.print();
    
    return 0;
}