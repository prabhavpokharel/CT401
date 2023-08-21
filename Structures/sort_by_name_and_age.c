//WAP to create a structure having name of the student and age as its member. Read the details of 5 students
// and sort the data of 5 students according to their name and according to their age. Use fuction.
#include<stdio.h>
#include<string.h>

struct student
{
    char name[20];
    int age;
};
void sortname(struct student []);
void sortage(struct student []);
int main()
{
    struct student s[5];
    int i;
    printf("Enter the details of 5 students:\n");
    for(i=0;i<5;i++)
    {
        printf("Enter name:");
        scanf("%s",s[i].name);
        printf("Enter age:");
        scanf("%d",&s[i].age);
    }
    sortname(s);
    printf("The sorted data according to the name of the student is:\n");
    for(i=0;i<5;i++)
    {
        printf("Name: %s\tAge: %d\n",s[i].name,s[i].age);
    }

    sortage(s);
    printf("The sorted data according to the name of the student is:\n");
    for(i=0;i<5;i++)
    {
        printf("Name: %s\tAge: %d\n",s[i].name,s[i].age);
    }

    return 0;
   
}

void sortname(struct student st[])
{
    int i,j;
    struct student temp;
    for(i=0;i<4;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(strcmp(st[i].name,st[j].name)>0)
            {
                temp = st[i];
                st[i] = st[j];
                st[j] = temp;
            }
        }
    }
}

void sortage(struct student st[])
{
    int i,j;
    struct student temp;
    for(i=0;i<4;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(st[i].age > st[j].age)
            {
                temp = st[i];
                st[i] = st[j];
                st[j] = temp;
            }
        }
    }
}