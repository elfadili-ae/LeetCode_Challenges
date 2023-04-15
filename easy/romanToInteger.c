/**
 * romanToInteger - convert roman number to integer
 * @s: roman number
 * @s is a valid roman numeral in the range [1, 3999]
 * Return: the result
 */
int romanToInt(char * s)
{
	int i, len, sum = 0;

	for (len = 0; s[len]; len++)
		;
	for (i = len - 1; i >= 0; i--)
	{
		if (s[i] == 'I')
		{
			if ( s[i + 1] == 'V' || s[i + 1] == 'X')
				sum -= 1;
			else
				sum += 1;
		}
		else if (s[i] == 'V')
			sum += 5;
		else if (s[i] == 'X')
		{
			if (s[i + 1] == 'L' || s[i + 1] == 'C')
				sum -= 10;
			else
				sum += 10;
		}
		else if (s[i] == 'L')
			sum += 50;
		else if (s[i] == 'C')
		{
			if (s[i + 1] == 'D' || s[i + 1] == 'M')
				sum -= 100;
			else
				sum += 100;
		}
		else if (s[i] == 'D')
			sum += 500;
		else if (s[i] == 'M')
			sum += 1000;
	}
	return (sum);
}
