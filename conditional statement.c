#include<stdio.h>
 
int main() 
{
    float marks;
    char grade;
 
    printf("Enter marks: ");
    scanf("%f", &marks);
    
    if(marks >= 90)
    {
        grade = 'A';
    }
    else if(marks >= 80 && marks < 90)
    {
        grade = 'B';
    }
    else if(marks >= 70 && marks < 80)
    {
        grade = 'C';
    }
    else if(marks >= 60 && marks < 70)
    {
        grade = 'D';
    }
    printf("Your grade is %c", grade);
    
    return 0;
}
