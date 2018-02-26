char *skip_lead_sp(char *s)
{
	/* char last_char = 's'; */

	while (*s == ' ')
	{
		/* last_char = *s; */
		s++;
	}

	/* if (last_char == ' ') */
	/* 	s--; */

	return (s);
}
