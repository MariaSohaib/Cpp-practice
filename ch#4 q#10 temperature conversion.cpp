#include<iostream>
using namespace std;
int main()
{	float temp,temp2;
	int choice;
	cout<<"1.Fahrenheit to Centigrade."<<endl;
	cout<<"2.Centigrade to Fahrenheit."<<endl;
	cout<<"Enter your choice:";
	cin>>choice;
	switch(choice)
	{
		case 1:
			cout<<"Enter temperature in Fahrenheit:";
			cin>>temp;
			temp2=(temp-32)*5/9;
			cout<<temp<<" Fahrenheit="<<temp2<<" Centigrade";
			break;
		case 2:
			cout<<"Enter temperature in Centigrade:";
			cin>>temp;
			temp2=(9/5)*temp+32;
			cout<<temp<<" Centigrade="<<temp2<<" Fahrenheit";
			break;
		default:
			cout<<"INVALID CHOICE";
	}
	return 0;
}