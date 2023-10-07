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


