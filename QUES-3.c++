/*
	Write a program to check whether a year entered by a user is Leap year or not.
*/

#include<iostream>
using namespace std;

int main(){
	int year;
	cin>>year;
	/*
	Using the WIKIPEDIA ALGORITHM stated here:
	https://en.wikipedia.org/wiki/Leap_year#Algorithm
	*/
	if(year%4 != 0){
		cout<<"The year "<<year<<" is a Not a Leap Year\n";
	}else if(year%100 != 0){
		cout<<"The year "<<year<<" is a Leap Year\n";
	}else if(year%400 != 0){
		cout<<"The year "<<year<<" is a Not a Leap Year\n";
	}else{
		cout<<"The year "<<year<<" is a Leap Year\n";
	}
	return 0;
}