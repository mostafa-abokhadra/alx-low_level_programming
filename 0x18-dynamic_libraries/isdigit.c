/**
  * _isdigit - checking for digits
  * @c: the char to be checked if a digit or not
  *
  * Description: using ascii code to check fo digit
  *
  * Return: 1 if a digit , 0 otherwise
  */
int _isdigit(int c)
{
                if (c >= '0' && c <= '9')
                {
                        return (1);
                }
                else
                {
                        return (0);
                }
}
