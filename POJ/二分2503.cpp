#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct dict
{
    char english[11];
    char foreign[11];
}a[100001];

int mycmp(const void * aa,const void *b)
{
    return strcmp(((dict*)aa)->foreign,((dict*)b)->foreign);
}

int cmp(const void* aa,const void* b)
{
    return strcmp((char*)aa,((dict*)b)->foreign);
}

int main()
{
    char line[30],query[11];
    int i=0,j,k;
    while(gets(line))
    {
        if(!strcmp(line,"")) break;
        k=strlen(line);
        for(j=0;j<k;j++)
        {
            if(line[j]==' ')
            {
                line[j]='\0';
                break;
            }
        }
        strcpy(a[++i].english,line);
        strcpy(a[i].foreign,line+j+1);
    }

    qsort(a+1,i,sizeof(dict),mycmp);

    while(gets(query))
    {
        dict* f=(dict *)bsearch(query,a+1,i,sizeof(dict),cmp);
        if(f) printf("%s\n",f->english);
        else puts("eh");
    }
	return 0;
}

