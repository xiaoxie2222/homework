#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
////第一题
//int main()
//{
//    float r=0;
//    float h=0;
//    printf("请输入半径和高度（如2，3）：");
//    scanf("%f,%f",&r,&h);
//    float pi=3.14;
//    float C=2*pi*r;
//    float S=pi*r*r;
//    float SS=4*pi*r*r;
//    float V=(4/3)*pi*r*r*r;
//    float ZV=pi*r*r*h;
//    printf("圆的周长是：%.2f\n",C);
//    printf("圆的面积是：%.2f\n",S);
//    printf("圆球的表面积是：%.2f\n",SS);
//    printf("圆球的体积是：%.2f\n",V);
//    printf("圆柱的体积是：%.2f\n",ZV);
//
//    return 0;
//}
//
//
//
////第二题
//int main()
//{
//    char a;
//    printf("请输入一个字符:");
//    scanf("%c",&a);
//
//    if('0'<=a&&a<='9')
//    {
//        printf("您输入的是：数字");
//    }
//    else if(('a'<=a&&a<='z') || ('A'<=a&&a<='Z') )
//    {
//        printf("您输入的是:字母");
//    }
//    else
//    {
//         printf("您输入的是:其他字符");
//    }
//
//
//
//
//    return 0;
//}


//第三题
int main()
{
    int a=0;
    int b=0;
    int c=0;
    printf("请输入三个整数：");
    scanf("%d,%d,%d",&a,&b,&c);
    int max=a;
    if(max<b)
    {

        max=b;
    }
    if (max<c)
    {

        max=c;
    }
    printf("您输入的数字中最大的整数为：%d",max);


    return 0;
}



////第四题
//int main()
//{
//    printf("请输入一个不多于5位的正整数：");
//    int a,s1,s2,s3,s4,s5;
//    scanf("%d",&a);
//    s5=(a-a%10000)/10000;
//    s4=(a%10000-a%1000)/1000;
//    s3=(a%1000-a%100)/100;
//    s2=(a%100-a%10)/10;
//    s1=a%10;
//    if (s5!=0)
//    {
//       printf("您输入的数的位数是：5\n");
//       printf("第1个数是：%d\n",s5);
//       printf("第2个数是：%d\n",s4);
//       printf("第3个数是：%d\n",s3);
//       printf("第4个数是：%d\n",s2);
//       printf("第5个数是：%d\n",s1);
//       printf("逆序数是：%d%d%d%d%d",s1,s2,s3,s4,s5);
//    }
//    if (s5==0&&s4!=0){
//       printf("您输入的数的位数是：4\n");
//       printf("第1个数是：%d\n",s4);
//       printf("第2个数是：%d\n",s3);
//       printf("第3个数是：%d\n",s2);
//       printf("第4个数是：%d\n",s1);
//       printf("第5个数是：没有\n");
//       printf("逆序数是：%d%d%d%d",s1,s2,s3,s4);}
//    if (s5==0&&s4==0&&s3!=0)
//    {
//       printf("您输入的数的位数是：3\n",s3);
//       printf("第1个数是：%d\n",s3);
//       printf("第2个数是：%d\n",s2);
//       printf("第3个数是：%d\n",s1);
//       printf("第4个数是：没有\n");
//       printf("第5个数是：没有\n");
//       printf("逆序数是：%d%d%d",s1,s2,s3);
//    }
//    if (s5==0&&s4==0&&s3==0&&s2!=0){
//       printf("您输入的数的位数是：2\n");
//       printf("第1个数是：%d\n",s2);
//       printf("第2个数是：%d\n",s1);
//       printf("第3个数是：没有\n");
//       printf("第4个数是：没有\n");
//       printf("第5个数是：没有\n");
//       printf("逆序数是：%d%d",s1,s2);}
//    if (s5==0&&s4==0&&s3==0&&s2==0&&s1!=0){
//       printf("您输入的数的位数是：1\n");
//       printf("第1个数是：%d\n",s1);
//       printf("第2个数是：没有\n");
//       printf("第3个数是：没有\n");
//       printf("第4个数是：没有\n");
//       printf("第5个数是：没有\n");
//       printf("逆序数是：%d",s1);}
//    return 0;
//}
//


////第五题
//int main()
//{
//    int a=0;
//    printf("请输入以一个成绩：\n");
//    scanf("%d",&a);
//    printf("他的成绩等级是：");
//    if(a>=90)
//    {
//        printf("A");
//    }
//    if(a<=89&a>=80)
//    {
//        printf("B");
//    }
//    if(a<=79&&a>=70)
//    {
//        printf("C");
//    }
//    if(a<=69&a>60)
//    {
//        printf("D");
//    }
//    if(a<=60)
//    {
//        printf("E");
//    }
//
//
//    return 0;
//}
//








