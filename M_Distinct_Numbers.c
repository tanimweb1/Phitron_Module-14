#include <stdio.h>

void count_distinct(int a[], int n)
{

    int total = 0;
    for (int i = 0; i < n; i++)
    {

        int is_unique = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                is_unique = 0;
                break;
            }
        
        }

         if (is_unique == 1)
            {
                total++;
            }
    }

    printf("%d", total);
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    count_distinct(a, n);

    return 0;
}