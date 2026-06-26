#include <iostream>
using namespace std;
class Node{ 
public:
    int data;
    Node* prev;
    Node* next;

    Node(int d){
        this->data = d;
        this-> prev = NULL;
        this->next = NULL;
    }

    ~Node(){
        int val = this->data;
        if(next!=NULL){
            delete next;
            next = NULL;
        }
        cout<<"Memory free for node with data "<<data<<endl;
    }
};
void print(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int getLength(Node* head){
    int len =0;
    Node* temp = head;
    while(temp!=NULL){
        len++;
        temp = temp->next;
    }
    return len;
}
void insertAtHead(Node*& head,int d){
    if(head == NULL){
        Node*temp = new Node(d);
        head = temp;
    }
    else{
    Node* temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
    }
}
void insertAtTail(Node*&tail, int d){
    if(tail == NULL){
        Node* temp = new Node(d);
        tail = temp;
        return;
    }
    Node* temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

void insertAtPosition(Node* &head,Node* &tail, int position, int d){
    if(position == 1){
        insertAtHead(head,d);
        return;
    }
    Node *temp = head;
    int cnt =1;

    while (cnt<position-1)
    {
        temp = temp->next;
        cnt++;
    }
    if(temp->next == NULL){
        insertAtTail(tail,d);
        return;
    }

    Node* nodeToInsert = new Node (d);
    nodeToInsert -> next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
    
}

void deleteNode(int position, Node* &head,Node* &tail){
    if(position == 1){
        Node* temp = head;
        temp -> next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else{
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt<position){
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        curr -> prev = NULL;
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
        tail = prev;
    }

}
int main(){

    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    print(head);
    cout<<"Length: "<<getLength(head)<<endl;
    insertAtHead(head,11);
    insertAtHead(head,14);
    insertAtHead(head,15);
    insertAtTail(tail,23);
    insertAtPosition(head,tail,1,199);
    deleteNode(1,head,tail);
    deleteNode(2,head,tail);
    deleteNode(3,head,tail);
    deleteNode(3,head,tail);
    deleteNode(2,head,tail);
    print(head);
    print(tail);



    
    return 0;
}