/*
	Write a program that takes n elements from the user and displays the second largest element of an array.
	
	NOTICE: In case of identical elements, I am taking the actual second largest.
			For Eg: In 1 2 3 4 4 	I output 3
			But in case of all numbers equal , the second largest does not exists.
			So I output "Second Largest does NOT EXISTS! :("
*/

#include<iostream>
#include<climits>
using namespace std;

void input_array(int arr[],int n){
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	input_array(arr,n);
	int maximum=INT_MIN,s_maximum=INT_MIN;
	for(int i=0;i<n;i++){
		if(maximum<arr[i]){
			s_maximum=maximum;
			maximum=arr[i];
		}else if(s_maximum<arr[i] && arr[i]<maximum){
			s_maximum=arr[i];
		}
	}
	if(s_maximum==INT_MIN){
	cout<<"Second Largest does NOT EXISTS! :(\n";
	}
	else{
		cout<<"Second Largest is: "<<s_maximum<<'\n';
	}
	return 0;
}
