#include<stdio.h>
#include<string.h>
struct students
{
    char name[20];
    char class[10];
    int rollnumb;
};
struct students input();
int main()
{
    struct students a[10];
    int i;
     for(i=0;i<10;i++)
    { a[i]=input(); }

    for(i=0;i<10;i++)
    { display(a[i]); }
    return 0;
}
struct students input()
{  struct students a;
    printf("enter students name, class and roll number:\n");
     fflush(stdin);
    fgets(a.name,20,stdin);
    a.name[strlen(a.name)-1]='\0';
    fflush(stdin);
  fgets(a.class,10,stdin);
    a.class[strlen(a.class)-1]='\0';
    scanf("%d",&a.rollnumb);
    return a;
}
void display (struct students a )
{
    printf("\n %s %s %d",a.name,a.class,a.rollnumb);
}
