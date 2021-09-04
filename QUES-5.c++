/*
	 Write a program to check whether a number is Prime or Not.
*/

#include<iostream>
using namespace std;

bool prime(int n){
	if(n==1){
		return false;
	}
	if(n==2){
		return true;
	}
	for (int i=2;i*i<=n;i++){
		if(n%i == 0){
			return false;
		}
	}
	return true;
}

int main(){
	int  n;
	cin>>n;
	//Time Complexity is O(sqrt(n)) - Highly Efficient One :)
	if(prime(n)){	cout<<"The number "<<n<<" is prime! :)";}
	else{	cout<<"The number "<<n<<" is not prime :(";}
	return 0;
}
