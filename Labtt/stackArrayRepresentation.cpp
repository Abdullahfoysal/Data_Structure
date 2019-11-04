#include <bits/stdc++.h>
using namespace std;
#define mx 1000
class Stack
{
public:
	int int_arr[mx];
	/*char char_arr[mx];
	bool bool_arr[mx];
	string str_arr[mx];
*/
	Stack(string type){

		for(int i=0;i<mx;i++)int_arr[i]=1e9;

		
	}
	void push(int data){
		int index=size();
		int_arr[index]=data;

	}
	void pop(){
		int index=size()-1;
		if(index<0){cout<<"empty Queue ";return;}
		int_arr[index]=1e9;
	}
	int top(){
		int index=size()-1;
		if(index<0){cout<<"empty Queue ";return -1;}

		return int_arr[index];
	}
	int size(){
		int length=0;
		for(int i=0;i<mx;i++){
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
	Stack s("int");
	s.push(41);
	s.push(40);
	s.push(42);
	s.pop();
	s.pop();
	s.push(234);
	s.pop();
	cout<<s.top()<<endl;
	cout<<s.size()<<endl;
	s.pop();
	cout<<s.empty()<<endl;
	
	return 0;
}