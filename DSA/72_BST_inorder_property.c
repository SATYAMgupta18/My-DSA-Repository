#include<stdio.h>
#include<stdlib.h>
struct tree{
    int data;
    struct tree *left;
    struct tree *right;
};
void preorder(struct tree *root){
    if(root!=NULL){
        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(struct tree *root){
    if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
        printf("%d ",root->data);    
    }
}
void inorder(struct tree *root){
    if(root!=NULL){
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}
int isBST(struct tree *root){
    static struct tree *prev=NULL;
    if(root!=NULL){
        if(!isBST(root->left)){ return 0; }
        if(prev!=NULL && root->data <= prev->data){ return 0; }
        prev=root;
        return isBST(root->right);
    }
    else{ return 1; }
}
struct tree *create(int data){
    struct tree *n=(struct tree *)malloc(sizeof(struct tree));
    n->data=data;
    n->left = NULL;
    n->right = NULL;
    return n;
}
int main(){
    struct tree *p=create(5);
    struct tree *p1=create(3);
    struct tree *p2=create(6);
    struct tree *p3=create(1);
    struct tree *p4=create(4);
    
    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
    
    inorder(p);
    printf("\n");
    printf("%d",isBST(p));
    return 0;
}