#include <stdio.h>

void print_name(char *name, void (*f)(char *))
{
    if (name != NULL && f != NULL)
        f(name);
}

void print_name_as_is(char *name)
{
    printf("Hello, my name is %s\n", name);
}

void print_name_uppercase(char *name)
{
    unsigned int i = 0;
    printf("Hello, my uppercase name is ");
    while (name[i])
    {
        if (name[i] >= 'a' && name[i] <= 'z')
            putchar(name[i] + 'A' - 'a');
        else
            putchar(name[i]);
        i++;
    }
    printf("\n");
}

int main(void)
{
    print_name("Bob", print_name_as_is);
    print_name("Alice", print_name_uppercase);

    return 0;
}
