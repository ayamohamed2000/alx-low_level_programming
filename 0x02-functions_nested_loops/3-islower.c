#include "main.h"
/**
  * _islower - function to prints lower case
  * @c: letter to be tested
  * Return: 1 if it is a lower case
  * and 0 otherwise
  */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
