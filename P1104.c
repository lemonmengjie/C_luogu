#include <stdio.h>
#include <stdlib.h>

typedef struct student
{
    char s[20];
    int y;
    int m;
    int d;
}Student;

void bubblesort (Student*a,int n);

int main ()
{
    int n=0;
    scanf("%d",&n);
    Student *a=(Student *)malloc(n*sizeof(Student));
    for (int i=0;i<n;i++)
    {
        scanf("%s %d %d %d",a[i].s,&a[i].y,&a[i].m,&a[i].d);
    }
    for (int i=0;i<n;i++)
    {
        printf("%s\n",a[i].s);
    }
    bubblesort(a,n);
    for (int i=0;i<n;i++)
    {
        printf("%s\n",a[i].s);
    }
    free(a);
    return 0;
}

void bubblesort (Student *a,int n)
{
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n-i-1;j++)
        {
            if (a[j].y>a[j+1].y)
            {
                Student temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
            else if (a[j].y==a[j+1].y)
            {
                if (a[j].m>a[j+1].m)
                {
                    Student temp=a[j+1];
                    a[j+1]=a[j];
                    a[j]=temp;
                }
            }
            else if (a[j].y==a[j+1].y&&a[j].m==a[j+1].m)
            {
                if (a[j].d>a[j+1].d)
                {
                    Student temp=a[j+1];
                    a[j+1]=a[j];
                    a[j]=temp;
                }
            }
        }
    }
}