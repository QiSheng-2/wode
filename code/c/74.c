#include <stdio.h>
#include <string.h>

#define MAX_BOOK_LEN 1001
#define MAX_SPELLS 100
#define MAX_SPELL_LEN 1001

int main()
{
    // 变量声明
    char book[MAX_BOOK_LEN];
    int n;
    char spells[MAX_SPELLS][MAX_SPELL_LEN];

    // 读取魔法书内容
    gets(book);

    // 读取咒语数量
    scanf("%d", &n);
    getchar(); // 读取换行符

    // 读取每个咒语
    for (int i = 0; i < n; i++)
    {
        gets(spells[i]);
    }

    // 查找每个咒语在魔法书中的位置
    for (int i = 0; i < n; i++)
    {
        char *pos = strstr(book, spells[i]);
        if (pos != NULL)
        {
            printf("%ld\n", pos - book);
        }
        else
        {
            puts("Spell Not Found!");
        }
    }

    return 0;
}