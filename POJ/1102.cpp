#include <stdio.h>
#include <string.h>
int code[5][30]={{0,1,0,0,0,0,0,1,0,0,1,0,0,0,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0},
         {1,0,1,0,0,1,0,0,1,0,0,1,1,0,1,1,0,0,1,0,0,0,0,1,1,0,1,1,0,1},
            {0,0,0,0,0,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,0,0,0,1,0,0,1,0},
            {1,0,1,0,0,1,1,0,0,0,0,1,0,0,1,0,0,1,1,0,1,0,0,1,1,0,1,0,0,1},
            {0,1,0,0,0,0,0,1,0,0,1,0,0,0,0,0,1,0,0,1,0,0,0,0,0,1,0,0,1,0}};
int main()
{
	int i,j,m,n,k,k1,posS;
	char s[9];
	while(1){
		scanf("%d",&n);
		scanf("%s",&s);
		if(n==0&&strcmp(s,"0")==0)break;
		for(i=0; i<5; i++) {
			if(!(i%2)) {
				for(posS=0; s[posS]!='\0'; posS++) {
                   for(m=0,j=(int)(s[posS]-'0')*3; m<3; m++,j++) { 
                       if((j%3==0||(j+1)%3==0)&&(i%2==0)) printf(" ");
                       else {
                           for(k=0; k<n; k++) {
                               if(code[i][j]) printf("-");
                               else printf(" ");
                             }
                         }
                   }
                     printf(" ");
               }
               printf("\n");
           }
           else {
                for(k=0; k<n; k++){
                    for(posS=0; s[posS]!='\0'; posS++){
                     for(m=0,j=(int)(s[posS]-'0')*3; m<3; m++,j++) { 
                         if(j%3==0||(j+1)%3==0){
                               if(code[i][j]) printf("|");
                              else printf(" ");
                          }
                          else 
                            for(k1=0; k1<n; k1++) printf(" ");
                    }
                         printf(" ");     
                 }
                    printf("\n");
                }          
             }         
      }
      printf("\n");     
     }     
     
   return 0;
}