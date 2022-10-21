#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - writes the character c to stdout
 * @c:
 * The character to print
 *
 * Return: on success 1.
 * on error, -1 is returned, and error is set appropriately.
 */

int _putchar(char c);

/**
 * print_alphabet - print aphabet in lowercase
 */

void print_alphabet(void);

/**
 * print_alphabet_x10 - print lowercase alphabet mara ten
 */

void print_alphabet_x10(void);

/**
 * _islower - checks for lowercase
 * @c: character to check
 * Return: int
 */

int _islower(int c);

/**
 * _isalpha - checks for alphabet character
 * @c: character to check
 * Return: 1 if lower or uppercase, 0 if not alphabet character
 */

int _isalpha(int c);

#endif
