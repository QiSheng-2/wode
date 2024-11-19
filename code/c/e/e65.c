#include <stdio.h>
#include <stdbool.h>

#define SIZE 9

bool is_valid_sudoku(int initial[SIZE][SIZE], int solved[SIZE][SIZE])
{
    // 检查初始局面是否符合做出来的数独
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            if (initial[i][j] != 0 && initial[i][j] != solved[i][j])
            {
                return false;
            }
        }
    }

    // 检查每行、每列、每宫中的数字 1-9 是否出现且只出现一次
    bool row_check[SIZE][SIZE + 1] = {false};
    bool col_check[SIZE][SIZE + 1] = {false};
    bool box_check[SIZE][SIZE + 1] = {false};

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            int num = solved[i][j];
            int box_index = (i / 3) * 3 + (j / 3);
            if (row_check[i][num] || col_check[j][num] || box_check[box_index][num])
            {
                return false;
            }
            row_check[i][num] = true;
            col_check[j][num] = true;
            box_check[box_index][num] = true;
        }
    }

    return true;
}

int main()
{
    int t;
    scanf("%d", &t);

    for (int k = 0; k < t; k++)
    {
        int initial[SIZE][SIZE];
        int solved[SIZE][SIZE];

        // 读取初始数独局面
        for (int i = 0; i < SIZE; i++)
        {
            for (int j = 0; j < SIZE; j++)
            {
                scanf("%d", &initial[i][j]);
            }
        }

        // 读取空行
        getchar();

        // 读取做出来的数独
        for (int i = 0; i < SIZE; i++)
        {
            for (int j = 0; j < SIZE; j++)
            {
                scanf("%d", &solved[i][j]);
            }
        }

        // 检查数独是否正确
        if (is_valid_sudoku(initial, solved))
        {
            printf("Moca finish this sudoku perfectly!\n");
        }
        else
        {
            printf("Moca is so careless!\n");
        }
    }

    return 0;
}