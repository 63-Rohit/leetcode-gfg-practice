#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

// Head recursion: create list in forward order
Node* createLinkedList(int arr[], int index, int size)
{
    // Base case
    if (index == size)
    {
        return NULL;
    }

    // Recursive call first
    Node* head = createLinkedList(arr, index + 1, size);

    // Create current node
    Node* temp = new Node(arr[index]);
    temp->next = head;

    return temp;
}

int main()
{
    int arr[] = {2, 4, 6, 8};

    Node* Head = createLinkedList(arr, 0, 4);

    // Print linked list
    Node* temp = Head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
