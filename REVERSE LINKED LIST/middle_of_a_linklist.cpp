#include<iostream>
using namespace std;
class Node{
public:
int data;
Node *next;
// Constructor
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
  int arr[]={10,12,20,42};
  head=createLinkedList(arr,0,4);

Node *slow=head;
Node *fast=head;

while(fast!=NULL && fast->next!=NULL)
{
    slow=slow->next;
    fast=fast->next->next;
}
cout<<"Middle of linkedlist is: "<<slow->data<<endl;
//   print linnk list
Node *temp=head;
cout<<"Linked List: ";
while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
}
}