// 🔹 Example

// Linked list: 21 → 12 → 56 → 10

// 2nd node from the end is 56

// Delete 56

// Output
// 21 12 10

#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    // Constructor
    Node(int value)
    {
        data = value;
        next = NULL;
    }
};
    Node *createLinkedList(int arr[], int index, int size)
    {
        // Base case
        if (index == size)
        {
            return NULL;
        }
        Node *temp = new Node(arr[index]);
        temp->next=createLinkedList(arr,index+1,size);
        return temp;
    }
int main()
{
    int n=2;
    Node *head = NULL;
    int arr[] = {21, 12, 56, 10};
     head=createLinkedList(arr,0,4);
    //  Count total number of nodes
     int count=0;
     Node *temp=head;
     while(temp!=NULL)
     {
        count++;
        temp=temp->next;
     }
     count=count-n;

  // if first node ko delete karna ho
//   Delete head
   if(count==0)
   {
    temp=head;
    head=head->next;
    delete temp;
   }
   else{

       Node *curr=head;
       Node *prev=NULL;
       while(count--)
       {
           prev=curr;
           curr=curr->next;
        }
        prev->next=curr->next;
        delete curr;
    }

    //  Print link list
    temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}