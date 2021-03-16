/**
 * _strlen - returns length of string
 * @s: string to get length of
 * Return: length of string
 */

int _strlen2(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
/**
 * _strcpy - copies string pointed by source to destination
 * @dest: destination pointer
 * @src: source pointer
 * Return: pointer to destination
 */

void *_strcpy(char *dest, char *src)
{
	int i;
	int src_len = _strlen2(src);

	for (i = 0; i <= src_len; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
