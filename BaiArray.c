
#include <stdio.h>
#include <string.h>
#include <conio.h>

void main(int argc, cvoi)
{
    int i,n=0;
    int item;
    char *[10][12];
    char temp[12];
    clrscr();
    printf("Enter each string on a seprate line \n\n");
    do
    {
        printf("string %d:"n+1);
        scanf("%s",x[n]);

    }while(strcmp(x[n++],"END"));
    n=n-1;
    for(item=0;item<n-1;++i) 
    {
        for(i=item+1;i<n;++i)
        {
            if(strcmp(x[item],x[i])>0)
            {

                  strcpy(temp,x[item]);
                  strcpy(x[item],x[i]);
                  strcpy(x[i],temp);
            }
        }
    }
    //Hiển  thị thông tin
    printf("Recorded list of strings\n\n");
    for(i=0;i<n;++i)
    {
        printf("\n String %d is %s",i+1,x[i]);
    }
}