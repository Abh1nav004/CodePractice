#include <bits/stdc++.h>
using namespace std;

// Pure virtual function - A function for which we do not have an implementation.We do not write any functionality in it, we only declare this function

// Any class containing one or more pure virtual functions can not be used to define any object.

// These classes are also known as abstract classes.

// Classes derived from abstract classes nedd ti implement the pure virtual function.

// syntax = virtual <function_type> <function_name>() = 0;

class Shape
{
    public:
    virtual float calculate_area() = 0;
};
class Square : public Shape{
    float a=0;
    public:
    Square(float l){
        a=1;
    }
    float calculate_area(){
        return a*a;

    }
};
int main()
{
    Square s1(4);

    return 0;
}