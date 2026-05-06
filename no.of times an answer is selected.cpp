#include<iostream>
using namespace std;
int main()
{
	int app=0,man=0,ban=0,str=0;
	for(int i=1;i<=20;i++)
	{
		char ch;
		cout<<"What do you like the most?"<<endl;
		cout<<"A) Apples\t\tB)Mangoes"<<endl;
		cout<<"C) Banananas\t\tD)Strawberry"<<endl;
		cout<<"Your Answer:";
		cin>>ch;
		switch(ch)
		{
			case 'A':
				app++;
				break;
			case 'B':
				man++;
				break;
			case 'C':
				ban++;
				break;
			case 'D':
				str++;
				break;
			default:
				cout<<"ERROR!";
		}
	}
		cout<<"Option A was selected "<<app<<" times."<<endl;
		cout<<"Option B was selected "<<man<<" times."<<endl;
		cout<<"Option C was selected "<<ban<<" times."<<endl;
		cout<<"Option D was selected "<<str<<" times."<<endl;
	return 0;
}
