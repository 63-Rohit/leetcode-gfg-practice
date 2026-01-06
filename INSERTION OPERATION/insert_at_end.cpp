#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    // Connstructor
    Node(int value)
    {
        data=value;
        next=NULL;
    }
};
int main()
{
    Node *Head=NULL;
    int arr[]={2,4,6,8,10};
    for(int i=0;i<5;i++)
    {
        // Link list does not exists
       if(Head==NULL)
       {
         Head=new Node(arr[i]);
       }

       else{
        // Link list exists
        Node *tail=Head;
        while(tail->next!=NULL)
        {
            tail=tail->next;
        }
        Node *temp;
        temp=new Node(arr[i]);
        tail->next=temp;
       }
    }
    //printing linked list
    Node *temp=Head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}