#include<iostream>
using namespace std;
int main(){
	int a[10],i,sum=0;
	cout<<"Enter 10 numbers are :";
	for(i=1;i<10;i++)
	cin>>a[i];
	for(i=1;i<10;i++)
	sum=sum+a[i];
	cout<<"Addition is : "<<sum;
	return 0;
}
