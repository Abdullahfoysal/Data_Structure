#include <bits/stdc++.h>

using namespace std;

struct Node
{
	int value;
	Node *next;
	Node(int data){

	 value=data;
	 next=NULL;
	}
	
};
Node *root=NULL;

void insert(Node *cu,int data){ //at the bottom of linklist

	
	while(cu->next!=NULL){

		cu=cu->next;
	}
	cu->next=new Node(data);

	
}
void traverse(Node *cu){

	while(cu!=NULL){

		cout<<cu->value<<" ";
		cu=cu->next;
	}
}

void Delete(Node *cu,int value){

	if(cu->value==value){
		root=cu->next;

		delete cu;

		return;
	}

	while(cu->next!=NULL){

		if(cu->next->value==value){

			cu->next=cu->next->next;
			
			delete cu->next;//free from heap memory

			break;
		}
		else cu=cu->next;
	}
}

int main(int argc, char const *argv[])
{
	Node *cu=NULL,*nextNode=NULL;
	root=new Node(10);
	
	cu=root;

	for(int i=0;i<5;i++){
			int a;
			cin>>a;
		nextNode=new Node(a);
		cu->next=nextNode;
		cu=nextNode;
	}

	Delete(root,5);
	insert(root,55);
    traverse(root);

	
	return 0;
}