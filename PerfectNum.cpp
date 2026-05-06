#include<iostream>
using namespace std;
int main()
{
	int n,num,sum,i;
	num=1;
	cout<<"Enter Any number upto which Perfect number is required:";
	cin>>n;
	while(num<=n)
	{
		sum=0;
		for(i=1;i<num;i++)
		{
			if(num%i==0)
			{
				sum=sum+i;
			}
		}
			if(sum==num)
			{
				cout<<num<<" is a perfect number."<<endl;
			}
			else
			{
				cout<<num<<" is not a perfect number."<<endl;
			}
	num++;
	}
	return 0;
}
