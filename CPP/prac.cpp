// #include<bits/stdc++.h>
// using namespace std;
// class Shop{
//     int itemId[100];
//     int itemPrice[100];
//     int counter;
//     public:
//     void initCounter(void){counter=0;}
//     void setPrice(void);
//     void displayPrice(void);
// };

// void Shop :: setPrice(void){
//     cout<<"Enter Id of your item"<<endl;
//     cin>>itemId[counter];
//     cout<<"Enter Price of your item"<<endl;
//     cin>>itemPrice[counter];
//     counter++;
// }
// void Shop :: displayPrice(void){
//     for(int i=0;i<counter;i++){
//         cout<<"The Price of item with Id "<<itemId[i]<<" is "<<itemPrice[i];
//     }
// }
// int main(){

//     Shop dukaan;
//     dukaan.initCounter();
//     dukaan.setPrice();
//     dukaan.setPrice();
//     dukaan.setPrice();
//     dukaan.displayPrice();

        
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// class Employee{
//     int id;
//     static int count;

//     public:
//     void setData(void){
//         cout<<"Enter the id: "<<endl;
//         cin>>id;
//         count++;
//     }
//     void getData(void){
//         cout<<"The id of Employee is: "<<id<<"and this is employee no. "<<count<<endl;
//     }

// };

// int Employee :: count;
// int main(){

//     Employee Abhinav,Rohan,Lovish;
//     Abhinav.setData();
//     Abhinav.getData();

//     Rohan.setData();
//     Rohan.getData();

//     Lovish.setData();
//     Lovish.getData();
   
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// class Employee{
//     int id;
//     int salary;
//     public:
//     void setId(void){
//         salary=122;
//         cout<<"Enter the id of employee: ";
//         cin>>id;
//     }
//     void getId(void){
//         cout<<"The id of this employee is: "<<id<<endl;
//     }
// };
// int main(){
//     // Employee abhinav,rohan,fing;
//     // abhinav.setId();
//     // abhinav.getId();
    
//     // rohan.setId();
//     // rohan.getId();
    
//     // fing.setId();
//     // fing.getId();
    
//     Employee fb[5];
//     for (int i = 0; i < 5; i++)
//     {
//         fb[i].setId();
//         fb[i].getId();
//     }
    
//     return 0;
// }




// #include<bits/stdc++.h>
// using namespace std;
// class complexi{
//     int a;
//     int b;
//     public:
//     void setData(int v1,int v2){
//         a=v1;
//         b=v2;
//     }
//     void setDatabySum(complexi o1,complexi o2){
//         a = o1.a+o2.a;
//         b = o1.b+o2.b;
//     }
//     void printNumber(){
//         cout<<"Your complex number is "<<a<<"+"<<b<<"i"<<endl;
//     }
// };
// int main(){
//     complexi c1,c2,c3;
//     c1.setData(1,2);
//     c2.setData(3,4);

//     c3.setDatabySum(c1,c2);
//     c3.printNumber();
    
//     return 0;
// }


// #include <iostream>
// #include <fstream>
// #include <string>
// #include <algorithm>

// using namespace std;

// int main() {
//     string inputText;
//     cout << "Enter the input text: ";
//     getline(cin, inputText);

//     ofstream file1("sample1.txt");
//     if (!file1) {
//         cerr << "Error: Unable to create or open sample1.txt" << endl;
//         return 1;
//     }

//     file1 << inputText;
//     file1.close();

//     string reversedText = inputText;
//     reverse(reversedText.begin(), reversedText.end());

//     ofstream file2("sample2.txt");
//     if (!file2) {
//         cerr << "Error: Unable to create or open sample2.txt" << endl;
//         return 1;
//     }

//     file2 << reversedText;
//     file2.close();

//     ifstream file1Reader("sample1.txt", ios::binary);
//     ifstream file2Reader("sample2.txt", ios::binary);

