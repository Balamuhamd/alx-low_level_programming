#include <stdio.h>
#include <unistd.h>
<<<<<<< HEAD
/**
 *  * main - Entry point
 *   * Return:1
 *
   */
int main(void)
{
char ch[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, ch, sizeof(ch));
return (1);
}}			
=======

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)

{

		write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);

			return (1);

}
>>>>>>> ecbfcbaf30eee186d3564d21105ecd859b03491e
