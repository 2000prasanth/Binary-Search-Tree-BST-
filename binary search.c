#include<stdio.h>
#include<stdlib.h>


int main()
{
    int a[7]={0,2,3,4,5,6,7};
    int l,h,m;
    l=0,h=6;
    int key=7;
    void search()
{
    m=(l+h)/2;
    if(a[m]==key)
    {
        printf("key @ %d",m);
    }
    else if(key>a[m])
    {
        l=m+1;
        search();
    }
    else if(key<a[m])
    {
        h=m-1;
        search();
    }
}
    search();
    return 0;
}

