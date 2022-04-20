#include "main.h"



/**
 * _strcat - concatenates 2 strings
 *
 * @dest: string to be attached to
 *
 * @src: string to be attached
 *
 *Return: pointer to the concatenated string dest
 */
char *_strcat(char *dest, char *src)

{

		int length_dest = _strlen(dest), i = 0;



			while (src[i] != '\0')

					{

								dest[length_dest + i] = src[i];

										i++;

											}

				dest[length_dest + i] = '\0';

					return (dest);

}
