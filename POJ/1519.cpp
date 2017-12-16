#include<iostream>

using namespace std;

char *ch=new char[30];

long int input()
{
     long int i,sum=0;
     scanf("%s",ch);
     if(ch[0]=='0') return 0;
     for(i=0;ch[i]!=0;i++)
         sum+=ch[i]-'0';
     return sum;
}

int main()
{
    long n,root;
    n=input();
    while(n!=0) {
        root=32767;     
        while(root>=10){
			root=0;
			while(n!=0){
				root+=n%10;
                n=n/10;}
			n=root;}
       printf("%ld\n",root);
        n=input();
    }
	return 0;
}