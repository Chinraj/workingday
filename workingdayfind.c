#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[20];
printf("Enter the day :\n");
scanf("%s",a);
if(strcmp(a,"sunday")==0)
printf("false");
else if((strcmp(a,"monday")==0)||(strcmp(a,"tuesday")==0)||(strcmp(a,"wednesday")==0)||(strcmp(a,"thursday")==0)||(strcmp(a,"friday")==0)|| (strcmp(a,"saturday")==0))
printf("true");
else
printf("enter valid day");
getch();
}
