/*
	Write a program to find the largest number among three numbers entered by the user.
*/

#include<iostream>
using namespace std;

int main(){
	int a,b,c;
	cin>>a>>b>>c;
	if (a>=b && a>=c){
		cout<<"The Largest of the Three Numbers is: "<<a<<'\n';
	}else if(b>=c){
		cout<<"The Largest of the Three Numbers is: "<<b<<'\n';
	}else{
		cout<<"The Largest of the Three Numbers is: "<<c<<'\n';
	}
	return 0;
}
