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
    // Base case
    if(index==size){
        return NULL;
    }
    Node *temp=new Node(arr[index]);
    temp->next=createLinkedList(arr,index+1,size);
    int value=30;
    int x=3;
    x--;
    while(x--)
    {
        temp=temp->next;
    }
    Node *temp2=new Node(value);
    temp2->next=temp->next;
    temp->next=temp2;
    return temp;
}
int main()
{
    Node *Head=NULL;
    int arr[]={2,4,6,8};

    Head=createLinkedList(arr,0,5);

    // printing link list
   Node *temp=Head;
   while(temp!=NULL)
   {
    cout<<temp->data<<" ";
    temp=temp->next;
   }
}
