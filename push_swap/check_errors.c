#include "push_swap.h"

static char *check_sign(char *str)
{
    int i;
    char *check;

    i = 0;
    check = "no";

    if(ft_isdigit(str[i]) == 1 || ft_isdigit(str[i + 1]) == 1 )
    {
        i++;
        while(str[i])
        {
            if(ft_isdigit(str[i]) == 0)
            {
                check = "no";
                return check;
            }
            i++;
        }
        check = "yes";
    }
    return check;
}

char *check_validation(char **str)
{
    int i;
    int j;
    char *check;

    j = 0;
    i = 0;
    check = "no";
    while(str[i])
    {
        while(str[i][j])
        {
            if((ft_isdigit(str[i][j]) == 0) && (str[i][j] != '-' && str[i][j] != '+'))
                return check;
            j++;
        }
        check = check_sign(str[i]);
        if(ft_strncmp(check,"no",2) == 0)
            return check;
        i++;
    }
    return check;
}
// int main(int argc, char *argv[])
// {
//     int i = 0;
//     char *s;
//     s = check_validation(argv);
//     printf("%s",s); 
//     return 0;
// }