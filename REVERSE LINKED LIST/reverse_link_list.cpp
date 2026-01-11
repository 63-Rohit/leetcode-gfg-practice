#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
//  Constructor  
Node(int value)
{
    data=value;
    next=NULL;
}
};

Node *createLinkedList(int arr[],int index,int size)
{
    // Base case
    if(index==size)
    {
        return NULL;
    }
    Node *temp=new Node(arr[index]);
    temp->next=createLinkedList(arr,index+1,size);   
    return temp;
}
int main()
{
    Node *head=NULL;
    int arr[]={1,2,3,4,5};
    head=createLinkedList(arr,0,5);

   Node*prev=NULL;
   Node *curr=head;
   Node *fut=NULL;
   while(curr!=NULL)
   {
     fut=curr->next;
     curr->next=prev;
     prev=curr;
     curr=fut;
   }
   head=prev;

    // Printing link list
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}