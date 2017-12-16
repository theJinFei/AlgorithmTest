#include<iostream> 
using namespace std;
long R[16],G[16],B[16]; 
long dis(long r1,long g1,long b1,long r2,long g2,long b2) 
{ 
    return (r1-r2)*(r1-r2)+(g1-g2)*(g1-g2)+(b1-b2)*(b1-b2); 
} 
int main() 
{ 
    long i; 
    for(i=0;i<16;i++) 
        cin>>R[i]>>G[i]>>B[i]; 
    long r,g,b; 
    cin>>r>>g>>b; 
    long minr,ming,minb,min; 
    while(r!=-1) 
    { 
        min=100000000; 
        for(i=0;i<16;i++) 
            if(dis(r,g,b,R[i],G[i],B[i])<min) 
            { 
                min=dis(r,g,b,R[i],G[i],B[i]); 
                minr=R[i]; 
                ming=G[i]; 
                minb=B[i]; 
            } 
        cout<<'('<<r<<','<<g<<','<<b<<") maps to ("<<minr<<','<<ming<<','<<minb<<')'<<endl; 
        cin>>r>>g>>b; 
    } 
	return 0;
} 


