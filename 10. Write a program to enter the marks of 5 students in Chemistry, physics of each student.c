#include<stdio.h>
#include<string.h>
struct students
{
    int rollno;
    char name[20];
    int chem;
    int phy;
    int math;
    float k;
};
struct students input();
int main()
{
    struct students a[5];
    struct students a1;
    int i;
    for(i=0;i<5;i++)
    {a[i]=input();}
    for(i=0;i<5;i++)
    {display(a[i]);}
    return 0;

}
struct students input()
{
    struct students a;

printf("enter student roll no.,name,marks ( out of 100 )of chem,phy and maths:\n");
scanf("%d",&a.rollno);
fflush(stdin);
fgets(a.name,20,stdin);
a.name[strlen(a.name)-1]='\0';
scanf("%d",&a.chem);
scanf("%d",&a.phy);
scanf("%d",&a.math);
a.k=(a.chem+a.phy+a.math)/3;
return a;
}
void display(struct students a)
{
    printf("\n %d %s %d %d %d %.2f%%",a.rollno,a.name,a.chem,a.phy,a.math,a.k);
}
