/*
	 Write a program to Swap to two numbers
*/
#include<iostream>
using namespace std;

int main(){
	int a,b;
	cin>>a>>b;

	cout<<"The initial value of a: "<<a<<'\n'<<"The initial value of b: "<<b<<"\n\n";
	
	//METHOD 1->Using another variable
	int temporary=a;
	a=b;
	b=temporary;

	cout<<"The final value of a: "<<a<<'\n'<<"The final value of b: "<<b<<'\n';
	
	/*
	//METHOD 2->Using Addition and Subtraction
	a=a+b;
	b=a-b;
	a=a-b;

	cout<<"The final value of a: "<<a<<'\n'<<"The final value of b: "<<b<<'\n';

	//METHOD 3->USING XOR Bitwise operator
	a^=b^=a^=b;

	cout<<"The final value of a: "<<a<<'\n'<<"The final value of b: "<<b<<'\n';
	*/
	return 0;
}
