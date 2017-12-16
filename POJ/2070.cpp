#include <iostream>
using namespace std;
int main()
{
	double speed,weight,strength;
	while(1)
	{
		bool out=false;
		cin>>speed>>weight>>strength;
		if((speed==0)&&(weight==0)&&(strength==0)) break;
		if((speed<=4.5)&&(weight>=150)&&(strength>=200))
		{
			cout<<"Wide Receiver ";
			out=true;
		}
		if((speed<=6.0)&&(weight>=300)&&(strength>=500))
		{
			cout<<"Lineman ";
			out=true;
		}
		if((speed<=5.0)&&(weight>=200)&&(strength>=300))
		{
			cout<<"Quarterback";
			out=true;
		}
		if(!out)cout<<"No positions";
		cout<<endl;
	}
	cout<<endl;
	return 0;
}

