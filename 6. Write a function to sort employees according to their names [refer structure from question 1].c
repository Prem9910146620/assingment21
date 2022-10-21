
#include<stdio.h>
#include<string.h>
struct employee
{
    int employeeid;
    char name[20];
    float salary;

};

struct employee input();
void sortbyname(struct employee e[]);
int main()
{
    struct employee e[5];
    int i;
    for(i=0;i<5;i++)
    {e[i]=input();}
    name(e);

    for(i=0;i<5;i++)
    { display(e[i]);}
    return 0;
}
struct employee input()
{   struct employee e;

   printf(" enter the employee id, name and salary\n");
    scanf("%d",&e.employeeid);
   fflush(stdin);
   fgets(e.name,20,stdin);
   e.name[strlen(e.name)-1]='\0';
   scanf("%f",&e.salary);
 return e;
}
void name(struct employee e[])
{
    int i,j;
   struct employee temp;
    for(i=0;i<4;i++)
    {
        for(j=i+1;j<5;j++)
        { if(strcmp(e[i].name,e[j].name)>0)
             { temp=e[i];
            e[i]=e[j];
            e[j]=temp;
        }
        }
    }
}
void display(struct employee e)
{
  printf("\n %d %s %.2f",e.employeeid,e.name,e.salary);

}
