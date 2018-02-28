/**
 * islen_mod - checks if character is a length modifier
 * @c: character to be checked
 *
 * Return: 1 for true, 0 for false
 */
int islen_mod(char c)
{
        if (c == 'l' || c == 'h')
                return (1);
        return (0);
}
