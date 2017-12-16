#include<iostream>

#include <string.h>

using namespace std;

char key[27],str[100];
int i;

int main() {
	gets(key);
	gets(str);
	for (i=0;i<strlen(str);i++) 
		if (str[i]==' ') cout<<" ";
		else if (str[i]>='a'&&str[i]<='z')cout<<key[str[i]-'a'];
		else cout<<char(int(key[char(int(str[i])+32)-'a'])-32);
	cout<<endl;
	return 0;
}

