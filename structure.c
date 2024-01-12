#include<stdio.h>
struct student 
{
    int roll_no;
    char student_code[15];
    char name[15];
    int age;
};
int main()
{
    struct student s1[15];

    printf("If you want to exit enter -1:\n ");
    for (int i = 0 ;i<15 ; i++)
    {
        printf("Enter the %d no. namme\n ",i+1);
        scanf("%s",&s1[i].name);
        printf("Enter the %d no. student code \n",i+1);
        scanf("%s",&s1[i].student_code);
        printf("Enter the %d no. Roll Number \n ",i+1);
        scanf("%d",&s1[i].roll_no);
        printf("Enter the %d no. age \a\b ",i+1);
        scanf("%d",&s1[i].age);

    }

    printf("The list of student is :");

    printf("\n S.No \t    Roll Number            Name            Student code      \t    age ");

    for (int i = 0 ; i<15 ; i++)
    {
        printf("\n %d       %d        %s         %s      %d  \n  ",i+1,s1[i].roll_no, s1[i].name,s1[i].student_code,s1[i].age);
    }

    return 0 ;
}