/**
 * isPalindrome - check if a number is palindrome
 * @x: number to check
 * Return: true (is palindrome) false (othrwise)
 */
bool isPalindrome(int x)
{
	unsigned int sum = 0, tmp = x;

	if (x < 0 && x != 0)
		return (false);
	while (tmp > 0)
	{
		sum = sum * 10 + tmp % 10;
		tmp /= 10;
	}
	if (sum == x)
		return (true);
	else
		return (false);
}
