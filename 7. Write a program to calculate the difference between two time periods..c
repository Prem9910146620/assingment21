#include<stdio.h>
struct time
{
    int h;
    int m;
    int s;
};

void differ(struct time start, struct time stop, struct time *diff);
int main()
{
    struct time start,stop,diff;
    printf("enter start time hours, minutes, seconds:\n ");
   scanf("%d%d%d",&start.h,&start.m,&start.s);

   printf("enter stop time hours, minutes, seconds:\n ");
   scanf("%d%d%d",&stop.h,&stop.m,&stop.s);

    differ(start, stop, &diff);
    printf("\n difference time %d:%d:%d",start.h,start.m,start.s);
    printf("-%d:%d:%d",stop.h,stop.m,stop.s);
    printf("=%d:%d:%d",diff.h,diff.m,diff.s);


    return 0;
}
void differ( struct time start,struct time stop,struct time *diff)
{  while( start.s>stop.s)
      {--stop.m;
      stop.s+=60;}

     diff->s=stop.s-start.s;
    while(start.m>stop.m)
    { --stop.h;
        stop.m+=60;
    }
    diff->m=stop.m-start.m;
    diff->h=stop.h-start.h;

}
