/**
  * _islower - checks if a given char is in lower case
  * @c: the character to be checked
  *
  * Description: using ascii code lower case char check
  *
  * Return: 1 if lower case , 0 if not
  */
int _islower(int c)
{
                if (c >= 97 && c <= 122)
                {
                        return (1);
                }
                return (0);
}
