#include "doublelist.h"

Node::Node(int data = 0, Node * next=NULL, Node * perv=NULL){
    this->data = data;
    this->next = next;
    this->perv = perv;
}


DoubleList :: DoubleList(){
    head = NULL;
    tail = NULL;
    counter = 0;
}

bool DoubleList :: isEmpty() const{
    return (head == tail && head == NULL);
}

int DoubleList :: get_size(){
    return counter;
}

void DoubleList :: print(){
    if(isEmpty()) cout<<"List is Empty \n";
    else
    {
        Node * start = head;
        while(start) 
        {
            cout<<start->data<<"->";
            start = start->next;
        }
        cout<<"NULL"<<endl;
    }
}

bool DoubleList :: push_front(int element){

    Node * new_node = new Node(element);

    if(!new_node) 
        return false;
    if(isEmpty())  
        head = tail = new_node;
    else{
        new_node->next = head;
        head->perv = new_node;
        head = new_node;
    }
    counter++; 
    return true;
}

bool DoubleList :: push_back(int element){
    Node * new_node = new Node(element);

    if(!new_node) 
        return false;
    if(isEmpty())
        head = tail = new_node;
    else{
        new_node->perv = tail;
        tail->next = new_node;
        tail = new_node;
    }
    counter++; 
    return true;
}

int DoubleList :: get_front() const{
    if(isEmpty()) exit(1);
    return head->data;
}
    
int DoubleList :: get_back() const{
    if(isEmpty()) exit(1);
    return tail->data;
}

bool DoubleList :: pop_front(){

    if(isEmpty()) return false;
    Node * t = head;
    head = head->next;
    head->perv = NULL;
    delete t;

    if(head == NULL) tail = NULL;
    counter--;
    return true;
}

bool DoubleList :: pop_back(){

    if(isEmpty()) return false;
    Node * t = tail;
    tail = tail->perv;
    tail->next = NULL;
    delete t;

    if(head == NULL) tail = NULL;
    counter--;
    return true;
}