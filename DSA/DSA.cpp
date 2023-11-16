// #include<bits/stdc++.h>
// using namespace std;
// void replacePi(string s){
//     if(s.size()==0) return;

//     if(s[0]=='p' && s[1]=='i'){
//         cout<<"3.14";
//         s.substr(2);
//     }
//     else{
//         cout<<s.substr(1);
//     }
// }
// int main(){
//     string st;
//     cin>>st;

//     replacePi(st);
    
//     return 0;
// }


//reversing an array

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     // int arr[6]={1,6,7,8,5,4};
//     // for (int i = 0; i < 3; i++)
//     // {
//     //     swap(arr[i],arr[5-i]);
//     // }

//     // sort(arr,arr+6);

//     // for (int i = 0; i < 6; i++)
//     // {
//     //    cout<<arr[i]<<" ";
//     // }

//     array<int,4>arr={1,3,7,9};
//     vector<int>v;

//     v.push_back(3);

//     cout<<"size->"<<v.capacity()<<endl;
    

//     // cout<<arr.size()<<endl<<arr.front();
    
    
    
//     return 0;
// }



// #include <vector>
// #include <algorithm>
// #include <iostream>
// #include <iterator>

// using namespace std;

// int square(int i) {
//     return i * i; 
// }

// int main() {
//     vector<int> V, V2;
//     V.push_back(0);
//     V.push_back(1);
//     V.push_back(2);

//     transform(V.begin(), V.end(), back_inserter(V2), square);
//     copy(V2.begin(), V2.end(), ostream_iterator<int>(cout, " "));
//     cout << endl;

//     return 0;
// }


// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;

// int main(){
//     int myints[] = {10, 20, 30, 40, 50};
//     vector<int> myvector(4, 99);

//     iter_swap(myints, myvector.begin());
//     iter_swap(myints + 3, myvector.begin() + 2);

//     for (vector<int>::iterator it = myvector.begin(); it != myvector.end(); ++it){
//         cout << *it << ' ';
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// template <typename T>
// class Base {
// public:
//     T data;
//     Base(T val) : data(val) {}
//     virtual void print() {
//         cout << data << " ";
//     }
// };

// template <typename T>
// class Derived : public Base<T> {
// public:
//     Derived(T val) : Base<T>(val) {}
//     void print() override {
//         cout << boolalpha << static_cast<bool>(this->data) << " ";
//     }
// };

// int main() {
//     Derived<bool>* dptr = new Derived<bool>(false);
//     Base<bool>* bptr = dptr;
//     bptr->print();
//     delete dptr;
//     return 0;
// }


// #include <iostream>
// #include <iterator>
// #include <vector>

// using namespace std;

// int main() {
//     vector<int> myvector;

//     for (int i = 1; i < 4; ++i)
//         myvector.push_back(i * 10);

//     ostream_iterator<int> out_it(cout, " ");
//     copy(myvector.begin(), myvector.end(), out_it);

//     return 0;
// }

// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;

// bool myfunction(int i, int j) {
//     return (i < j);
// }

// int main() {
//     int myints[] = {9, 8, 7, 6};
//     vector<int> myvector(myints, myints + 4);

//     partial_sort(myvector.begin(), myvector.begin() + 2, myvector.end());
//     partial_sort(myvector.begin(), myvector.begin() + 2, myvector.end(), myfunction);

//     for (vector<int>::iterator it = myvector.begin(); it != myvector.end(); ++it)
//         cout << *it << ' ';

//     return 0;
// }


// #include <vector>
// #include <iostream>
// #include <typeinfo>
// #include <stdexcept>

// using namespace std;

// int main() {
//     vector<int> vec;
//     vec.push_back(10);
//     int i = vec[100];

//     try {
//         i = vec[0];
//         cout << i << endl;
//     }
//     catch (exception& e) {
//         cout << "Caught: " << e.what() << endl;
//         cout << "Type: " << typeid(e).name() << endl;
//     }
//     catch (...) {
//         cout << "Unknown exception: " << endl;
//     }

//     return 0;
// }


#include <iostream>

using namespace std;

struct node
{
    int data;
    node *next;
};

class linked_list
{
private:
    node *head,*tail;
public:
    linked_list()
    {
        head = NULL;
        tail = NULL;
    }
};

int main()
{
    linked_list a;
    return 0;
}