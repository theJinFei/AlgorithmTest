#include<iostream>
#include<string>
using namespace std;
int main()
{
	int cf;
	string s1, s;
	int high_f = 11;
	int low_f = 0;
	while( scanf("%d", &cf) != EOF && cf ) {
		if( cf < 0 || cf > 10 ) break;
		cin >> s1 >> s;
		if( s == "high" && high_f > cf )
			high_f = cf;
		if( s == "low" && low_f < cf )
			low_f = cf;
		if( s == "on" )
			if( high_f <= cf || low_f >= cf || high_f < low_f ) {
				printf("Stan is dishonest\n");
				high_f = 11; low_f = 0;
			}
			else {
				printf("Stan may be honest\n");
				high_f = 11; low_f = 0;
			}
	}
	return 0;
}






