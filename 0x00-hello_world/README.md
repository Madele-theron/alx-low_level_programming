# 0x00. C - Hello, World Week 3 at ALX School
## Tasks
1. Compiler <br />
Write a script that compiles a C file but does not link. <br />
`gcc -E $CFILE -o c`
2. Assembler <br />
Write a script that generates the assembly code of a C code and save it in an output file. <br />
`gcc -c $CFILE`
3. Name <br />
Write a script that compiles a C file and creates an executable named `cisfun`. <br />
`gcc -S $CFILE`
4. Hello, puts <br />
Write a C program that prints exactly `\"Programming is like building a multilingual puzzle, followed by a new line.`
~~~
#include <stdio.h>

/**
 * main - prints the phrase "Programming is like building a multilingual puzzle
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
        puts("\"Programming is like building a multilingual puzzle");
        return (0);
}
~~~
