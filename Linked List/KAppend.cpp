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

node* reverseLL(node *&head) {
    node *c = head, *p = NULL, *n;
    while(c != NULL) {
        n = c -> next;
        c -> next = p;
        p = c;
        c = n;
    }
    return p;
}

node* kAppend(node *&head, int k, int n) {
    if(k == 0 || k == n || head == NULL || head -> next == NULL) {
        return head;
    }
    if(k > n) {
        k = k % n;
    }
    int steps = 1;
    node *temp = head;
    while(steps != n - k) {
        steps++;
        temp = temp -> next;
    }
    node *a = temp -> next;
    temp -> next = NULL;
    node *tail = a;
    while(tail -> next != NULL) {
        tail = tail -> next;
    }
    tail -> next = head;
    return a;
}

int main() {
    int n,k;
    cin>>n;
    node *head = build(n);
    cin>>k;
    head = kAppend(head,k,n);
    print(head);
}