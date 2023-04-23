#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"Enter 2 values are :";
	cin>>a>>b;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"Swap numbers are :"<<a<<endl<<b;
	return 0;
}
