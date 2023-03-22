#include <unistd.h>

/**
 * _putchar: writes te character a to stdout
 * @a: the character to print
 *
 * return: succes 1
 * on error -1 is returned
 */

  int _putchar (char a)
 {
  
   return (write(1, &a,1);
 }
