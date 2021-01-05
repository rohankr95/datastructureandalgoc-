#include<iostream>
#include<climits>
using namespace std;

int main()
{ 
	int n;
	cin>>n;

	int min=INT_MAX;
	int max=INT_MIN;

	for(int i=0;i<n;i++)
	{
		int no;

		cin>>no;

		if(no>max)
		{
			max=no;

		}

		if(no<min)
		{

			min=no;
		}


	}
	cout<<"max no is "<<max<<endl;
	cout<<"min no is "<<min<<endl;
}
