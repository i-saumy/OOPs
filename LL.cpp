#include <iostream>

using namespace std;

class Node {
    public:
    int data;
    Node * next;
    
    //constructor
    Node(int data){
    this->data=data;
    this-> next=NULL;
    }
    
    //destrutor
    ~Node(){
        int value = this -> data;
        if(this -> next != NULL){
            delete next;
            this->next= NULL;
        }
        cout<<" memory is free for node with data "<<value<<endl;
    }
};

void InsertAtTail(Node * &tail,int d){
    Node*temp= new Node (d);
    tail -> next = temp;
    tail = temp;
}

void InsertAtHead(Node * &head,int d){
    Node * temp= new Node(d);
    temp->next=head;
    head=temp;
}
void InsertAtMiddle(Node * &head,int pos, int d){
    if(pos==1){
        InsertAtHead(head,d);
        return;
    }
    Node * temp= head;
    int count =1;
    
    while(count<pos-1){
        temp=temp->next;
        count++;
    }
    
    Node * nodetobeinsert = new Node(d);
    nodetobeinsert -> next = temp->next;
    temp->next= nodetobeinsert;
}
void deletenode(int pos,Node * &head){
    
    if(pos==1){
        Node * temp= head;
        head = head -> next;
        temp->next=NULL;
        delete temp;
    }
    else
    {
        Node * current = head;
        Node * previous = NULL;
        
        int count =1 ;
        while(count<=pos-1){
            previous = current;
            current = current ->next;
            count++;
        }
        previous -> next = current -> next;
        current->next=NULL;
        delete current;
    }
}


void print(Node * &head){
    Node*temp=head;
    while(temp != NULL){
        cout<< temp -> data<<" ";
        temp = temp -> next;
    }
    cout<< endl; 
}
int main()
{
    Node * node1 = new Node(10);
    
    //cout<< node1 -> data<<endl;
    //cout<< node1-> next<<endl;
    Node * tail = node1;
    print(tail);
     
    InsertAtTail(tail,132);
    print(tail);
    
    InsertAtTail(tail,121);
    print(tail);
    Node * head = node1;
    print(head);
    
   InsertAtHead(head, 12);
   print(head);
   
   InsertAtHead(head, 15);
   
   print(head);
   
   InsertAtMiddle(head,1,23);
   print(head);
   
   InsertAtMiddle(head,3,232);
   print(head);
   
   deletenode(1,head);
   print(head);
   
   deletenode(2,head);
   print(head);
   
   cout<< "head"<<head -> data <<endl;
   cout<< "tail"<<tail->data<<endl;
    return 0;
}
