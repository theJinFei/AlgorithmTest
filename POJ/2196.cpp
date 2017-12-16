#include<iostream>
using namespace std;
int main()
{
	int i;
	for(i=2992;i<=9999;i++) {
		int a=i,b=i,c=i;
		int temp1=0,temp2=0,temp3=0;
		while(a>0){
			temp1+=a%10;
			a/=10;}
		while(b>0){
			temp2+=b%16;
			b/=16;}
		while(c>0){
			temp3+=c%12;
			c/=12;}
		if(temp1==temp2&&temp2==temp3)
			cout<<i<<endl;
	}
	return 0;
}

