// Input

// Linked List:
// 1 → 2 → 3 → 4 → 5 → 6 → 7 → 8 → 9
// K = 3

// Final Output
// 1 → 2 → 4 → 5 → 7 → 8

// Nodes Deleted 3, 6, 9

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
//   Base case
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
  int arr[]={1,2,3,4,5,6,7,8,9};
  head=createLinkedList(arr,0,9);
int k=3;
int count=1;
Node *curr=head;
Node *prev=NULL;
// handling edge case 
if(k==1)
{
    return 0;
}
while(curr!=NULL)
{
    // Delete this node
    if(k==count)
    {
      prev->next=curr->next;
      delete curr;
      curr=prev->next;
      count=1;
    }
    else{
        prev=curr;
        curr=curr->next;
        count++;
    }
}


//   Print link list
Node *temp=head;
while(temp!=NULL)
{
    cout<<temp->data<<" ";
    temp=temp->next;
}
}

// Time Complexity: O(N)

// Space Complexity: O(1)