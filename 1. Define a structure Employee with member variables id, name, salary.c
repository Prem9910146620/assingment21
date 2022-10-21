#include<stdio.h>
struct employee
{
    int employeeid;
    char name[20];
    float salary;

};

void display(struct employee e);
int main()
{
    struct employee e={ 1,"prem kumar",4500};
   display(e);
    return 0;
}
void display(struct employee e)
{
    printf("%d %s %f",e.employeeid,e.name,e.salary);
};
