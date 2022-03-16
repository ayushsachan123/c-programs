#include <stdio.h>
void printhello(); // function declaration
void printgoodbye();
int main()
{
    printhello(); // function call
    printgoodbye();
    return 0;
}
void printhello() // function definition
{
    printf("hello world\n");
    printf("my name is ayush sachan\n");
}
void printgoodbye()
{
    printf("good bye");
}