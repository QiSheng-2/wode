#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LEN 1000

typedef struct
{
    int coefficient;
    int exponent;
} Term;

void parse_term(char *term_str, Term *term)
{
    char *x_pos = strchr(term_str, 'x');
    if (x_pos == NULL)
    {
        term->coefficient = atoi(term_str);
        term->exponent = 0;
    }
    else
    {
        if (x_pos == term_str)
        {
            term->coefficient = 1;
        }
        else
        {
            term->coefficient = atoi(term_str);
        }
        char *caret_pos = strchr(term_str, '^');
        if (caret_pos == NULL)
        {
            term->exponent = 1;
        }
        else
        {
            term->exponent = atoi(caret_pos + 1);
        }
    }
}

void differentiate_term(Term *term)
{
    if (term->exponent == 0)
    {
        term->coefficient = 0;
    }
    else
    {
        term->coefficient *= term->exponent;
        term->exponent -= 1;
    }
}

void print_term(Term *term, int is_first)
{
    if (term->coefficient == 0)
    {
        return;
    }
    if (!is_first)
    {
        printf("+");
    }
    if (term->exponent == 0)
    {
        printf("%d", term->coefficient);
    }
    else if (term->exponent == 1)
    {
        if (term->coefficient == 1)
        {
            printf("x");
        }
        else
        {
            printf("%dx", term->coefficient);
        }
    }
    else
    {
        if (term->coefficient == 1)
        {
            printf("x^%d", term->exponent);
        }
        else
        {
            printf("%dx^%d", term->coefficient, term->exponent);
        }
    }
}

int main()
{
    char input[MAX_LEN];
    fgets(input, MAX_LEN, stdin);

    char *f_x_pos = strstr(input, "f(x)=");
    if (f_x_pos == NULL)
    {
        return 1;
    }

    char *poly_str = f_x_pos + 5;
    char *term_str = strtok(poly_str, "+");
    Term terms[MAX_LEN];
    int term_count = 0;

    while (term_str != NULL)
    {
        parse_term(term_str, &terms[term_count]);
        differentiate_term(&terms[term_count]);
        term_count++;
        term_str = strtok(NULL, "+");
    }

    printf("f'(x)=");
    int is_first = 1;
    for (int i = 0; i < term_count; i++)
    {
        if (terms[i].coefficient != 0)
        {
            print_term(&terms[i], is_first);
            is_first = 0;
        }
    }
    printf("\n");

    return 0;
}