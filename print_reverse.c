#include <unistd.h>
int print_reverse(char *str)
{
    if(!*str)
        return 0;
    else
        if(print_reverse(str + 1) == 0)
        {
            write(1, str, 1);
            return 0;
        }
    return 1; // that mean's , an something happened unexcepted
}
