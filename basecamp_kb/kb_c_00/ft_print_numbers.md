ID: 202202282129
Tag: [[clang]] [[basecamp]]
Type: #type/tech
Status: #status/sown 
Cntxt: Basecamp da 42 variação dos exercícios - Lista c00
Prvs: 
Nxt: 
Brnch: 

#### ex03
---

```c

void    ft_print_numbers(void)
{
    int numb;
    char    ch;
    
    numb = 0;
    while (numb <= 9)
    {
        ch = numb + '0';
        write(1, &ch, 1);
    }
}

// int main(void)
// {
//     ft_print_numbers();
//     return (0);
// }
// 
```
