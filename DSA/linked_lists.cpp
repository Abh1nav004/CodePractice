// #include<bits/stdc++.h>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;

//     Node(int data){
//         this->data=data;
//         this->next=NULL;
//     }
// };

// void InsertAtHead(Node* &head,int d){
//     Node* temp=new Node(d);
//     temp->next=head;
//     head=temp;
// }

// void Display(Node* &head ){
//     Node* temp=head;
//     while (temp!=NULL)
//     {
//         cout<<temp->data<<"->";
//         temp=temp->next;
//     }
//     cout<<endl;
// }
// int main(){
//     Node* node1=new Node(10);
//     Node* node2=new Node(89);
//     Node* node3=new Node(100);

//     Node* head = node1;
//     InsertAtHead(head,12);
//     InsertAtHead(head,89);
//     InsertAtHead(head,100);
//     Display(head);
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;

//     Node(int data){
//         this->data=data;
//         this->next=NULL;
//     }
// };

// void InsertAtTail(Node* &tail,int d){
//     Node* temp=new Node(d);
//     tail->next=temp;
//     tail=temp;
// }

// void Display(Node* &head ){
//     Node* temp=head;
//     while (temp!=NULL)
//     {
//         cout<<temp->data<<"->";
//         temp=temp->next;
//     }
//     cout<<endl;
// }
// int main(){
//     Node* node1=new Node(10);
//     Node* node2=new Node(89);
//     Node* node3=new Node(100);

//     Node* head = node1;
//     Node* tail = node1;
//     InsertAtTail(tail,12);
//     InsertAtTail(tail,89);
//     InsertAtTail(tail,100);
//     Display(head);
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;

//     Node(int data){
//         this->data=data;
//         this->next=NULL;
//     }
// };

// void InsertAtHead(Node* &head,int d){
//     Node* temp=new Node(d);
//     temp->next=head;
//     head=temp;
// }

// void InsertAtPosition(Node* &head,int position, int d){
//     Node* temp= head;
//     int cnt=1;

//     while (cnt<position-1)
//     {
//       temp= temp->next;
//       cnt++; 
//     }

//     Node* nodeToInsert=new Node(d);
//     nodeToInsert->next=temp->next;
//     temp->next = nodeToInsert;
    

// }

// void Display(Node* &head ){
//     Node* temp=head;
//     while (temp!=NULL)
//     {
//         cout<<temp->data<<"->";
//         temp=temp->next;
//     }
//     cout<<endl;
// }
// int main(){
//     Node* node1=new Node(10);
//     Node* node2=new Node(89);
//     Node* node3=new Node(100);

//     Node* head = node1;
//     InsertAtHead(head,12);
//     InsertAtHead(head,89);
//     InsertAtHead(head,100);
//     InsertAtPosition(head,1,2);
//     Display(head);
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* head;
//     Node* next;

//     Node(int data){
//         this->data=data;
//         this->next=NULL;
//     }
// };

// void InsertAtPosition(Node* &head,int position,int d){
//     Node* temp=head;
//     int cnt=1;

//     while (cnt<position-1)
//     {
//         temp=temp->next;
//         cnt++;
//     }
//     Node* nodetoinsert=new Node(d);

//     nodetoinsert->next=temp->next;
//     temp->next=nodetoinsert;
// }

// void InsertHead(Node* &head,int d){
//     Node* temp=new Node(d);
//     temp->next=head;
//     head=temp;
// }
// void InsertTail(Node* &tail,int d){
//     Node* temp=new Node(d);
//     tail->next=temp;
//     tail=temp;

// }
// void Display(Node* &head){
//     Node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<"->";
//         temp=temp->next;
//     }
//     cout<<endl;
// }

// int main(){
//     Node* n1=new Node(10);
//     Node* head=n1;
//     Node* tail=n1;
//     Display(head);
//     InsertHead(head,12);
//     Display(head);
//     InsertTail(tail,16);
//     Display(head);
//     return 0;
// }

//Practice 

