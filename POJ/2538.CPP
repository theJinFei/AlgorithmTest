#include <stdio.h>
#include <ctype.h> 
int main()
{
    char map_letters[] = "-VXSWDFGUHJKNBIO-EARYCQZT-", map_nums[] = "9`12345678", ch; 
    while (EOF != (ch = getchar())) {
        if (isalnum(ch))  {
            if (isalpha(ch))
                printf("%c", map_letters[ch - 'A']);
            else
                printf("%c", map_nums[ch - '0']);
        }
        else {
            switch (ch)  {
            case '-': ch = '0'; break;
            case '=': ch = '-'; break;
            case '[': ch = 'P'; break;
            case ']': ch = '['; break;
            case ';': ch = 'L'; break;
            case '\'': ch = ';'; break;
            case ',': ch = 'M'; break;
            case '.': ch = ','; break;
            case '/': ch = '.'; break;
            }
            printf("%c", ch);
        }
    }
	return 0;
}