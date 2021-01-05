#include<iostream>
using namespace std;

int main()
{

	int n,sum,i;
	sum=0;
	cin>>n;
	while(n>0)
	{
		i=n%10;
		sum += i;
		n = n/10;
	}
	cout<<sum<<endl;


}