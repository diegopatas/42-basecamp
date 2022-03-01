ID: 202202282129
Tag: [[clang]] [[basecamp]]
Type: #type/tech
Status: #status/sown 
Cntxt: Basecamp da 42 variação dos exercícios - Lista c00
Prvs: 
Nxt: 
Brnch: 

#### ex05
---

```c

void    ft_print_char(char ch)
{
    write(1, &ch, 1);
}

void    ft_print_comb(void)
{
    int n;
    int m;
    int o;

    n = 0;
    while (n <= 7)
    {
        m = n + 1;
        while (m <= 8)
        {
            o = m + 1;
            while (o <= 9)
            {
                ft_print_char(n + '0');
                ft_print_char(m + '0');
                ft_print_char(o + '0');
                if (n != 7)
                {
                    write(1, ", ", 2);
                }
                o++;
            }
            m++;
        }
        n++;
    }
}

int main(void)
{
    ft_print_comb();
    return (0);
}

```
