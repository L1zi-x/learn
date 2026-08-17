#include <stdio.h>
#include <string.h>

const char digit_table[] = {'a','b','c','d','e','f','g','h','i','j'};
const char unit_table[] = {' ', 'S', 'B', 'Q', 'W', 'S', 'B', 'Q', 'Y'};

int main(void)
{
    char str[20];
    (void)scanf("%s", str);
    int len = strlen(str);
    char out[200];
    int idx_out = 0;
    int i; 

    int has_nonzero = 0;
    int zero_wait = 0;

    for(i = 0; i < len; i++)
    {
        int d = str[i] - '0';
        // 当前位距离个位多少位
        int pow_pos = len - 1 - i;
        char unit = unit_table[pow_pos];

        if(d != 0)
        {
            // 需要补零
            if(zero_wait)
            {
                out[idx_out++] = 'a';
                zero_wait = 0;
            }
            out[idx_out++] = digit_table[d];
            if(pow_pos != 0)
            {
                out[idx_out++] = unit;
            }
            has_nonzero = 1;
        }
        else
        {
            if(has_nonzero)
            {
                zero_wait = 1;
            }
            if((pow_pos == 4 || pow_pos == 8) && has_nonzero)
            {
                out[idx_out++] = unit;
                zero_wait = 0;
            }
        }
    }

    // 输入0特殊情况
    if(has_nonzero == 0)
    {
        out[idx_out++] = 'a';
    }

    out[idx_out] = '\0';
    printf("%s\n", out);
    return 0;
}
