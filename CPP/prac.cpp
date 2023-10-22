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