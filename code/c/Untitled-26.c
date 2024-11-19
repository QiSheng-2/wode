#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int program_assessment[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &program_assessment[i]);
    }

    int suspicious_count = 0;
    for (int i = 0; i < n; i++)

    {
        if (program_assessment[i] == 1)
        {
            suspicious_count++;
        }
    }

    int ta_assessment[suspicious_count][3];
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        if (program_assessment[i] == 1)
        {
            for (int j = 0; j < 3; j++)
            {
                scanf("%d", &ta_assessment[index][j]);
            }
            index++;
        }
    }

    int ai_generated_codes[suspicious_count];
    int ai_generated_count = 0;

    index = 0;
    for (int i = 0; i < n; i++)
    {
        if (program_assessment[i] == 1)
        {
            int count = 0;
            for (int j = 0; j < 3; j++)
            {
                if (ta_assessment[index][j] == 1)
                {
                    count++;
                }
            }
            if (count >= 2)
            {
                ai_generated_codes[ai_generated_count] = i + 1;
                ai_generated_count++;
            }
            index++;
        }
    }

    printf("Answer:");
    for (int i = 0; i < ai_generated_count; i++)
    {
        printf("%d ", ai_generated_codes[i]);
    }
    printf("\n");

    return 0;
}