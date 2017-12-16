#include"iostream"
using namespace std;
int main()
{
	int p,e,i,d;
	int count=1;
	int result;
	while(true){
		cin>>p>>e>>i>>d;
		if(p==-1&&e==-1&&i==-1&&d==-1) break;
		else result = (21252  + 5544 * p + 14421 * e + 1288 * i - d) % 21252;
		if(!result) result=21252;
		cout<<"Case "<<count<<": the next triple peak occurs in "<<result<<" days."<<endl;
		count++;}
	return 0;
}
