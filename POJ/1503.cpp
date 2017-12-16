#include<stdio.h>
#include<string.h>

int i, j, in, k, m, a;
int A[110];
char B[110];

int main()
{
	while(1)
	{
		memset(A,0,sizeof(A));
		while( scanf("%s",B) != EOF )
		{
			if( strlen(B) == 1 && B[0] == '0' )
				break;
			in = 109;
			for( j = strlen(B) - 1; j >= 0; j--)
			{
				A[in] += B[j] - '0';
				if(A[in] > 9)
				{
					A[in] = A[in] - 10;
					A[in - 1] ++;
				}
				in--;
			}
		}
		k = 0;
		for( m = 0; m < 110;m++)
			if(A[m] != 0)
			{
				k = m;
				break;
			}
			for( a = k;a < 110 ; a++)
				printf("%d",A[a]);
			printf("\n");
			return 0;
	}
}
