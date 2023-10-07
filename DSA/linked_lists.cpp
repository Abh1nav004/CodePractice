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





















// #include<bits/stdc++.h>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;

//     Node(int val){
//         data = val;
//         next=NULL;
//     }
// };
// void insertAtTail(Node* &head,int val){
//     Node* n=new Node(val);
//     if (head==NULL)
//     {
//         head=n;
//         return;
//     }
    
//     Node* temp=head;

//     while (temp->next!=NULL)
//     {
//         temp=temp->next;
//     }

//     temp->next=n;
    
// }

// void display(Node* head){
//     Node* temp=head;
//     while (temp!=NULL)
//     {
//         cout<<temp->data<<"->";
//         temp=temp->next;
//     }
//     cout<<NULL<<endl;
    
// }
// int main(){
//     Node* head=NULL;
//     insertAtTail(head,1);
//     insertAtTail(head,2);
//     insertAtTail(head,3);
//     display(head);
//     return 0;
// }