#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
////��һ��
//int main()
//{
//    float r=0;
//    float h=0;
//    printf("������뾶�͸߶ȣ���2��3����");
//    scanf("%f,%f",&r,&h);
//    float pi=3.14;
//    float C=2*pi*r;
//    float S=pi*r*r;
//    float SS=4*pi*r*r;
//    float V=(4/3)*pi*r*r*r;
//    float ZV=pi*r*r*h;
//    printf("Բ���ܳ��ǣ�%.2f\n",C);
//    printf("Բ������ǣ�%.2f\n",S);
//    printf("Բ��ı�����ǣ�%.2f\n",SS);
//    printf("Բ�������ǣ�%.2f\n",V);
//    printf("Բ��������ǣ�%.2f\n",ZV);
//
//    return 0;
//}
//
//
//
////�ڶ���
//int main()
//{
//    char a;
//    printf("������һ���ַ�:");
//    scanf("%c",&a);
//
//    if('0'<=a&&a<='9')
//    {
//        printf("��������ǣ�����");
//    }
//    else if(('a'<=a&&a<='z') || ('A'<=a&&a<='Z') )
//    {
//        printf("���������:��ĸ");
//    }
//    else
//    {
//         printf("���������:�����ַ�");
//    }
//
//
//
//
//    return 0;
//}


//������
int main()
{
    int a=0;
    int b=0;
    int c=0;
    printf("����������������");
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
    printf("���������������������Ϊ��%d",max);


    return 0;
}



////������
//int main()
//{
//    printf("������һ��������5λ����������");
//    int a,s1,s2,s3,s4,s5;
//    scanf("%d",&a);
//    s5=(a-a%10000)/10000;
//    s4=(a%10000-a%1000)/1000;
//    s3=(a%1000-a%100)/100;
//    s2=(a%100-a%10)/10;
//    s1=a%10;
//    if (s5!=0)
//    {
//       printf("�����������λ���ǣ�5\n");
//       printf("��1�����ǣ�%d\n",s5);
//       printf("��2�����ǣ�%d\n",s4);
//       printf("��3�����ǣ�%d\n",s3);
//       printf("��4�����ǣ�%d\n",s2);
//       printf("��5�����ǣ�%d\n",s1);
//       printf("�������ǣ�%d%d%d%d%d",s1,s2,s3,s4,s5);
//    }
//    if (s5==0&&s4!=0){
//       printf("�����������λ���ǣ�4\n");
//       printf("��1�����ǣ�%d\n",s4);
//       printf("��2�����ǣ�%d\n",s3);
//       printf("��3�����ǣ�%d\n",s2);
//       printf("��4�����ǣ�%d\n",s1);
//       printf("��5�����ǣ�û��\n");
//       printf("�������ǣ�%d%d%d%d",s1,s2,s3,s4);}
//    if (s5==0&&s4==0&&s3!=0)
//    {
//       printf("�����������λ���ǣ�3\n",s3);
//       printf("��1�����ǣ�%d\n",s3);
//       printf("��2�����ǣ�%d\n",s2);
//       printf("��3�����ǣ�%d\n",s1);
//       printf("��4�����ǣ�û��\n");
//       printf("��5�����ǣ�û��\n");
//       printf("�������ǣ�%d%d%d",s1,s2,s3);
//    }
//    if (s5==0&&s4==0&&s3==0&&s2!=0){
//       printf("�����������λ���ǣ�2\n");
//       printf("��1�����ǣ�%d\n",s2);
//       printf("��2�����ǣ�%d\n",s1);
//       printf("��3�����ǣ�û��\n");
//       printf("��4�����ǣ�û��\n");
//       printf("��5�����ǣ�û��\n");
//       printf("�������ǣ�%d%d",s1,s2);}
//    if (s5==0&&s4==0&&s3==0&&s2==0&&s1!=0){
//       printf("�����������λ���ǣ�1\n");
//       printf("��1�����ǣ�%d\n",s1);
//       printf("��2�����ǣ�û��\n");
//       printf("��3�����ǣ�û��\n");
//       printf("��4�����ǣ�û��\n");
//       printf("��5�����ǣ�û��\n");
//       printf("�������ǣ�%d",s1);}
//    return 0;
//}
//


////������
//int main()
//{
//    int a=0;
//    printf("��������һ���ɼ���\n");
//    scanf("%d",&a);
//    printf("���ĳɼ��ȼ��ǣ�");
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








