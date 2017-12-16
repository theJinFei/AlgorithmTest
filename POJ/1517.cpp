#include<iostream>

using namespace std;

int jie(int n)
{	int sum=1,i;
	for(i=1;i<=n;i++)
		sum*=i;
	return sum;
}

int main()
{
	int n=9,i=0; 
	double sum=1;
	cout<<"n e"<<endl;
	cout<<"- -----------"<<endl;
	cout<<"0 1"<<endl;
	cout<<"1 2"<<endl;
	cout<<"2 2.5"<<endl;
	cout<<"3 2.666666667"<<endl;
	cout<<"4 2.708333333"<<endl;
 	for(i=1;i<=4;i++){
		sum+=1.0/jie(i);}
	for(i=5;i<=n;i++){
		sum+=1.0/jie(i);
		printf("%d %.9lf\n",i,sum);	}
	return 0 ;
}



