#include<iostream>
using namespace std;
int main()
{
	float sum=0;
	for(float i=1;i<=99;i++)
	{
		sum=sum+i/(i+1);
	}
	cout<<"Sum:"<<sum;
	return 0;
}
