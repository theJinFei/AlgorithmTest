#include <iostream>
#include <string>
using namespace std;

int main()
{
	char ina[101],inb[101];
	int n;
	scanf("%d",&n);
	while(n--) {
		memset(ina,0,sizeof(ina));
		memset(inb,0,sizeof(inb));
		scanf("%s %s",&ina,&inb);
		int lena=strlen(ina);
		int lenb=strlen(inb);
		int k; bool find=false;
		if(find==false) {
			k=0;
			for(int i=0;i<lena&&k<lenb;i++) {
				if(ina[i]==inb[k]) k++;
			}
			if(k==lenb) find=true;
		}
		if(find==false) {
			k=lenb-1;
			for(int j=0;j<lena&&k<lenb;j++) {
				if(ina[j]==inb[k]) k--;
			}
			if(k==-1) find=true;
		}
		if(find==true)
			cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}



