#include<iostream>

#include<string.h>

using namespace std;

int main()
{
	char m;
	bool lr=false;
	while(scanf("%c",&m)!=EOF){
			if(m=='"'){
				if(lr==false){
					cout<<"``";
					lr=true;
				    continue;}
				else{
					cout<<"''";
					lr=false;
				    continue;}
			}
			else cout<<m;
	}
	return 0;
}
