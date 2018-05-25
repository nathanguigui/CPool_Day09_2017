/*
** EPITECH PROJECT, 2017
** my_strstr
** File description:
** 
*/

char	*my_strstr(char *str, char *to_find)
{
  char	*curChar;
  char	i;
  char	length_to_find;

  curChar = str;
  length_to_find = my_strlen(to_find);
  i = 0;
  while (*curChar != '\0')
    {
      if (*curChar == to_find[i])
	{
	  if ((i + 1) == length_to_find)
	    return (curChar - i);
	  i = i + 1;
	}
      else
	i = 0;
      curChar = curChar + 1;
    }
  return (0);
}
