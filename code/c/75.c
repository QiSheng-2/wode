#include <stdio.h>
#include <string.h>

#define MAX_TYPE_LEN 20

int main()
{
    // 变量声明
    char type[MAX_TYPE_LEN];
    int size;
    int n, q;

    // 读取数组元素类型
    gets(type);

    // 根据类型确定元素大小
    if (strcmp(type, "int") == 0)
    {
        size = 4;
    }
    else if (strcmp(type, "char") == 0)
    {
        size = 1;
    }
    else if (strcmp(type, "float") == 0)
    {
        size = 4;
    }
    else if (strcmp(type, "double") == 0)
    {
        size = 8;
    }
    else if (strcmp(type, "long long") == 0)
    {
        size = 8;
    }
    else
    {
        printf("Unknown type\n");
        return 1;
    }

    // 读取数组长度和查询次数
    scanf("%d %d", &n, &q);

    // 读取每次查询的数组下标并计算地址
    for (int j = 0; j < q; j++)
    {
        int index;
        scanf("%d", &index);
        if (index >= 0 && index < n)
        {
            printf("0x%08x\n", index * size);
        }
        else
        {
            printf("Careless Otter!\n");
        }
    }

    return 0;
}