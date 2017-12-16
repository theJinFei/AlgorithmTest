#include<stdio.h>
#include<string>
#include<map>
#include<iostream> 

using namespace std; 

int main()
{
    map<string,string> m;
    map<string,string>::iterator it;
    char s[30],s1[12],s2[12];
    while(gets(s) && s[0])
    {
        sscanf(s,"%s%s",s1,s2);
        string a(s1),b(s2);
        m.insert(pair<string,string>(b,a));
    }
    while(gets(s) && s[0])
    {
        string c(s);        
        it=m.find(c);
        if(it!=m.end())
            cout<<it->second<<endl;
        else
            cout<<"eh"<<endl;
    }    
    return 0;
}
