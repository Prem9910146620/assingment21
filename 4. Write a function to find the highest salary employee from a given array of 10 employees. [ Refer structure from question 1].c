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
    struct employee e[10];
    int i;
    for(i=0;i<10;i++)
    {e[i]=input();}
    sortbysalary(e,10);
    for(i=0;i<10;i++)
    { display(e[9]);}
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
void sortbysalary(struct employee e[],int size)
{
    int i,j;
    struct employee temp;
    for(i=0;i<size-1;i++)
    {
        for(j=i+1;j<size;j++)
            { if(e[i].salary>e[j].salary)
           {
               temp=e[i];
               e[i]=e[j];
               e[j]=temp;
           }
        }
    }
 return e[size-1];
}
void display(struct employee e)
{
  printf("\n %d %s %.2f",e.employeeid,e.name,e.salary);

}
