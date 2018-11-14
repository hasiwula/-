#include<stdio.h>
void main()
{
    int num,ret=0;
    printf("请输入一个整数:\n");
    scanf("%d",&num);
    if(num==0)
        printf("0");

    else
          while(num!=0)
        {
            ret=ret*10+num%10;
            num/=10;
        }

        printf("反转后的结果为%d",ret);

}
