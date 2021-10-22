 
#include <stdio.h>

struct employee
{
    char    name[30];
    int     empId;
    float   salary;
};
 
int main()
{
    
    struct employee emp;
     
    
    printf("\nEnter details :\n");
    printf("Enter your name: ");          
    gets(emp.name);
    printf("Enter your id: ");            
    scanf("%d",&emp.empId);
    printf("Enter your salary:");        
    scanf("%f",&emp.salary);
     
    
    printf("\nEntered detail is: \n");
    printf("Name: %s\n"   ,emp.name);
    printf("Id: %d\n"     ,emp.empId);
    printf("Salary: %f\n",emp.salary);
    return 0;
}