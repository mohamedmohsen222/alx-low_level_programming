#include "main.h"
#include <unistd.h> 
int _putchar(char c)
{
    /* Your _putchar implementation here */
    return write(1, &c, 1);
}

int main(void)
{
    print_alphabet_x10();
    return (0);
}
