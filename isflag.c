/**
 * isflag - checks if a character is a valid flag character
 * @c: the character to be checked
 *
 * Return - 1 if true, 0 if false
 */
int isflag(char c)
{
        switch (c)
        {
        case ' ':
        case '+':
        case '#':
                return (1);
        default:
                return (0);
        }
}
