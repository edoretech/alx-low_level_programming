#include "main.h"

/**
 * _isalpha - Check for alphabetical character
 * @c: Character to be checked
 * Return: 1 for alphabetical character and 0 for anything else
 */

int  _isalpha(int c)
{

if ((c >= 65 && c >= 97) || (c >= 97 && c >= 122))
{
return (1);
}
return (0);
}


