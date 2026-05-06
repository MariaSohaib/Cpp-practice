#include <iostream>
using namespace std;
struct node{
    int num;
    node *next;
};
class linkedlist{
    private:
        node *head;
    public:
        linkedlist(){
            head=NULL;
        }
        void insert(int data){
            node *newnode=new node;
            newnode->num=data;
            newnode->next=head;
            head=newnode;
        }
        void display(){
            node *temp=head;
            while(temp!=NULL){
                cout<<temp->num<<"->";
                temp=temp->next;
            }
            cout<<"NULL"<<endl;
        }
        void remove(int data){
            node *temp=head;
            node *prev=NULL;
            while(temp->num!=data&&temp!=NULL){
                prev=temp;
                temp=temp->next;
            }
            prev->next=temp->next;
            delete temp;
        }
};

int main(){
    linkedlist l1;
    l1.insert(10);
    l1.insert(15);
    l1.insert(20);
    l1.display();
    l1.remove(15);
    l1.display();
    return 0;
}
