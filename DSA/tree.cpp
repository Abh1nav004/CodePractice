// #include<bits/stdc++.h>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node *left;
//     Node *right;

//     Node(int val){
//         data = val;
//         left=NULL;
//         right=NULL;
//     }
// };
// int main(){

//     Node* root= new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);

//     root->left->left = new Node(4);
//     root->left->right = new Node(5);
//     root->right->left = new Node(6);
//     root->right->right = new Node(7);
    
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node *left;
//     Node *right;

//     Node(int val){
//         data = val;
//         left=NULL;
//         right=NULL;
//     }
// };


// Node* insertBST(Node* root,int val){
//     if(root==NULL){
//         return new Node(val);
//     }
//     if(val<root->data){
//         root->left = insertBST(root->left,val);
//     }
//     else
//     {
//         root->right =insertBST(root->right,val);
//     }
//     return root;
    
// }

// void printLevelOrder(Node* root){
//     if(root == NULL) return;
//     queue<Node*>q;

//     q.push(root);
//     q.push(NULL);

//     while (!q.empty()){
//         Node* node=q.front();
//         q.pop();

//         if(node!=NULL){
//             cout<<node->data<<" ";
//             if (node->left)
//             {
//                 q.push(node->left);
//             }
//             if (node->right)
//             {
//                 q.push(node->right);
//             }
//         }
        
//        else if (!q.empty())
//         {
//             q.push(NULL);
//         }
        
//     }


    
// }
// int main(){
//     Node* root=new Node(1);
//     root->left=new Node(2);
//     root->right=new Node(3);
    
//     root->left->left=new Node(4);
//     root->left->right=new Node(5);
//     root->right->left=new Node(6);
//     root->right->right=new Node(7);

//     printLevelOrder(root);
// }


// #include<bits/stdc++.h>
// #include<queue>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* left;
//     Node* right;

//     Node(int d){
//         this->data=data;
//         this->right=NULL;
//         this->left=NULL;
//     }
// };

// Node* Buildtree(Node* root){
//     cout<<"Enter the data: "<<endl;
//     int data;
//     cin>>data;
//     root=new Node(data);

//     if(data==-1){
//         return NULL;
//     }

//     cout<<"Enter data for inserting in left of "<<data<<endl;
//     root->left=Buildtree(root->left);
//     cout<<"Enter data for inserting in right of "<<data<<endl;
//     root->right=Buildtree(root->right);
//     return root;
// }
// void leveloftraversal(Node* root){
//     queue<Node*>q;
//     q.push(root);
//     q.push(NULL);
//     while (!q.empty())
//     {
//         Node* temp = q.front();
//         cout<<temp -> data<<" ";
//         q.pop();
//         if(temp==NULL){
//             cout<<endl;
//             if(!q.empty()){
//                 q.push(NULL);
//             }
//         }

//         else{
//             if (temp->left)
//             {
//                 q.push(temp->left);
//             }
//             if (temp->right)
//             {
//                 q.push(temp->right);
//             }
//         }
        
//     }
    
// }
// int main(){
//     Node* root=NULL;

//     //creating a Tree
//     root=Buildtree(root);
    
//     //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
//     //level order
//     cout<<"Printing the level order traversal output "<<endl;
//     leveloftraversal(root);
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
       this->data=d;
       this->left=NULL;
       this->right=NULL;

    }
};

void inorder(Node* root){
    if (root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void preorder(Node* root){
    if (root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(Node* root){
    if (root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

void leveloftraversal(Node* root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        Node* temp = q.front();
        cout<<temp -> data<<" ";
        q.pop();
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }

        else{
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
        
    }
    
}

Node* insertIntoBST(Node* root,int d){
    //base case
    if(root==NULL){
        root=new Node(d);
        return root;
    }
    if(d>root->data){
        root->right=insertIntoBST(root->right,d);
    }
    else{

        root->left=insertIntoBST(root->right,d);
    }
}

Node* minVal(Node* root){
    Node* temp=root;
    while (temp->left!=NULL)
    {
        temp=temp->left;
    }
    return temp;
    
}
Node* maxVal(Node* root){
    Node* temp=root;
    while (temp->right!=NULL)
    {
        temp=temp->right;
    }
    return temp;
    
}

void takeInput(Node* &root){
    int data;
    cin>>data;

    while(data!=-1){
        insertIntoBST(root,data);
            }
}

bool SearchBST(Node* root,int x){
    if(root==NULL){
        return false;
    }
    if(root->data==x){
        return true;
    }
    if(root->data>x){
        return SearchBST(root->left,x);
    }
    else{
        return SearchBST(root->right,x);
    }
}

Node* deleteBST(Node* root,int val){
    //base case
    if(root=NULL){
        return root;
    }
    if(root->data==val){
        //0 child
        if (root->left==NULL && root->right==NULL)
        {
            delete root;
            return NULL;
        }

        //1 child
        //left child
        if(root->left != NULL && root->right==NULL){
            Node* temp=root->left;
            delete root;
            return temp;
        }

        //right child
        if(root->left == NULL && root->right!=NULL){
            Node* temp=root->right;
            delete root;
            return temp;
        }

        //2 child
        if(root->left!=NULL && root->right !=NULL){
            int mini=minVal(root->right)->data;
            root->data=mini;
            root->right=deleteBST(root->right,mini);
            return root;
        }

        else if(root->data>val){
            root->left=deleteBST(root->left,val);
            return root;
        }
        
    }
}
int main(){
    Node* root=NULL;

    cout<<"Enter data to create BST"<<endl;
    takeInput(root);

    cout<<"Printing the BST"<<endl;
    leveloftraversal(root);

    
    return 0;
}