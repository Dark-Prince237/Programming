 #include<stdio.h>
 #include<stdlib.h>

 struct node
 {
     struct node *left;
     int data;
     struct node *right;
 };
 
 struct node *create()
 {
     int x;
     struct node *newnode;
     newnode=(struct node*)malloc(sizeof(struct node));
     printf("enter data of a node\n");
     scanf("%d",&x);
     if(x==-1)
     {
         return 0;
     }
     newnode->data=x;
     printf("enter left child of %d\n",x);
     newnode->left=create();
     printf("enter right child of %d\n",x);
     newnode->right=create();

     return newnode;

 }

 void preorder(struct node *root)
 {
     if(root==NULL)
     {
         return;
     }
    printf("%d ",root->data);
    preorder(root->left);
    preorder(root->right); 
 }

 void inorder(struct node *root)
 {
     if(root==NULL)
     {
         return;
     }
   
    inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right); 
 }

 void postorder(struct node *root)
 {
     if(root==NULL)
     {
         return;
     }
   
    postorder(root->left);
   
    postorder(root->right); 
    printf("%d ",root->data);
 }


 

 int main()
 {
     struct node *root=NULL;
     root=create();
     printf("\npreorder is:- ");
     preorder(root);
     printf("\ninorder is:- ");
     inorder(root);
     printf("\npost order is:- ");
     postorder(root);
     
   
 }