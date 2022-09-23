/**
* string_toupper - changes all lowercase letters of a string to uppercase.
*
* @ch: parameter
*
* Return: character.
*/
char *string_toupper(char *ch)
{
	int i;

	i = 0;
	while (ch[i] != '\0')
	{
		if (ch[i] >= 97 && ch[i] <= 122)
			ch[i] = ch[i] - 32;
		i++;
	}
	return (ch);
}
