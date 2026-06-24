#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
    //destructor

    ~Node(){
        int value = this->data;
        if(this->next!=NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"Memory is free for node with data "<<value<<endl;
    }
};
void insertAtHead(Node* &head, int d ){
        Node* temp = new Node(d);
        temp->next = head;
        head = temp;
    }
void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;

}

void insertAtPosition(Node* &tail,Node* &head,int position,int d){
    Node* temp = head;
    if(position ==1){
        insertAtHead(head,d);
        return;
    }
    int cnt = 1;
    while(cnt<position-1){
        temp = temp->next;
        cnt++;
    }
    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next =temp ->next;
    temp-> next = nodeToInsert;

    if(temp->next == NULL){
        insertAtTail(tail,d);
    }
    
}
    void print(Node* &head){
        Node*temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }

    void deleteNode(int position, Node* &head){
        if(position ==1){
            Node*temp = head;
            head = head->next;
            temp->next = NULL;
            delete temp; 
            temp=NULL;
        }
        else{
            //deleting any middle node or last node
            Node* curr = head;
            Node* prev = NULL;

            int cnt =1;
            while(cnt<position){
                prev = curr;
                curr = curr->next;
                cnt++;
            }
            prev->next = curr->next;
            curr->next = NULL;
            delete curr;
        }
    }
        
int main(){
    
    Node* node1 = new Node(10);

    Node* head = node1;
    Node* tail = node1;
    insertAtTail(tail,12);
    insertAtTail(tail,29);

    insertAtPosition(tail,head,4,23);

    deleteNode(2,head);
    print(head);

    return 0;
} 