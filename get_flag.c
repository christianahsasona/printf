#include "main.h"
/**
 * get_flag - turns on flags if _printf finds a flag
 * modifier in the fmt str
 * @s: the character that holds the flg specifer
 * @f: ptr to the stuct flag
 * Return:  pointer to the struct flags in which we turn the flags on
 */
int get_flag(char s, flags_t *f)
{
int i = 0;
switch (s)
{
case '+':
f->plus = 1;
i = 1;
break;
case ' ':
f->space = 1;
i = 1;
break;
case '#':
f->hash = 1;
i = 1;
break;
}
return (i);
}
