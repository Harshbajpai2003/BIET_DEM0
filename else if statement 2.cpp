#include<stdio.h>
#include<conio.h>
int main ()
{
	float H ,C, TS;
	printf("enter hardness , carbon content and tensile strength");
	scanf("%f %f %f", &H,&C,&TS);
	if(H>50&&C>0.7&&TS>5600)
	{
		printf("grade is 10");
	}
	else if(H>50&&C<0.7)
	{
		printf("grade is 9");
	}
	else if(H>50&&TS>5600)
{
	printf("grade is 8");
}
else if(H<0.7&&TS>5600)
{
	printf("grade is 7");
}
else if(H>50||C<0.7||TS>5600)
{
	printf("grade is 6");
}
else
{
	printf("grade is 5");
}
getch();

}

