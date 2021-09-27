#include <unistd.h>
#include <stdio.h>

int ft_checkstr()
{
    
}

char *ft_strstr(char *str, char *to_find)
{   
    int size;
    int row;
    int find;
    int read;
    int wrong;

    size = 0;
    row = 0;
    wrong = 0;
    read = 0;
    while (to_find[size] != '\0')
        size++;
    while(str[row] != '\0')
    {
        if(str[row] == to_find[read])
        {   
            find = row;
           while(find < row + size)
           {
                if(str[find] != to_find[(find - row)])
                {
                    wrong = 0;
                    read = 0;
                    break;
                }
                else
                {   
                    if (read == size - 1);
                    else
                        read++;
                    wrong++;
                }
                find++;
           }
        }
        if(size == wrong)
        {
           to_find[row - (find - size)] = str[row];
           read++;
        }   
        row++;
    }

    int i = 0;
    while(to_find[i] != '\0')
    {
        printf("%c", to_find[i]);
        i++;
    }
    return (to_find);
}

int main()
{   
    char a[]= "Hello howw world how are you";
    char b[20]= "world";
    char *c = ft_strstr(a,b);

    return 0;
}