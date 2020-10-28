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
    node *n = new node(d);
    temp -> next = n;
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

node* insertProperly(node *head, node *temp) {
    if(head == NULL || head -> data >= temp -> data) {
        temp -> next = head;
        return temp;
    }
    node *t = head;
    while(head -> next != NULL && head -> next -> data < temp -> data) {
        head = head -> next;
    }
    temp -> next = head -> next;
    head -> next = temp;
    return t;
}

node* insertionSort(node *head) {
    node *sorted = NULL;
    while(head != NULL) {
        node *t = head -> next;
        sorted = insertProperly(sorted, head);
        head = t;
    }
    return sorted;
}

int main() {
    int n;
    cin>>n;
    node *head = build(n);
    head = insertionSort(head);
    print(head);
    return 0;
}