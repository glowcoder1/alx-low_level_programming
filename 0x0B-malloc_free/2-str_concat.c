#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return: a pointer that point to a newly allocated space in memory
 * which contains the contents of s1, followed by the contents of s2,
 * and null terminated. null on fail
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0;
	unsigned int s1_len = 0;
	unsigned int s2_len = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
	{
		i++;
		s1_len++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		i++;
		s2_len++;
	}
	ptr = malloc((s1_len + s2_len + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < s1_len; i++)
	{
		ptr[i] = s1[i];
	}
	for (i = 0; i < s2_len; i++)
	{
		ptr[s1_len + i] = s2[i];
	}
	ptr[s1_len + s2_len] = '\0';

	return (ptr);
}
