#include<bits/stdc++.h>

using namespace std;
#define mx 1000

class Queue
{

public:
	int int_arr[mx];
	/*char char_arr[mx];
	bool bool_arr[mx];
	string str_arr[mx];
*/
	Queue(string type){
		for(int i=0;i<mx;i++)int_arr[i]=1e9;
	}
	
	void push(int data){

		int index=size();

		int_arr[index]=data;
	}

	int front(){

		int index=0;
		if(index==-1){cout<<"empty Queue ";return -1;}
		return int_arr[index];
	}

	void pop(){

		int index=0;
		if(index==-1){cout<<"empty Queue ";return;}

		for(int i=0;i+1<mx;i++){
			int_arr[i]=int_arr[i+1];
		}
		int_arr[mx-1]=1e9;
	}
	int size(){
		int length=0;

		for(int i=0;i<mx ;i++){

			if(int_arr[i]!=1e9)
			length+=1;
			else return length;
		}
		return length;
	}
	bool empty(){
		return size();

	}

private:

	
	

	
};

int main(int argc, char const *argv[])
{
	Queue q("int");//Array representation implement for integer only
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.pop();
	cout<<q.front()<<endl;
	cout<<q.size()<<endl;
	cout<<q.empty()<<endl;

	
	return 0;
}