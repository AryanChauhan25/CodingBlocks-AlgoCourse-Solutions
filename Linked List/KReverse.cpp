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

node* kReverse(node *&head, int k) {
    int steps = 0;
    node *c = head, *p = NULL, *n;
    while(c != NULL && steps < k) {
        n = c -> next;
        c -> next = p;
        p = c;
        c = n;
        steps++;
    }
    if(n != NULL) {
        head -> next = kReverse(n,k);
    }
    return p;
}

int main() {
    int n,k;
    cin>>n>>k;
    node *head = build(n);
    head = kReverse(head,k);
    print(head);
}