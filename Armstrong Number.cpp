#include<iostream>
using namespace std;
int main()
{
	int n,i,num,sum,r;
	cout<<"Enter the number upto which armstong number is required:";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		num=i;
		sum=0;
		while(num!=0)
		{
			r=num%10;
			sum=sum+(r*r*r);
			num=num/10;	
		}
		if(sum==i)
		{
			cout<<i<<" is an Armstrong Number."<<endl;
		}
		if(sum!=i)
		{
			cout<<i<<" is not an Armstrong Number."<<endl;
		}
	}
	return 0;
}
