#include <stdio.h>
#include <cs50.h>

void miau (int n);

int main (void)
{
    miau(3);
}
void miau(int n)
{
    for (int i = 1; i <= 3; i++)
    {
        printf("miau.\n");
    }
}