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

node* merge(node *&a, node *&b) {
    if(a == NULL) {
        return b;
    }
    if(b == NULL) {
        return a;
    }
    node *c;
    if((a -> data) <= (b -> data)) {
        c = a;
        c -> next = merge(a -> next, b);
    }
    else {
        c = b;
        c -> next = merge(a, b -> next);
    }
    return c;
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n1,n2;
        cin>>n1;
        node *head1 = build(n1);
        cin>>n2;
        node *head2 = build(n2);
        node *sortedHead = merge(head1,head2);
        print(sortedHead);
    }
}