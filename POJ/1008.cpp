#include <stdio.h>
#include <string.h>

const char haabmounth[19][10]={"pop","no","zip","zotz","tzec","xul","yoxkin","mol",
"chen","yax","zac","ceh","mac","kankin","muan","pax","koyab","cumhu","uayet"};

const char hollyday[20][10]={"imix","ik","akbal","kan","chicchan","cimi","manik","lamat","muluk",
"ok","chuen","eb","ben","ix","mem","cib","caban","eznab","canac","ahau"};

int main()
{
	int n=0,mounths,years,tem_d,year,day,days,k,total;
	char mounth[10];
	scanf("%d",&n);
	printf("%d\n",n);
	while(n--){
		scanf("%d. %s %d",&day,&mounth,&year);
		total=0;
		total=year*365;
		for(k=0;k<19;k++){
		if(strcmp(mounth,haabmounth[k])==0){
			total+=day+1;
			break;}
		else total+=20;
	}
	if(k==19) total+=day+1;
	tem_d=total%260;
	if(!tem_d){
		years=total/260-1;
		mounths=13;
		days=19;}
	else {
		years=total/260;
		mounths=tem_d%13;
		days=(tem_d+19)%20;
		if(!mounths)mounths=13;}
	printf("%d %s %d\n",mounths,hollyday[days],years);
	}
	return 0;
}