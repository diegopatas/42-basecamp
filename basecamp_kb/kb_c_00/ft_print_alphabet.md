ID: 202202281443
Tag: [[clang]] [[basecamp]]
Type: #type/tech
Status: #status/sown 
Cntxt: Basecamp da 42 variação dos exercícios - Lista c00
Prvs: 
Nxt: 
Brnch: 

#### ex01
---
 
```c
void    ft_print_alphabet(void)
{
    char    ch;
    
    ch = 'a';
    while (ch <= 'z')
    {
        write(1, &ch, 1);
        ch++;
    }
}

// int main(void)
// {
//     ft_print_alphabet();
//     return (0);
// }

```
