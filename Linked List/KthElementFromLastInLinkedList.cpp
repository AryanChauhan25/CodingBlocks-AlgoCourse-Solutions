#include<iostream>
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
		return insertAtHead(head,d);
	}
	node *temp = head;
	while(temp -> next != NULL) {
		temp = temp -> next;
	}
	temp -> next = new node(d);
}

node* build() {
	int d;
	cin>>d;
	node *head = NULL;
	while(d != -1) {
		insertAtTail(head,d);
		cin>>d;
	}
	return head;
}

int main() {
	node *head = build();
	node *fast = head, *slow = head;
	int k;
	cin>>k;
	while(k--) {
		fast = fast -> next;
	}
	while(fast != NULL) {
		slow = slow -> next;
		fast = fast -> next;
	}
	cout<<(slow -> data);
	return 0;
}