#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
     int val;
     Node* next;
    Node(int val) {
        this->val=val;
        this->next=NULL;

    }
};
void inser_at_tail(Node * &Head, int v){
    Node * newNode= new Node(v);
    if(Head ==NULL){
        Head==newNode;
        return;
    }
    Node * tmp= Head;
    while (tmp->next!=NULL)
    {
        tmp=tmp->next;
    }
    //tmp akon next node a
    tmp->next=newNode;
    
}
void print_linked_list(Node * Head){
    Node *tmp=Head;
    while(tmp!=NULL){
        cout<<"your linked list output"<<endl;
        cout<<tmp->val;
        tmp=tmp->next;


    }
}
int main(){
    Node *Head= NULL;
    cout<<"Option 1: insert in the tail"<<endl;
    cout<<"Option 2: Your Linked list"<<endl;
    cout<<"Option 3: Terminate"<<endl;
    while(true){
        int op;
    cin>>op;
    if(op==1){
        int val;
        cin>>val;
        inser_at_tail(Head, val);
    }
    else if(op==2){
        print_linked_list(Head);

    }
    else if(op==3){
        break;
    }


    }
    
    
    
    return 0;
}