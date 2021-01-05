#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	while(n>0)
	{


	  int bin,rem,pow;
		int ans;
		pow=1;
		ans=0;
		cin>>bin;
		while(bin>0)
		{
			rem=bin%10;
			ans=ans+rem*pow;
			pow=pow*2;
			bin=bin/10;


		}
	cout<<ans<<endl;
	n--;
	}


}