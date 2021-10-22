#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

class Node{
    public:
    int data;
    Node*next;

};

//Building a function to print the output of each Node.
void printList(Node *n)
{
    while(n!=NULL){
        cout<< n->data<<" ";
        n=n->next;
    }
}

//program to create a simple linked
//list with 3 Nodes
int main()
{
    Node*head=NULL;
    Node*second=NULL;
    Node*third=NULL;
     //allocate 3 Node in the heap

     head = new Node();
     second = new Node();
     third= new Node();

     head->data =11; //assign data in first node
     head->next =third; // Linked first node with second

     //assign data to second node
     second->data =22;

     //linked second node with the third node
     second->next = NULL;

     third->data=33;
     third->next =second;

     printList(head);
   return 0;
}