// #include<bits/stdc++.h>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;
//     //constructor
//     Node(int data){
//         this->data=data;
//         this->next=NULL;
//     }
//     //destructor
//     // ~Node(){
//     //     int value=this->data;
//     //     if(this->next !=NULL){
//     //         delete next;
//     //         this->next=NULL;
//     //     }
//     // }
// };

// void InsertAtHead(Node* &head,int d){
//     Node* temp=new Node(d);
//     temp->next=head;
//     head=temp;
// }

// void print(Node* &head){
//     Node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;
// }

// void InsertAtTail(Node* &tail,int d){
//     Node* temp=new Node(d);
//     tail->next=temp;
//     tail=temp;

// }

// void InsertAtPosition(Node* &tail,Node* &head,int p,int d){
    // if (p==1)
    // {
    //     InsertAtHead(head,d);
    //     return;
    // }
    
    // Node* temp=head;
    // int cnt=1;
    // while (cnt<p-1)
    // {
    //     temp=temp->next;
    //     cnt++;
    // }
    // if (temp->next==NULL)
    // {
    //     InsertAtTail(tail,d);
    //     return;
    // }
    
    // Node* nodetoinsert=new Node(d);
    // nodetoinsert->next=temp->next;
    // temp->next=nodetoinsert;

    

// }

// void DeleteNode(int p,Node* &head){

//     //Starting Node
//     if(p==1){
//         Node* temp=head;
//         head=temp->next;

//         //memory free 
//         temp->next=NULL;
//         delete temp;

//     }
//     else{
//         //any middle or last node
//         Node* curr=head;
//         Node* prev=NULL;
        
//         int cnt=1;
//         while (cnt<p)
//         {
//             prev=curr;
//             curr=curr->next;
//             cnt++;
//         }
        
//         prev->next=curr->next;
//         curr->next=NULL;
//         delete curr;
//     }
// }
// int main(){

//     Node* node1=new Node(5);
//     Node* head=node1;
//     Node* tail=node1;
//     print(head);
//     // cout<<node1->data<<" ";
//     // cout<<node1->next<<" ";


//     // InsertAtHead(head,10);
//     // print(head);
//     // InsertAtHead(head,15);
//     // print(head);
    
//     InsertAtTail(tail,20);
//     print(head);
//     InsertAtTail(tail,90);
//     print(head);
//     InsertAtTail(tail,36);
//     print(head);

//     InsertAtPosition(tail,head,1,80);
//     print(head);


//     DeleteNode(2,head);
//     print(head);
//     cout<<"Head is "<<head->data<<endl;
//     cout<<"Tail is "<<tail->data<<endl;

    
//     return 0;
// }



//DOUBLY LL

#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }
};

void print(Node* head){
    Node* temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    
}
int getLength(Node* head){
    int len=0;
    Node* temp = head;
    while (temp!=NULL)
    {
        len++;
        temp=temp->next ;
    }
    return len;
}

void InsertAtHead(Node* &head,int d){
    Node* temp=new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
}
void InsertAtTail(Node* &tail,int d){
    Node* temp=new Node(d);
     tail->next=temp;
     temp->prev=tail;
     tail=temp;
}
void InsertAtPosition(Node* &tail,Node* &head,int p, int d){
        if (p==1)
    {
        InsertAtHead(head,d);
        return;
    }
    
    Node* temp=head;
    int cnt=1;
    while (cnt<p-1)
    {
        temp=temp->next;
        cnt++;
    }
    if (temp->next==NULL)
    {
        InsertAtTail(tail,d);
        return;
    }
    
    Node* nodetoinsert=new Node(d);
    nodetoinsert->next=temp->next;
    temp->next=nodetoinsert;
  

}
int main(){
    Node* node1=new Node(10);
    Node* head=node1;
    Node* tail=node1;
    print(head);
    InsertAtHead(head,11);
    print(head);
    InsertAtHead(head,12);
    print(head);
    InsertAtHead(head,13);
    print(head);
    InsertAtTail(tail,15);
    print(head);
    InsertAtTail(tail,18);
    print(head);



    cout<<"Length of Doubly LL is "<<getLength(head)<<endl;
    
    return 0;
}