//     if (!file1Reader || !file2Reader) {
//         cerr << "Error: Unable to open sample1.txt or sample2.txt for comparison." << endl;
//         return 1;
//     }

//     char buffer1[1024];
//     char buffer2[1024];

//     while (true) {
//         file1Reader.read(buffer1, sizeof(buffer1));
//         file2Reader.read(buffer2, sizeof(buffer2));

//         if (file1Reader.gcount() != file2Reader.gcount() ||
//             memcmp(buffer1, buffer2, file1Reader.gcount()) != 0) {
//             cout << "Comparing files..." << endl;
//             cout << "Files differ." << endl;
//             break;
//         }

//         if (file1Reader.eof() && file2Reader.eof()) {
//             cout << "Comparing files..." << endl;
//             cout << "Files are the same." << endl;
//             break;
//         }
//     }

//     file1Reader.close();
//     file2Reader.close();

//     return 0;
// }


// #include <iostream>
// #include <cstring>
// class CustomString {private:    char str[101];public:    CustomString(const char* s) {        std::strncpy(str, s, sizeof(str) - 1);        str[sizeof(str) - 1] = '\0';    }    void invertCase() {        for (int i = 0; str[i]; i++) {            if (std::islower(str[i])) {                str[i] = std::toupper(str[i]);            } else if (std::isupper(str[i])) {                str[i] = std::tolower(str[i]);            }        }    }    friend std::ostream& operator<<(std::ostream& os, const CustomString& cs) {        return os << cs.str;    }};int main() {    char input[101];    std::cin.getline(input, sizeof(input));    CustomString customStr(input);    std::cout << "Original String: " << customStr << std::endl;        !customStr; // Invert the case using the ! operator 
//        std::cout << "Inverted String: " << customStr << std::endl;    return 0;}


#include <iostream>
#include <vector>
// #include <cctype>

// using namespace std;

// bool isVowel(char ch) {
//     ch = tolower(ch);
//     return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
// }

// vector<char> merge(const vector<char>& left, const vector<char>& right) {
//     vector<char> merged;
//     int i = 0, j = 0;
//     while (i < left.size() && j < right.size()) {
//         if (isVowel(left[i]) && !isVowel(right[j])) {
//             merged.push_back(left[i]);
//             i++;
//         } else if (!isVowel(left[i]) && isVowel(right[j])) {
//             merged.push_back(right[j]);
//             j++;
//         } else {
//             merged.push_back(left[i]);
//             i++;
//         }
//     }
//     while (i < left.size()) {
//         merged.push_back(left[i]);
//         i++;
//     }
//     while (j < right.size()) {
//         merged.push_back(right[j]);
//         j++;
//     }
//     return merged;
// }

// vector<char> mergeSort(const vector<char>& arr) {
//     int n = arr.size();
//     if (n <= 1) {
//         return arr;
//     }

//     int mid = n / 2;
//     vector<char> left(arr.begin(), arr.begin() + mid);
//     vector<char> right(arr.begin() + mid, arr.end());

//     left = mergeSort(left);
//     right = mergeSort(right);

//     return merge(left, right);
// }

// int main() {
//     int n;
//     cin >> n;
//     vector<char> characters(n);

//     for (int i = 0; i < n; i++) {
//         cin >> characters[i];
//     }

//     vector<char> sortedCharacters = mergeSort(characters);

//     for (char ch : sortedCharacters) {
//         cout << ch << " ";
//     }
//     cout << endl;

//     return 0;
// }


