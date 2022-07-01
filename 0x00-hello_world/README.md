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
5. Hello, printf <br />
Write a C program that prints exactly `with proper grammar, but the outcome is a piece of art,`, followed by a new line. <br />
~~~
#include <stdio.h>

/**
 * main - prints the phrase with proper grammar,
 * but the outcome is a piece of art,
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	printf("with proper grammar, but the outcome is a piece of art,\n");
	return (0);
}
~~~
6. Size is not grandeur, and territory does not make a nation <br />
Write a C program that prints the size of various types on the computer it is compiled and run on. <br />
~~~
#include <stdio.h>

/**
 * main - prints the size of various types
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
printf("Size of a char: %d byte(s)\n", sizeof(char));
printf("Size of an int: %d byte(s)\n", sizeof(int));
printf("Size of a long int: %d byte(s)\n", sizeof(long int));
printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
printf("Size of a float: %d byte(s)\n", sizeof(float));
return (0);
}
~~~
7. Intel <br />
Write a script that generates the assembly code (Intel syntax) of a C code and save it in an output file. <br />
`gcc -S -masm=intel $CFILE` <br />
8. UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity <br />
Write a C program that prints exactly `and that piece of art is useful" - Dora Korpar, 2015-10-19`, followed by a new line, to the standard error. <br />

