#include<iostream>
using namespace std;

int main()
{
	int c,i;

	int f=0;
	for(i=0;i<10;i++)
	{
		c=(5*(f-32))/9;
		cout<< f<<"    "<<c<<endl;
		f +=20;
	}
}