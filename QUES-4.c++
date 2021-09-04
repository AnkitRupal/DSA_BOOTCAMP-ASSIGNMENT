/*
	Write a program to display Fibonacci Series upto nth term. (Using loops)
	
	NOTICE: I am taking 0 as the zeroth fibonacci but I am printing till n terms only.
			Thus, printing from 0th till (n-1)th fibonacci.
			If you want, then just change --n to n-- to print till nth fibonacci :)
*/

#include<iostream>
using namespace std;

void fibonacci(int n){
	cout<<"The Fibonacci series upto "<<n<<" terms are as follows:\n";
	if (n>=0){
		cout<<"0\n";
	}
	if (n>=1){
		cout<<"1\n";
	}
	long long int a=0,b=1;
	while(--n){
		b=b+a;
		a=b-a;
		cout<<b<<"\n";
	}
}

int main(){
	int n;
	cin>>n;
	fibonacci(n);
	return 0;
}

// 0 1 1 2 3 5 8 13 21 34 55 89 144
// 0 1 2 3 4 5 6  7  8  9 10 11 12 
