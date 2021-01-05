#include<iostream>
using namespace std;

int main()
{

	int n;
	cin>>n;

	if(n%2==0 and n%3==0)
	{  
		cout<<"no is didvisible by both 2 and 3"<<endl;

	}
	else if(n%2==0)
	{
		cout<<"no is divisible by 2"<<endl;


	}
	else if(n%3==0)
	{
		cout<<"no is divisible by3"<<endl;
	}
	else
	{
		cout<<"the no is niether divisible by 2 nor by 3";
	}


}