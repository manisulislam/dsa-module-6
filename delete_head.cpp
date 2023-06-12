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
void insert_at_postion(Node *Head, int pos, int v){
    Node * newNode= new Node(v);
    Node * tmp= Head;
    for(int i=1; i<pos-1;i++){
        tmp= tmp->next;
        if(tmp==NULL){
            cout<<endl<<"Insert Invalid indexes"<<endl;
            return;
        }
    }
    if(tmp->next==NULL){
        cout<<endl<<"Insert Invalid Indexe"<<endl;
        return;
    }
    newNode->next=tmp->next;
    tmp->next=newNode;
    cout<<endl<<endl<<"inserted at any position"<<pos<<endl;
}
void insert_at_head(Node* & Head, int v){
    Node * newNode =new Node (v);
    newNode->next=Head;
    Head=newNode;
    cout<<endl<<"inserted at Head"<<endl;
}
void delete_from_position(Node * Head,int  pos){
    Node * tmp= new Node(pos);
    for(int i=1; i<=pos-1;i++){
        tmp=tmp->next;
        if(tmp==NULL){
            cout<<endl<<"Invalid index"<<endl;
            return;
        }
    }
    Node * deleteNode=tmp->next;
    tmp->next=tmp->next->next;
    delete deleteNode;
    cout<<"deleted position"<<endl;

}
void delete_head(Node *Head){
    if(Head==NULL){
        cout<<endl<<"delete not head"<<endl;
        return;
    }
    Node * deleteNode= Head;
    Head=Head->next;
    delete deleteNode;
    cout<<"Deleted Head Position"<<endl;

}
int main(){
    Node *Head= NULL;
    cout<<"Option 1: insert in the tail"<<endl;
    cout<<"Option 2: Your Linked list"<<endl;
    cout<<"option 3: insert any postion"<<endl;
    cout<<"option 4: insert at head"<<endl;
    cout<<"option 5: delete with position"<<endl;
    cout<<"option 6: delete Head"<<endl;
    cout<<"Option 7: Terminate"<<endl;
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
        int pos, val;
        cout<<"Enter your position"<<endl;
        cin>>pos;
        cout<<"Enter your val"<<endl;
        cin>>val;
        insert_at_postion(Head, pos, val);


    }
    else if(op==4){
        cout<<"Enter your value"<<endl;
        int v;
        cin>>v;
        insert_at_head(Head, v);
    }
    else if(op==5){
        cout<<"Enter your position"<<endl;
        int pos;
        cin>>pos;
        if(pos==0){
            delete_head(Head);
        }
        else{
            delete_from_position(Head, pos);

        }
        
    }
    else if(op==6){
        delete_head(Head);
    }

    else if(op==7){
        break;
    }


    }
    
    
    
    return 0;
}