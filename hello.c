#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("hello, dear\n");
    string name = get_string("what is your name?\n");
    printf("hello,%s\n", name);
}
