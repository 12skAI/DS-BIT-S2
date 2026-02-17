#include <iostream>
#include <math.h>
using namespace std;

class Node
{
    public:
        int data;
        Node* next;
        Node(int val){
            data = val;
            next = NULL;
        }
};

class SinglyLinkedList
{
    private:
        Node* head; // head itself is not a node, but just a node pointer that points to the first node
    public:
        void Dislpay(){
            if (head == NULL){
                cout << "The list is empty\n";
                return;
            }
            Node* temp = head;
            while(temp->next != NULL)
            {
                cout << temp->data << " ->";
                temp = temp->next;
            }
            cout << "Null\n";
        }
        void InsertAtBeginning(int val){
            Node* newNode = new Node(val);
            newNode->next = head;
            head = newNode;
            cout << "Inserted at the beginning\n";
        }
        void InsertAtEnd(int val){
            //check if list is already empty then call InsertAtBeginning(val)
            Node* newNode = new Node(val);
            Node* temp = head;
            while(temp->next!=NULL){
                temp = temp->next;
            }
            temp->next = newNode;
            cout << "Inserted at the end\n";
        }
        void Insert(int val, int pos){
            if (pos == 0){
                InsertAtBeginning(val);
                return;
            }
            Node* newNode = new Node(val);
            Node* temp = head;
            int i = 0;
            while (i<pos && temp->next!=NULL){
                temp = temp->next;
                i++;
            }
            newNode->next = temp->next;
            temp->next = newNode;
            cout << "Inserted at " << pos << "th position\n";
        }
        
};

int main(){

    return 0;
}