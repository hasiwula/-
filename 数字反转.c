#include<stdio.h>
void main()
{
    int num,ret=0;
    printf("������һ������:\n");
    scanf("%d",&num);
    if(num==0)
        printf("0");

    else
          while(num!=0)
        {
            ret=ret*10+num%10;
            num/=10;
        }

        printf("��ת��Ľ��Ϊ%d",ret);

}
