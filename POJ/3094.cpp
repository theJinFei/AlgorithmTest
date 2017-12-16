#include<iostream>
using namespace std;
int main()
{
	char letter[1000] ;
	while(cin.getline(letter,999) ) {   
		int sum = 0;
		if( letter[0] == '#') break;  
		int length = strlen( letter );
		for( int i = 0; i < length ; i++)  {
			if( letter[i] == ' ') {
				continue;
			}
			sum += (i+1)*(letter[i] - 'A' + 1);
		}
		memset(letter,0,sizeof(letter));
		cout<< sum << endl;
	}
	return 0;
}
