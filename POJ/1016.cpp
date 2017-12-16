#include <stdio.h>
#include <string.h>
int make_inventory(char * ori, char * result)
{
     int count[10] = {0};
     for (char *p = ori; *p != '\0'; ++p)    
        count[*p - '0']++;int len = 0;
        for (int i = 0; i < 10; ++i)
        {    if (count[i])
             {     if (count[i] > 9)
                   {      result[len++] = count[i] / 10 + '0';      
                          result[len++] = count[i] % 10 + '0';     
                   }     
                   else
                   {      result[len] = count[i] + '0';     
                           ++len;    
                   }    
                   result[len++] = i + '0';   
             }
        }
        result[len] = '\0';
        return len;
}
int equal(char *a, int la, char *b, int lb)
{
         if (la == lb && strcmp(a, b) == 0)    
         return 1;
         return 0;
}
int main()
{
    char number[16][81];
    int len[16];
    while (scanf("%s", number[0]), strcmp(number[0], "-1") != 0)
    {    
        len[0] = strlen(number[0]);    
        int i, j;    
        for (i = 1; i < 16; ++i)
        {     len[i] = make_inventory(number[i-1], number[i]); 
              for (j = 0; j < i; ++j)
              {      
                  if (equal(number[i], len[i], number[j], len[j]))    
					  break;     
			  }     
			  if (j != i)      break;    
		}    
		if (i == 1)
        {     
            printf("%s is self-inventorying\n", number[0]);   
        }    
        else if (i < 16)
        {     
            if (j + 1 != i)
            {      printf("%s enters an inventory loop of length %d\n", number[0], i - j);   
            }     
            else
            {      
                printf("%s is self-inventorying after %d steps\n", number[0], i - 1);     
            }   
        }    
        else
        {     
            printf("%s can not be classified after 15 iterations\n", number[0]);     
        }
    }
    return 0;
}

