#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TERMS 200000

typedef struct
{
    long long coefficient;
    long long exponent;
} Term;

int compare(const void *a, const void *b)
{
    Term *termA = (Term *)a;
    Term *termB = (Term *)b;
    return (termA->exponent > termB->exponent) - (termA->exponent < termB->exponent);
}

void solve()
{
    int n, m;
    scanf("%d", &n);
    long long a[n], A[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &A[i]);
    }

    scanf("%d", &m);
    long long b[m], B[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%lld", &b[i]);
    }
    for (int i = 0; i < m; i++)
    {
        scanf("%lld", &B[i]);
    }

    Term terms[MAX_TERMS];
    int term_count = 0;

    for (int i = 0; i < n; i++)
    {
        terms[term_count].coefficient = a[i];
        terms[term_count].exponent = A[i];
        term_count++;
    }

    for (int i = 0; i < m; i++)
    {
        terms[term_count].coefficient = b[i];
        terms[term_count].exponent = B[i];
        term_count++;
    }

    qsort(terms, term_count, sizeof(Term), compare);

    Term result[MAX_TERMS];
    int result_count = 0;

    for (int i = 0; i < term_count; i++)
    {
        if (result_count > 0 && result[result_count - 1].exponent == terms[i].exponent)
        {
            result[result_count - 1].coefficient += terms[i].coefficient;
        }
        else
        {
            result[result_count] = terms[i];
            result_count++;
        }
    }

    printf("%d\n", result_count);
    for (int i = 0; i < result_count; i++)
    {
        printf("%lld ", result[i].coefficient);
    }
    printf("\n");
    for (int i = 0; i < result_count; i++)
    {
        printf("%lld ", result[i].exponent);
    }
    printf("\n");
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        solve();
    }
    return 0;
}