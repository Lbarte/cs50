//hello world with a name attached
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("hello world, %s\n", get_string("what is you name?\n"));
}