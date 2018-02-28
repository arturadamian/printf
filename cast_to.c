/**
 * cast_to_sui - casts a long unsigned int to a short unsigned int
 * @n: number to be cast
 *
 * Return: returns a long unsigned int, but msb's have been chopped off
 */
long unsigned int cast_to_sui(long unsigned int n)
{
	short unsigned int t;

	t = (short unsigned int)n;
	return t;
}

/**
 * cast_to_ui - casts a long unsigned int to a unsigned int
 * @n: number to be cast
 *
 * Return: returns a long unsigned int, but msb's have been chopped off
 */
long unsigned int cast_to_ui(long unsigned int n)
{
	unsigned int t;

	t = (unsigned int)n;
	return t;
}

/**
 * cast_to_si - casts a long int to a short int
 * @n: number to be cast
 *
 * Return: returns a long int, but msb's have been chopped off
 */
long int cast_to_si(long int n)
{
	short int t;

	t = (short int)n;
	return t;
}

/**
 * cast_to_i - casts a long int to an int
 * @n: number to be cast
 *
 * Return: returns an int, but msb's have been chopped off
 */
long int cast_to_i(long int n)
{
	int t;

	t = (int)n;
	return t;
}
