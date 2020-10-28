#include <bits/stdc++.h>
using namespace std;

class node {
public :
    int data;
    node *next;
    node *prev;
    node(int d) {
        data = d;
        next = NULL;
        prev = NULL;
    }
};

void insertAtHead(node *&head, int d) {
    node *n = new node(d);
    n -> next = head;
    if(head != NULL) {
        head -> prev = n;
    }
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
    node *n = new node(d);
    temp -> next = n;
    n -> prev = temp;
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

bool isPalindrome(node *head) {
    if(head == NULL || head -> next == NULL) {
        return true;
    }
    node *start = head, *end = head;
    while(end -> next != NULL) {
        end = end -> next;
    }
    while(start != end) {
        if(start -> data != end -> data) {
            return false;
        }
        start = start -> next;
        end = end -> prev;
    }
    return true;
}

int main() {
    int n;
    cin>>n;
    node *head = build(n);
    if(isPalindrome(head)) {
        cout<<"true";
    }
    else {
        cout<<"false";
    }
    return 0;
}