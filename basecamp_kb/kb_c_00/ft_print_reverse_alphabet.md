ID: 202202282128
Tag: [[clang]] [[basecamp]]
Type: #type/tech
Status: #status/sown 
Cntxt: Basecamp da 42 variação dos exercícios - lista c00
Prvs: 
Nxt: 
Brnch: 

#### ex02

---

```c

#include <unistd.h>

void    ft_print_reverse_alphabet(void)
{
    char    ch;

    ch = 'z';
    while (ch >= 'a')
    {
        write(1, &ch, 1);
        ch--;
    }
}

// int main(void)
// {
//     ft_print_reverse_alphabet();
//     return (0);
// }

```
