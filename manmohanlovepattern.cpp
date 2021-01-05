#include<iostream>
using namespace std;

int main()
{
    int n,row,col;
    row=1;
    cin>>n;
    while(row<=n)
    {   col=1;
    	
    	if(row%2==0)
    	{
    		cout<<1;
    		while(col<=(row-2)) 
    		{
    			cout<<0;
    			col++;
    		}
    		cout<<1<<endl;
    	}


    	else
    	{
    		while(col<=row)
    		{
    			cout<<1;
    			col++;
    		}
    		cout<<endl;
    	}
       row++;

    	
    }
    
}

