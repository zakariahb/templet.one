#include <stdio.h>
char    *ft_strcapitalize(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] +=32;
        }
        i++;
    }
    i = 0;
     if (str[i] >= 'a' && str[i] <= 'z')
    {
        str[i] -= 32;
        i++;
    } 
    
    while(str[i] != '\0')
    {
        
        if(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
        {
            i++;
            if(str[i] >= 'a' && str[i] <= 'z')
            {
                str[i] -=32;
            }
            
        }
        i++;
    }
  return str;
}
int main ()
{
    char j[]= "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

    printf("output=====> %s\n",ft_strcapitalize(j));

    return 0;
}