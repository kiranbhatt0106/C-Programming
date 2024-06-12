#include <stdio.h>
void pass();
void fail();
int main()
{
    printf("Enter marks:");
    int marks;
    scanf("%d", &marks);
    if (marks >= 45)
    {
        pass();
    }
    else
    {

        fail();
    }
    return 0;
}
void pass()
{
    printf("pass\n");
}
void fail()
{
    printf("fail\n");
}