// #include <iostream>#include <vector>using namespace std;vector<char> merge(const vector<char>& left, const vector<char>& right) {    vector<char> merged;    int i = 0, j = 0;    while (i < left.size() && j < right.size()) {        if (left[i] >= right[j]) {            merged.push_back(left[i]);            i++;        } else {            merged.push_back(right[j]);            j++;        }    }    while (i < left.size()) {        merged.push_back(left[i]);        i++;    }    while (j < right.size()) {        merged.push_back(right[j]);        j++;    }    return merged;}vector<char> mergeSort(const vector<char>& arr) {    int n = arr.size();    if (n <= 1) {        return arr;    }    int mid = n / 2;    vector<char> left(arr.begin(), arr.begin() + mid);    vector<char> right(arr.begin() + mid, arr.end());    left = mergeSort(left);    right = mergeSort(right);    return merge(left, right);}int main() {    int n;    cin >> n;    vector<char> runes(n);    for (int i = 0; i < n; i++) {        cin >> runes[i];    }    vector<char> sortedRunes = mergeSort(runes);    for (char rune : sortedRunes) {        cout << rune << " ";    }    cout << endl;    return 0;}


// #include <iostream>

// struct Node {
//     int value;
//     Node* left;
//     Node* right;

//     Node(int val) : value(val), left(nullptr), right(nullptr) {}
// };

// int calculatePortfolioValue(Node* root) {
//     if (root == nullptr) {
//         return 0;
//     }

//     int leftSum = calculatePortfolioValue(root->left);
//     int rightSum = calculatePortfolioValue(root->right);

//     return root->value + leftSum + rightSum;
// }

// int main() {
//     int N;
//     std::cin >> N;

//     Node* root = nullptr;

//     for (int i = 0; i < N; i++) {
//         int value;
//         std::cin >> value;
//         root = insert(root, value);
//     }

//     int totalValue = calculatePortfolioValue(root);
//     std::cout << totalValue << std::endl;

//     return 0;
// }


// #include <iostream>
// #include <vector>

// struct TreeNode {
//     int val;
//     TreeNode* left;
//     TreeNode* right;
//     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
// };

// void postorderTraversal(TreeNode* root, std::vector<int>& result) {
//     if (root) {
//         postorderTraversal(root->left, result);
//         postorderTraversal(root->right, result);
//         result.push_back(root->val);
//     }
// }

// int main() {
//     int n;
//     std::cin >> n;
//     std::vector<int> arr(n);
//     for (int i = 0; i < n; ++i) {
//         std::cin >> arr[i];
//     }

//     TreeNode* root = NULL;
//     std::vector<TreeNode*> nodes(n);

//     // Construct the binary tree
//     for (int i = 0; i < n; ++i) {
//         if (arr[i] != -1) {
//             nodes[i] = new TreeNode(arr[i]);
//             if (i > 0) {
//                 int parent = (i - 1) / 2;
//                 if (i % 2 == 1) {
//                     nodes[parent]->left = nodes[i];
//                 } else {
//                     nodes[parent]->right = nodes[i];
//                 }
//             } else {
//                 root = nodes[i];
//             }
//         }
//     }

//     std::vector<int> postorder;
//     postorderTraversal(root, postorder);

//     for (int i = 0; i < n; ++i) {
//         std::cout << postorder[i];
//         if (i < n - 1) {
//             std::cout << " ";
//         }
//     }
//     std::cout << std::endl;

//     return 0;
// }


// #include <iostream>
// using namespace std;
// class Matrix { public:
// int value;
// Matrix(int val): value(val) {}
// Matrix operator+(Matrix& other) {
// return Matrix(value + other.value);
// }
// };
// int main() {
// Matrix m1(5);
// Matrix m2(10);
// Matrix result = m1 + m2;
// cout << result.value;
// return 0; }


// #include <iostream>

// class Box {
// public:
//     int length, width, height;
//     Box(int l, int w, int h) : length(l), width(w), height(h) {}
//     // Binary operator overloading goes here
// };

// int main() {
//     Box box1(1, 2, 3);
//     Box box2(4, 5, 6);
//     Box result = box1 _______ box2;
//     std::cout << result.length << ", " << result.width << ", " << result.height;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Distance {
// public:
//     int meters;
//     Distance(int m) : meters(m) {}
//     operator double() {
//         return meters / 1000.0;
//     }
// };

