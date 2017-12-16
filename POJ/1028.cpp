#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char temp[8],stack[255][255]={"http://www.acm.org/"};
    int k=0,n;
    while(cin>>temp)
    {
        if(temp[0]=='Q')
            break;
        else if(temp[0]=='V')
        {   k++;
            cin>>stack[k];
            cout<<stack[k]<<endl;
            n=k;}
        else if(temp[0]=='B')
        {   k--;
            if(k<0)
            { cout<<"Ignored\n";
              k=0;}
            else
                cout<<stack[k]<<endl;}
        else
        { k++;
          if(k>n)
            {cout<<"Ignored\n";
             k=n;}
            else
                cout<<stack[k]<<endl;}
    }
    return 0;
}