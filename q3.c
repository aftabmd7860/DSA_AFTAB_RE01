//write a program in which func1 access the elements of structure ,union,array using pointer and use function pointer to call fun1from fun2
#include<stdio.h>

struct Time
{
	int hour;
	int min;
	int sec;
}t;
union student 
[
    char a[10];
    int b;

]u;
void main()

{
	printf("Enter the time in HH:MM:SS =>");
	scanf("%d:%d:%d", &t.hour,&t.min,&t.sec);

	printf("Time is %d:%d:%d\n", t.hour,t.min,t.sec);
    printf("%d %s"u.a,u.b);
}