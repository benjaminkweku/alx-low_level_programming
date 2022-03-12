#include <stdio.h>
/**
 * main - entry point
 *
 * Return: alway returns 0
 *
 */
void uppercaseAlphabets()
{
  
    // Run a loop from 65 to 90
    for (int c = 65; c <= 90; ++c)
  
        // print its ascii values
        printf("%c", c);
  
    printf("\n");
}
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z' ; a++)
		putchar(a);
		uppercaseAlphabets();
	putchar('\n');
	return (0);
}

