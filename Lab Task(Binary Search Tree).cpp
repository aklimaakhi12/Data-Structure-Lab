#include<iostream>
using namespace std;



class BST
{
    int data;
    BST *left, *right;



public:
    BST()
    { data=0;
    left=right=NULL;
    }



  BST(int value)
   {
       data=value;
       left=right=NULL;
   }
    BST* insertnode (BST* root,int value)
    {




    if(root==NULL)
    {
        return new BST(value);
    }
    if (value>root->data)
    {
        root->right=insertnode(root->right,value);



   }
    else if(value<root->data)
    {
        root->left=insertnode(root->left,value);



   }



   }
    void inorderTraversal(BST *root)
    {
        if(root==NULL)
        {
            return;
        }
        inorderTraversal(root->left);
        cout<<root->data<<" ";
        inorderTraversal (root->right);
    }
     void preorderTraversal(BST *root)
    {
        if(root==NULL)
        {
            return;
        }



       cout<<root->data<<" ";
        inorderTraversal(root->left);
        inorderTraversal (root->right);



   }
};



int main()
{
    BST bst,*root=NULL;



   root=bst.insertnode(root,80);
    bst.insertnode(root,10);
   bst.insertnode(root,20);
   bst.insertnode(root,50);
   bst.insertnode(root,90);
   bst.insertnode(root,95);
   bst.insertnode(root,15);
   bst.insertnode(root,30);



  bst.inorderTraversal(root);
   cout<<endl;
   bst.preorderTraversal(root);
}
