#include <unistd.h>
/**
 * _putchar-writes the character c to stdout
 * @c the character to point
 *
 * return on sucess 1
 * on error -1 is returned and emo is set appropraitely
 */
int _putchar(char c)
{
	return(write(0,&c, 1));
}
