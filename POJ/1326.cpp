#include <iostream>
using namespace std;
int main()
{
    char oriCity[ 20 ],tarCity[ 20 ],rank;
    int mile,sum = 0;
    while( strcmp( oriCity, "#" ) != 0 )
	{
        cin >> oriCity;
        if( strcmp( oriCity, "0" ) == 0 )
		{
            cout << sum << endl;
            sum = 0;
            continue;
        }
        else if( strcmp( oriCity, "#" ) == 0 )
            break;
        else
            cin >> tarCity >> mile >> rank;
        switch( rank )
		{
        case 'F':
            sum += 2 * mile;
            break;
        case 'B':
            sum += static_cast < int > ( 1.5 * mile + 0.5 ); 
            break;
        case 'Y':
            if( mile >= 1 && mile <= 500 )
                sum += 500;
            else if( mile > 500 )
                sum += mile;
            break;
        default:
            break;
        }
    }    

    return 0;
}