// int main() {
//     Distance d(5000);
//     double result = d;
//     cout << result;
//     return 0;
// }



// #include <iostream>
// using namespace std;

// class Product {
// public:
//     int price;
//     Product(int p) : price(p) {}
//     operator bool() {
//         return price > 0;
//     }
// };

// int main() {
//     Product prod(150);
//     bool result = prod;
//     cout << result;
//     return 0;
// }



// #include <iostream>
// using namespace std;

// class Time {
// public:
//     int minutes;
//     Time(int m) : minutes(m) {}
//     operator string() {
//         return to_string(minutes+78) + " mins";
//     }
// };

// int main() {
//     Time t(120);
//     string result = t;
//     cout << result;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Distance {
// public:
//     int meters;
//     Distance(int m) : meters(m) {}
//     operator int() {
//         return meters + 78;
//     }
// };

// int main() {
//     Distance d(500);
//     int result = d;
//     cout << result;
//     return 0;
// }


// #include <iostream>
// using namespace std;

// class Angle {
// public:
//     float degrees;
//     Angle(float d) : degrees(d) {}
//     operator float() {
//         return degrees-8.9;
//     }
// };

// int main() {
//     Angle a(45.5);
//     int result = a;
//     cout << result;
//     return 0;
// }


// #include <iostream>
// using namespace std;
// class Base
// {
// public:
//     Base() {}
//     ~Base() {}

// protected:
// private:
// };

// class Derived : public Base
// {
// public:
//     Derived() {}
//     ~Derived() {}

// private:
// protected:
// };

// int main()
// {
//     cout << "The program executed" << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class BaseP {
// protected:
//     int x;
// public:
//     BaseP() : x(7) {}
// };

// class DerivedQ : private BaseP {
// public:
//     int y;
//     DerivedQ() : y(20) {}
// };

// int main() {
//     BaseP* ptr = new DerivedQ();
//     cout << ptr->x << ", " << ptr->y;
//     return 0;
// }


// #include <iostream>
// using namespace std;
// class Animal {
// protected:
//     int legs;
// public:
//     Animal() : legs(4) {}
//     int getLegs() { return legs; }
// };

// class Bird {
// protected:
//     int wings;
// public:
//     Bird() : wings(2) {}
//     int getWings() { return wings; }
// };

// class Bat : public Animal, public Bird {
// public:
//     int totalLimbs() { return getLegs() + getWings(); }
// };

// int main() {
//     Bat obj;
//     cout << obj.totalLimbs();
//     return 0;
// }


// #include <iostream>
// using namespace std;
// class BaseClass{
//     int x;
//     public:
//     void setx(int n){
//     x = n;
//     }
//     void showx(){
//         cout << x ;
//     }
// };

// class DerivedClass : private BaseClass{
//     int y;
//     public:
//     void setxy(int n, int m){
//         setx(n);
//         y = m;
//     }

//     void showxy(){
//         showx();
//         cout << y << '\n';
//     }
// };

