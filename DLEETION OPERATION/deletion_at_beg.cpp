#include<iostream>
using  namespace std;
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
    Node *Head=NULL;
    int arr[]={4,10,12,13};
    
    Head=createLinkedList(arr,0,4);
    
    // Deleting a node at start
      if(Head!=NULL)
      {
        Node*temp=Head;
        Head=Head->next;
        delete temp;
      }
    
    // Print link list
    Node *temp=Head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
        }

}