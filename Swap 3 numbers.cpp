#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	cout<<"Enter three numbers:";
	cin>>a>>b>>c;
	d=a;
	a=b;
	b=c;
	c=d;
	cout<<"Values after swapping number:"<<a<<"\t"<<b<<"\t"<<c;
	return 0;
}
