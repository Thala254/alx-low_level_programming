#include "../main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s0 = "Bob Dylan";
    char *s1 = "Robert Allen";

    printf("%s, %s\n", s0, s1);
    set_string(&s1, s0);
    printf("%s, %s\n", s0, s1);
    return (0);
}

/*
Write a function that sets the value of a pointer to a char.
    Prototype: void set_string(char **s, char *to);

   Sample Output:
 Anne Cognet, Asaia Palacios
 Anne Cognet, Anne Cognet
 
 */
