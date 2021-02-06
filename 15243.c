#include <stdio.h>
int main()
{

    int i=0,range=5,k=1,n=5;
    int bo=0;
    while(range!=0)
    {
        if(bo==1)
        {   i=n--;
            bo=0;
        }
        else
        {   i=k++;
            bo=1;

        }
        printf("%d",i);
        range--;
    }
}
