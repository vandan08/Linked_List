#include<iostream>
using namespace std;

class node{
	public:
		int data;
		node* next;
		
		node(int val){
			data=val;
			next=NULL;
		}
};

void inserth(node* &head,int da){
	//create a new node 
	node* temp = new node(da);
	
	//point the new node's next to head 
	temp->next=head;
	head=temp; //bcuz we had inserted the node at head so we have to point that node to head 
}

void insertt(node* &tail,int da){
	//create a new node 
	node* temp = new node(da);
	
	tail->next = temp;
	tail=tail->next; //point the last node with tail pointer so when we insert new node at tail it occurs 
}


void display(node* &head){
	node* temp = head;
	
	while(temp!=NULL){
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	cout<<endl;
}



int main(){
	node* node1=new node(10);
//	cout<<node1->data;

	//point head to new node named node1 
	node*head = node1;
	
	//point tails also 
	node* tail = node1;


	inserth(head,20);
	inserth(head,220);
	insertt(tail,900);
	display(head);
	
	return 0;
}
