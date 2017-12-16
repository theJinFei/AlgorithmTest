#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    int N, num = 0, i, j;
    cin >> N;
    int a[N][1005];
    int b[N];
    for(i = 0; i < N; i++)
    {
        cin >> num;
        b[i] = num;
        getchar();
        for(j = 0; j < num; j++)
        {
            cin >> a[i][j];
        }
    }



    int m = 0;
    return 0;
}
