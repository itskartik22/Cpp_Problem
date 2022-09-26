#include <stdio.h>
struct college_data
{
    char name[100];
    int roll;
    int marks;
} s[3];

int main()
{
    // struct college_data s;
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the name : ");
        // scanf("%s", &s[i].name);
        gets(s[i].name);
        printf("Enter the roll : ");
        scanf("%d", &s[i].roll);
        printf("Enter the marks : ");
        scanf("%d", &s[i].marks);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("Name : ");
        puts(s[i].name);
        printf("Roll : %d\n", s[i].roll);
        printf("Marks : %d\n", s[i].marks);
    }
    return 0;
}