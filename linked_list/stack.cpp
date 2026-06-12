#include <iostream>
using namespace std;

class node{
    public:
    int data ;
    node* next;

    node(int x){
        data = x;
        next = NULL;
    };
};

class Stack{
    node*top;
    public:
    Stack(){//stack constructer hai yaha pe
        top = NULL;
    };
    void push(int x){
        node* newnode = new node(x);

        if(top == NULL){
            top = newnode;
            return;
        }
        else{
            newnode->next =top;
            top = newnode;
        }
    };


    void printstack(){
            node*temp = top;

            while(temp!=NULL){
                cout<< temp->data<< " ";
                temp = temp->next;
            };
            cout<<endl;
        };

};

int main(){

    Stack stack;

    stack.push(10);

    return 0;

};