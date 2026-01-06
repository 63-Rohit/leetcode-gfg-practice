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
  Node *Head=NULL;
  int arr[]={10,29,15,65};

Head=createLinkedList(arr,0,4);

if(Head!=NULL)
{
  if(Head->next==NULL)
  {
     Node *temp=Head;
     Head=NULL;
     delete temp;
    }
     else{
       
       Node *curr=Head;
       Node *prev=NULL;
       while(curr->next!=NULL)
       {
         prev=curr;
         curr=curr->next;
        }
        prev->next=NULL;
        delete curr;
      }
  }

// Print link list
Node *temp=Head;
while(temp!=NULL)
{
  cout<<temp->data<<" ";
  temp=temp->next;
}
}