#include<iostream>
using namespace std;
class Node
{
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
    // Base Case
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
    Node*Head=NULL;
    int arr[]={20,8,7,8};
    int x=3;

    Head=createLinkedList(arr,0,4);

//Deleting 1st node
if(x==1) 
{
    Node *temp=Head;
    Head=Head->next;
    delete temp;
}

else{

    // Deleting Node at particular position in a linked list
    Node *curr=Head;
    Node *prev=NULL;
    x--;
    while(x--)
    {
        prev=curr;
        curr=curr->next;
    }
    prev->next=curr->next;
    delete curr;
}
    // Printing link list
    Node*temp=Head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}