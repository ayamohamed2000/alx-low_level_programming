#include "main.h"
/**
  * _isalpha - to check if the letter is alpha or not
  * @c: letter to me be checked
  * Return: 1 when it is alpha
  * and 0 otherwise
  */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
