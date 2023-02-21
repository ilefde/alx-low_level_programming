/**
 * _isalpha - checks if it is a letter
 * @c: character to be checked
 * Return: 1 if c is a letter (lowercase or uppercase), 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
