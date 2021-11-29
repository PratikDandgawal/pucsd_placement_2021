#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include<conio.h>
int main()
{
int h,m;
double angle;
const int num[13] = {0,30,60,90,120,150,180,210,240,270,300,330,0};
//clrscr();
printf("Input hour(h) SPACE minute(m) :\n");
scanf("%d %d",&h,&m);
angle = num[h] - m*5.5;
if (angle < 0)
angle = -angle;
if (angle > 180)
angle = 360 - angle;
if ( m < 10 )
printf("At %d:0%d the angle is %.1f degrees.\n",h,m,angle);
else
printf("The angle is %.1f degrees at %d:%d.\n",angle,h,m);
return 0;
}


