#include "holberton.h"

/**
 * _isalpha - check the code for Holberton School students.
 *@c: c is a char
 * Return: Always 0.
 */

int _isalpha(int c)
{

	if(c >= 'A' && c <= 'z')
	return (1);
	else
	return (0);
}
