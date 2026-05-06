#include<iostream>
using namespace std;
int main()
{
	long int num,c,fact;
	c=1;
	fact=1;
	cout<<"Enter a number:";
	cin>>num;
	while(c<=num)
	{
		fact=fact*c;
		c++;
	}
	cout<<"Factorial of given number:"<<fact;
	return 0;
}
