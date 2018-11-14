#include<stdio.h>
main()
{
    int i=0,j,k,n;
    char str[100]="",ch[100]="";
    printf("ÇëÊäÈë×Ö·û´®:\n");
    gets(str);
    while(str[i]!='\0')
                i++;
                for(j=i-1;str[j]==' ';j--)
                            str[j]='\0';
                for(k=0;str[k]==' ';)
                            k++;
                for(n=0;k!=j+1;n++,k++)
                    ch[n]=str[k];
                puts(ch);





}
