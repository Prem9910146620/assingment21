#include<stdio.h>
#include<string.h>
struct employee
{
    int employeeid;
    char name[20];
    float salary;
};
struct employee input();
int main()
{
    struct employee e1;
          e1=input();
          display(e1);

        return 0;

}
 struct employee input()
{ struct employee e;
printf("enter employee id,employee name and employee salary\n ");
scanf("%d",&e.employeeid);
fflush(stdin);
fgets(&e.name,20,stdin);
e.name[strlen(e.name)-1]='\0';

scanf("%f",&e.salary);
return e;

}
void display(struct employee e)
{
    printf(" %d %s %f",e.employeeid,e.name,e.salary);
}

