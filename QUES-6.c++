/*
Print this pattern using loops
For n=5
	    *
	   * *
	  * * *
	 * * * *
	* * * * *
*/

#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	for(int row_count=1;row_count<=n;row_count++){
		for(int spaces=1;spaces<=n-row_count;spaces++){
			cout<<" ";
		}
		for(int stars=1;stars<=row_count;stars++){
			cout<<"* ";
		}
		cout<<'\n';
	}
	return 0;
}