// int main(){
//     DerivedClass ob;
//     ob.setxy(10, 20);
//     ob.showxy( );
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class Fruit {
// protected:
//     int quantity;
// public:
//     Fruit() : quantity(5) {}
//     int getQuantity() { return quantity; }
// };

// class Apple : public Fruit {
// public:
//     int getQuantity() { return quantity + 10; }
// };

// class Orange : public Fruit {
// public:
//     int getQuantity() { return quantity * 2; }
// };

// int main() {
//     Apple apple;
//     Orange orange;
//     cout << apple.getQuantity() << orange.getQuantity();
//     return 0;
// }


// #include <iostream>
// using namespace std;

// class A {
// public:
//     A(int n) {
//         cout << n;
//     }
// };

// class B : public A {
// public:
//     B(int n, double d) : A(n) {
//         cout << d;
//     }
// };

// class C : public B {
// public:
//     C(int n, double d, char ch) : B(n, d) {
//         cout << ch;
//     }
// };

// int main() {
//     C c(5, 4.3, 'R');
//     return 0;
// }


// #include <iostream>
// using namespace std;
// class Parent {
// protected:
//     int x;
// public:
//     Parent() : x(26) {}
//     int getValue() { return x; }
// };

// class Child1 : public Parent {
// public:
//     int getValue() { return x + 13; }
// };

// class Child2 : public Parent {
// public:
//     int getValue() { return x * 7; }
// };

// int main() {
//     Child1 obj1;
//     Child2 obj2;
//     cout << obj1.getValue() << obj2.getValue();
//     return 0;
// }


// #include <iostream>

// class Base {
// public:
//     virtual void display() {
//         std::cout << "Jawaharlal Nehru" << std::endl;
//     }
// };

// class Derived : public Base {
// public:
//     void display() {
//         std::cout << "Mahatma Gandhi" << std::endl;
//     }
// };

// int main() {
//     Derived obj;
//     Base& ref = obj;
//     ref.display();
//     return 0;
// }

// #include <iostream>

// class Base {
// public:
//     void display() {
//         std::cout << "Base Display" << std::endl;
//     }
// };

// class Derived : public Base {
// public:
//     void display() {
//         std::cout << "Derived Display" << std::endl;
//     }
// };
// int main() {
//     Derived obj;
//     obj.display();
//     return 0;
// }



// #include <iostream>
// using namespace std;

// class Animal {
// public:
//     int weight;
//     Animal() { weight = 100; }
//     virtual int calculateFoodRequired() { return weight / 2; }
// };

// class Herbivore : virtual public Animal {
// public:
//     int dailyIntake;
//     Herbivore() { dailyIntake = 5; }
//     int calculateFoodRequired() override { return Animal::calculateFoodRequired() * dailyIntake; }
// };

// int main() {
//     Herbivore obj; 
//     cout << obj.calculateFoodRequired();
//     return 0;
// }


// #include <iostream>
// using namespace std;

// class Base {
// public:
//     string name;
//     Base() { name = "Spring"; }
//     virtual string operation() { return name + " Day!"; }
// };

// class Derived : virtual public Base {
// public:
//     string suffix;
//     Derived() { suffix = ", September"; }
//     string operation() override { return Base::operation() + suffix; }
// };

// int main() {
//     Base* obj = new Derived();
//     cout << obj->operation();
//     return 0;
// }


// #include <iostream>
// using namespace std;

// class A {
// public:
//     float x;
//     A() { x = 2.5; cout << x << " "; }
//     ~A() { x += 1.5; cout << x << " "; }
// };

// class B : public A {
// public:
//     float y;
//     B() { y = 3.2; cout << y << " "; }
//     ~B() { y += 2.3; cout << y << " "; }
// };

// int main() {
//     B obj;
//     cout << obj.x + obj.y << endl;
//     return 0;
// }


// #include <iostream>

// class Base {
// public:
//     Base() {
//         std::cout << "Base constructor called." << std::endl;
//     }

//     ~Base() {
//         std::cout << "Base destructor called." << std::endl;
//     }
// };

// class Derived : public Base {
// public:
//     Derived() {
//         std::cout << "Derived constructor called." << std::endl;
//     }

//     ~Derived() {
//         std::cout << "Derived destructor called." << std::endl;
//     }
// };

// int main() {
//     Base* b = new Derived();
//     delete b;
//     return 0;
// }



// #include <iostream>
// using namespace std;

// class Base {
// public:
//     char c;
//     Base() { c = 'A'; }
//     virtual char operation() { return c + 3; }
// };

// class Derived : virtual public Base {
// public:
//     char suffix;
//     Derived() { suffix = 'Z'; }
//     char operation() override {
//         char result = Base::operation() - suffix;
//         return (result >= 'A' && result <= 'Z') ? result : 'A'; 
//     }
// };

// int main() {
//     Base* obj = new Derived();
//     cout << obj->operation();
//     return 0;
// }


// #include <iostream>
// #include <string>

// class partA {
// public:
//     partA(const std::string& name, const std::string& pan) : name(name), pan(pan) {
//         std::cout << "Creating partA" << std::endl;
//     }

//     ~partA() {
//         std::cout << "Deleting partA" << std::endl;
//     }

//     const std::string& getName() const {
//         return name;
//     }

//     const std::string& getPan() const {
//         return pan;
//     }

// private:
//     std::string name;
//     std::string pan;
// };

// class partB : public partA {
// public:
//     partB(const std::string& name, const std::string& pan, double grossSalary, double otherIncome)
//         : partA(name, pan), grossSalary(grossSalary), otherIncome(otherIncome) {
//         std::cout << "Creating partB" << std::endl;
//     }

//     ~partB() {
//         std::cout << "Deleting partB" << std::endl;
//     }

//     double calculateTaxableIncome() const {
//         return grossSalary + otherIncome;
//     }

//     double getGrossSalary() const {
//         return grossSalary;
//     }

//     double getOtherIncome() const {
//         return otherIncome;
//     }

// private:
//     double grossSalary;
//     double otherIncome;
// };

// class partC : public partA {
// public:
//     partC(const std::string& name, const std::string& pan, double deductions)
//         : partA(name, pan), deductions(deductions) {
//         std::cout << "Creating partC" << std::endl;
//     }

//     ~partC() {
//         std::cout << "Deleting partC" << std::endl;
//     }

//     double getDeductions() const {
//         return deductions;
//     }

// private:
//     double deductions;
// };

// class taxComp : public partB, public partC {
// public:
//     taxComp(const std::string& name, const std::string& pan, double grossSalary, double otherIncome, double deductions)
//         : partB(name, pan, grossSalary, otherIncome), partC(name, pan, deductions) {
//         std::cout << "Creating taxComp" << std::endl;
//     }

//     ~taxComp() {
//         std::cout << "Deleting taxComp" << std::endl;
//     }

//     double calculateTaxPayable() const {
//         double taxableIncome = partB::calculateTaxableIncome();
//         double tax = 0.3 * taxableIncome - partC::getDeductions();
//         return (tax > 0) ? tax : 0;
//     }
// };

// int main() {
//     std::string name, pan;
//     double grossSalary, otherIncome, deductions;

//     std::cin >> name;
//     std::cin >> pan;
//     std::cin >> grossSalary;
//     std::cin >> otherIncome;
//     std::cin >> deductions;

//     taxComp taxForm(name, pan, grossSalary, otherIncome, deductions);

//     std::cout << "Account Holder Name: " << taxForm.getName() << std::endl;
//     std::cout << "PAN: " << taxForm.getPan() << std::endl;
//     std::cout << "Gross Salary: " << taxForm.getGrossSalary() << std::endl;
//     std::cout << "Income from Other Sources: " << taxForm.getOtherIncome() << std::endl;
//     std::cout << "Deductions: " << taxForm.getDeductions() << std::endl;

//     double taxableIncome = taxForm.calculateTaxableIncome();
//     double taxPayable = taxForm.calculateTaxPayable();
//     std::cout << "Taxable Income (computed): " << taxableIncome



// #include <iostream>

// int main() {
//     int* ptr = new int[5];
//     for (int i = 0; i < 5; i++) {
//         ptr[i] = i + 1;
//     }
//     int sum = 0;
//     for (int i = 0; i < 6; i++) {
//         sum += ptr[i];
//     }
//     std::cout << sum;
//     delete[] ptr;
//     return 0;
// }


// #include <iostream>

// int main() {
//     int* ptr = new int(5);
//     std::cout << *ptr << std::endl;
//     delete ptr;
//     std::cout << *ptr << std::endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class Vector3D {
// public:
//     Vector3D(int x, int y, int z) : xCoord(x), yCoord(y), zCoord(z) {}
//     int dotProduct(Vector3D& other) { return xCoord * other.xCoord + yCoord * other.yCoord + zCoord * other.zCoord; }
// private:
//     int xCoord, yCoord, zCoord;
// };

// int main() {
//     Vector3D* v1 = new Vector3D(1, 2, 3);
//     Vector3D* v2 = new Vector3D(4, 5, 6);
//     int result = v1->dotProduct(*v2);
//     delete v1;
//     delete v2;
//     std::cout << result;
//     return 0;
// }


// #include <iostream>
// #include <iomanip>
// using namespace std;
// class Triangle {
// public:
//     Triangle(double b, double h) : base(b), height(h) {}
//     double getArea() { return 0.5 * base * height; }
// private:
//     double base, height;
// };

// int main() {
//     Triangle* t = new Triangle(4.0, 6.0);
//     double result = t->getArea();
//     delete t;
//     std::cout << fixed << setprecision(1) << result;
//     return 0;
// }


// #include <iostream>

// int main() {
//     int* ptr = new int[5]();
//     std::cout << ptr[3];
//     delete[] ptr;
//     return 0;
// }


// #include <iostream>
// #include <cstring>

// class School {
// public:
//     School() { name = new char[15]; }
//     virtual ~School() { delete[] name; }

//     void SetName(const char* newName) {
//         name = new char[strlen(newName) + 1];
//         strcpy(name, newName);
//     }

//     void DisplayName() {
//         std::cout << "School Name: " << name << std::endl;
//     }

// private:
//     char* name;
// };

// int main() {
//     School* school = new School();
//     school->SetName("ABC School");
//     school->DisplayName();
//     return 0;
// }


// #include <iostream>
// #include <cstring>

// class Music {
// public:
//     Music() : title(new char[20]) {}
//     virtual ~Music() { delete[] title; }

//     void SetTitle(const char* newTitle) {
//         title = new char[strlen(newTitle) + 1];
//         strcpy(title, newTitle);
//     }

//     void DisplayTitle() {
//         std::cout << "Title: " << title;
//     }

// private:
//     char* title;
// };

// int main() {
//     Music music;
//     music.SetTitle("Symphony No. 9");
//     music.DisplayTitle();
//     return 0;
// }


// #include <iostream>
// #include <cstring>

// class Animal {
// public:
//     Animal() { name = new char[20]; }
//     virtual ~Animal() { delete[] name; }

//     void SetName(const char* newName) {
//         delete[] name;
//         name = new char[strlen(newName) + 1];
//         strcpy(name, newName);
//     }

//     void DisplayName() const {
//         std::cout << "Animal: " << name << std::endl;
//     }

// private:
//     char* name;
// };

// int main() {
//     Animal* animal = new Animal();
//     animal->SetName("Tiger");
//     animal->DisplayName();
//     delete animal;
//     return 0;
// }



// #include <iostream>
// #include <bits/stdc++.h>

// class City {
// public:
//     City() { name = new char[20]; }
//     ~City() { delete[] name; }

//     void SetName(const char* newName) {
//         name = new char[strlen(newName) + 1];
//         strcpy(name, newName);
//     }

//     void DisplayName() {
//         std::cout << "City: " << name << std::endl;
//     }

// private:
//     char* name;
// };

// int main() {
//     City city;
//     city.SetName("Metropolis");
//     city.DisplayName();
//     return 0;
// }


// #include <iostream>
// #include <cstring>

// class House {
// public:
//     House() : address(new char[30]) {}
//     virtual ~House() { delete[] address; }

//     void SetAddress(const char* newAddress) {
//         strcpy(address, newAddress);
//     }

//     void DisplayAddress() {
//         std::cout << "Address: " << address;
//     }

// private:
//     char* address;
// };

// int main() {
//     House house;
//     house.SetAddress("123 Main Street");
//     house.DisplayAddress();
//     return 0;
// }


// #include <iostream>

// class Shape {
// public:
//     virtual ~Shape() { std::cout << "Shape destructor\n"; }
// };

// class Circle : public Shape {
// public:
//     ~Circle() { std::cout << "Circle destructor\n"; }
// };

// int main() {
//     Shape* shape = new Circle();
//     delete shape;
//     return 0;
// }


// #include <iostream>
// using namespace std;

// class Animal {
// public:
//     virtual void makeSound() const = 0;
// };

// class Dog : public Animal {
// public:
//     void makeSound() const override {
//         cout << "Woof Woof!" << endl;
//     }
// };

// class Cat : public Animal {
// public:
//     void makeSound() const override {
//         cout << "Meow!" << endl;
//     }
// };


// int main() {
//     Animal* animal1 = new Dog();
//     Animal* animal2 = new Cat();

//     animal1->makeSound();
//     animal2->makeSound();

//     return 0;
// }

// #include <iostream>

// class A {
// public:
//     void show(int x) { std::cout << "A: " << x << std::endl; }
// };

// class B : public A {
// };

// int main() {
//     B b;
//     b.show(5);
//     return 0;
// }


// #include <iostream>
// using namespace std;

// class Employee {
// public:
//     virtual void showSalary() const {
//         cout << "Salary: $5000" << endl;
//     }
// };

// class Manager : public Employee {
// public:
//     void showSalary() const override {
//         cout << "Salary: $8000" << endl;
//     }
// };

// int main() {
//     Employee* empPtr1 = new Manager();
//     empPtr1->showSalary();

//     Employee* empPtr2 = new Employee();
//     empPtr2->showSalary();

//     delete empPtr1;
//     delete empPtr2;
//     return 0;
// }


// #include <iostream>

// class Animal {
// public:
//     virtual void makeSound() { std::cout << "Animal makes a sound." << std::endl; }
// };

// class Dog : public Animal {
// public:
//     void makeSound() override { std::cout << "Dog barks." << std::endl; }
// };

// int main() {
//     Animal* animals[2];
//     animals[0] = new Animal;
//     animals[1] = new Dog;
//     for (int i = 0; i < 2; ++i) {
//         animals[i]->makeSound();
//         delete animals[i];
//     }
//     return 0;
// }


#include <iostream>

#include <string>




class Fruit {

public:

virtual std::string getTaste() {

return "Generic fruit taste";

}

};




class Apple : public Fruit {

public:

std::string getTaste() override {

return "Sweet";

}

};




class Banana : public Fruit {

public:

std::string getTaste() override {

return "Creamy";

}

};




class Orange : public Fruit {

public:

std::string getTaste() override {

return "Tangy";

}

};




class Grape : public Fruit {

public:

std::string getTaste() override {

return "Juicy";

}

};




class Pineapple : public Fruit {

public:

std::string getTaste() override {

return "Sweet and Sour";

}

};




int main() {

int choice;

Fruit* fruit;




//std::cout << "Choose a fruit (1 = Apple, 2 = Banana, 3 = Orange, 4 = Grape, 5 = Pineapple): ";

std::cin >> choice;




switch (choice) {

case 1:

fruit = new Apple();

break;

case 2:

fruit = new Banana();

break;

case 3:

fruit = new Orange();

break;

case 4:

fruit = new Grape();

break;

case 5:

fruit = new Pineapple();

break;

default:

std::cout << "Invalid choice, defaulting to generic fruit." << std::endl;

fruit = new Fruit();

break;

}




std::cout << "The taste of the fruit is: " << fruit->getTaste() << std::endl;




delete fruit;




return 0;

} 
