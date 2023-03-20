// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};
struct node *create(int data){
    struct node *n;
    n=(struct node *)malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}
/* i can also use above 5 lines in my main function for creating individual node, but that would require a lot of typing and lines of code which isnt desirable */

int main() {
    struct node *p=create(2);
    struct node *p1=create(3);
    struct node *p2=create(4);

    //then i can link the nodes
    p->left=p1;
    p->right=p2;
    return 0;
}
