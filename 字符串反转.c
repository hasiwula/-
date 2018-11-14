#include<stdio.h>
void main()
{
    char str[]="";
    printf("请输入字符串:\n");
    gets(str);
    printf("反转后的结果为%s",strrev(str));
}
