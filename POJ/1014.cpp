#include <iostream>
using namespace std;

int ok ;
int d[6] ;

void find ( int now , int x ) 
{
	if ( x < 0 )
		return  ;
	int s , i ,t = now / (x+1) ;
	s = t > d[x] ? d[x] : t ;
	if ( now - s * (x+1) != 0 )
		for ( i = s ; i >= 0 ; i -- ) {
			find ( now - i * (x+1) , x-1 ) ;
			if ( ok )
				return ;}
		else {
			ok = 1 ;
			return ;}
		return ;
}

int main ()
{
	int i ,sum ,t = 0 ;
	while ( 1 ) 
	{
		for ( i = 0,sum = 0 ; i < 6 ;i ++ ) {
			cin>>d[i];
			d[i] %= 60 ;  
			sum += d[i] * ( i+1 ) ; }
		if ( sum == 0 )
			break ;
		ok = 0 ;
		if ( sum % 2 ) { 
			cout<<"Collection #"<<++t<<":"<<endl;
			cout<<"Can't be divided."<<endl;
            cout<<endl; }
		else {
			find ( sum/2 , 5 ) ;
			if ( ok ) { 
				cout<<"Collection #"<<++t<<":"<<endl;
				cout<<"Can be divided."<<endl;
				cout<<endl;}
			else { 
				cout<<"Collection #"<<++t<<":"<<endl;
				cout<<"Can't be divided."<<endl;
				cout<<endl;}
		}
	}
	return 0 ;
}


