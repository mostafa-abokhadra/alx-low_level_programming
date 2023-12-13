/**
  * _abs - converts to  absolute nums
  * @num: the num which will be converted
  *
  * Description: printing only absolute numbers accordingly
  *
  * Return: 0 if num is zero , num if num > 0 ,
  * (num - num - num) if < 0 to convert
  */
int _abs(int num)
{
                if (num == 0)
                {
                        return (0);
                }
                else if (num > 0)
                {
                        return (num);
                }
                return (num - num - num);
}
