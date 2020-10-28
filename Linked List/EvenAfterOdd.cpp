#include <bits/stdc++.h>
using namespace std;

class node {
public :
    int data;
    node *next;
    node(int d) {
        data = d;
        next = NULL;
    }
};

void insertAtHead(node *&head, int d) {
    node *n = new node(d);
    n -> next = head;
    head = n;
}

void insertAtTail(node *&head, int d) {
    if(head == NULL) {
        insertAtHead(head,d);
        return;
    }
    node *temp = head;
    while(temp -> next != NULL) {
        temp = temp -> next;
    }
    temp -> next = new node(d);
}

void print(node *head) {
    while(head != NULL) {
        cout<<head -> data<<" ";
        head = head -> next;
    }
    cout<<"\n";
}

node *build(int n) {
    int d,temp = n;
    node *head = NULL;
    while(temp--) {
        cin>>d;
        insertAtTail(head,d);
    }
    return head;
}

node* evenAfterOdd(node *&head) {
    if(head == NULL || head -> next == NULL) {
        return head;
    }
    node *o = NULL, *e = NULL, *temp = head;
    while(temp != NULL) {
        if((temp -> data) & 1) {
            insertAtTail(o,temp -> data);
        }
        else {
            insertAtTail(e,temp -> data);
        }
        temp = temp -> next;
    }
    temp = o;
    if(temp != NULL) {
        while(temp -> next != NULL) {
            temp = temp -> next;
        }
        temp -> next = e;
        return o;
    }
    return e;
}

int main() {
    int n;
    cin>>n;
    node *head = build(n);
    head = evenAfterOdd(head);
    print(head);
}