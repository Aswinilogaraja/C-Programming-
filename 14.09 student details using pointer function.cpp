#include <stdio.h>
 
struct student{
    char    name[30];
    int     roll;
    float   perc;
};

int main()
{
    struct student  std;        
    struct student  *ptr;       
     
    ptr= &std;                  
     
    printf("Enter details of student: ");
    printf("\n Name: ");        gets(ptr->name);
    printf("\n Roll No: ");       scanf("%d",&ptr->roll);
    printf("\n Percentage: ");    scanf("%f",&ptr->perc);
     
    printf("\n Entered details: ");
    printf("\n Name:%s \nRollNo: %d \nPercentage: %.02f\n",ptr->name,ptr->roll,ptr->perc);

    return 0;
}
