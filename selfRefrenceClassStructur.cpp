// #include<iostream>
// using namespace std;
// class node {
//     public: int data ;
//     node *left;
//     node *right ;
//     node (int d){
//         data =d;
//         left=NULL;
//         right=NULL;
//     };
// };



// int main(){


//     node *root=new node (10);
//     root->left=new node(20);
//     root->right= new node(40);

//    cout<<"Print Pre order"<<"\n";
//    cout<<root->data<<"\t";
//    cout<<root->left->data<<"\t";
//    cout<<root->right->data<<"\t";

//    cout<<" \n InOrder In Print it"<<"\n";

//    cout<<root->left->data<<"\t";
//    cout<<root->data<<"\t";
//    cout<<root->right->data<<"\t";

//    cout<<"\n this pOst Order "<<"\n";

//    cout<<root->left->data<<"\t";
//    cout<<root->right->data<<"\t";
//    cout<<root->data<<"\t";
// return 0;

// }



// THis is Print the All Order  from dinamicy and print also



// #include<iostream>
// using namespace std;
// class node {
//     public: int data ;
//     node *left;
//     node *right ;
//     node (int d){
//         data =d;
//         left=NULL;
//         right=NULL;
//     };
// };
// void PreOrder (node *r){
//     if(r== NULL){
//         return;
//     }
//     cout<<r->data<<"\t";
//     PreOrder(r->left);
//     PreOrder(r->right);

// }

// void InOrder (node *r){
//     if(r== NULL){
//         return;
//     }
    
//     InOrder(r->left);
//     cout<<r->data<<"\t";
//     InOrder(r->right);

// }



// void PostOrder (node *r){
//     if(r== NULL){
//         return;
//     }
    
//     PostOrder(r->left);
    
//     PostOrder(r->right);
//     cout<<r->data<<"\t";

// }
// int main(){


//     node *root=new node (10);
//         root->left=new node(20);
//         root->right= new node(40);

//         cout<<"Pre ordeer print \n";
//         PreOrder(root);

//         cout<<"\n Increment oder Print \n";
//         InOrder(root);

//         cout<<"\n Post Order Print \n";
//         PostOrder(root);
//     return 0;

// }







// How to take a input tree from User 


#include<iostream>
using namespace std;
class node {
    public: int data ;
    node *left;
    node *right ;
    node (int d){
        data =d;
        left=NULL;
        right=NULL;
    };
};


node *create(node *root){
    int d ;
    cout<<"Enter the values: \n";
    cin>>d;
    root= new node (d);
    if(d== -1){
        return NULL;
    }
    cout<<"Enter the Value for Left :" <<d<<"\n";
    cout<<"When you not Put value of any number the Enter -1 \n";
    root->left=create(root->left);
    cout<<"Enter the value for right: "<<d<<"\n";
    cout<<"When you Not put any value that time you put a value -1 \n";
    root->right=create(root->right);
    return root;

}
void PreOrder (node *r){
    if(r== NULL){
        return;
    }
    cout<<r->data<<"\t";
    PreOrder(r->left);
    PreOrder(r->right);

}

void InOrder (node *r){
    if(r== NULL){
        return;
    }
    
    InOrder(r->left);
    cout<<r->data<<"\t";
    InOrder(r->right);

}



void PostOrder (node *r){
    if(r== NULL){
        return;
    }
    
    PostOrder(r->left);
    
    PostOrder(r->right);
    cout<<r->data<<"\t";

}
int main(){


    node *root= NULL;
    root=create(root);







        cout<<" \n Pre ordeer print \n";
        PreOrder(root);

        cout<<"\n Increment oder Print \n";
        InOrder(root);

        cout<<"\n Post Order Print \n";
        PostOrder(root);
    return 0;

}
