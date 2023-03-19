#include <stdio.h>

int main() {
int s1,s2,s3,s4,s5,s6,total,per;
printf("Enter the marks of maths : \n");
scanf("%d",&s1);
printf("Enter the marks of physics : \n");
scanf("%d",&s2);
printf("Enter the marks of chemistry : \n");
scanf("%d",&s3);
printf("Enter the marks of eg : \n");
scanf("%d",&s4);
printf("Enter the marks of Pce : \n");
scanf("%d",&s5);
printf("Enter the marks of c : \n");
scanf("%d",&s6);
total=s1+s2+s3+s4+s5+s6;
printf("Total marks secured is : %d \n", total);
per=total/6;
printf("Percentage = %d% \n", per);

if((per<=100)&&(per>=80))
{
    printf("Your garde is A \n");
}
if((per<=100)&&(per>=80))
{
    printf("Your garde is A \n");
}
if((per<=80)&&(per>=75))
{
    printf("Your garde is B \n");
}
if((per<=75)&&(per>=69))
{
    printf("Your garde is C \n");
}
if((per<=68)&&(per>=50))
{
    printf("Your garde is D\n");
}
if((per<=50)&&(per>=40))
{
    printf("Your garde is E \n");
}
if((per<=40)&&(per>=1))
{
    printf("Sorry you are fail\n");
}


}