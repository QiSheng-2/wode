#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_VAR_NAME 6 // 变量名最长5个字母，考虑到 '\0' 的空间
#define MAX_LINE 5000

// 哈希表的大小，可以根据实际情况调整
#define HASH_SIZE 10007

// 哈希表结构
typedef struct
{
    char name[MAX_VAR_NAME];
    int value;
    struct Variable *next;
} Variable;

Variable *hashTable[HASH_SIZE];

// 哈希函数
unsigned int hash(char *str)
{
    unsigned int hashVal = 0;
    while (*str)
    {
        hashVal = (hashVal * 31) + (*str++);
    }
    return hashVal % HASH_SIZE;
}

// 查找变量
Variable *findVariable(char *name)
{
    unsigned int index = hash(name);
    Variable *current = hashTable[index];
    while (current)
    {
        if (strcmp(current->name, name) == 0)
        {
            return current;
        }
        current = current->next;
    }
    return NULL;
}

// 插入变量到哈希表
void insertVariable(char *name, int value)
{
    unsigned int index = hash(name);
    Variable *newVar = (Variable *)malloc(sizeof(Variable));
    strcpy(newVar->name, name);
    newVar->value = value;
    newVar->next = hashTable[index];
    hashTable[index] = newVar;
}

// 释放哈希表
void freeHashTable()
{
    for (int i = 0; i < HASH_SIZE; i++)
    {
        Variable *current = hashTable[i];
        while (current)
        {
            Variable *temp = current;
            current = current->next;
            free(temp);
        }
    }
}

int main()
{
    char line[256];
    int lineNumber = 0;

    // 初始化哈希表
    memset(hashTable, 0, sizeof(hashTable));

    // 逐行读取输入
    while (fgets(line, sizeof(line), stdin))
    {
        lineNumber++;

        // 去掉行末的换行符
        line[strcspn(line, "\n")] = '\0';

        if (strncmp(line, "print ", 6) == 0)
        {
            // 处理 print 语句
            char varName[MAX_VAR_NAME];
            sscanf(line + 6, "%s", varName);

            Variable *var = findVariable(varName);
            if (var)
            {
                printf("%d\n", var->value);
            }
            else
            {
                printf("line %d: print invalid name \"%s\"!\n", lineNumber, varName);
            }
        }
        else
        {
            // 处理赋值语句
            char varName[MAX_VAR_NAME];
            char valueStr[256];
            int value = 0;
            sscanf(line, "%s %s", varName, valueStr);

            if (valueStr[0] >= '0' && valueStr[0] <= '9')
            {
                // 如果值是常数
                value = atoi(valueStr);
            }
            else
            {
                // 如果值是变量名
                Variable *var = findVariable(valueStr);
                if (var)
                {
                    value = var->value;
                }
                else
                {
                    // 如果变量没有定义，我们默认赋值为0
                    value = 0;
                }
            }
            // 插入/更新变量的值
            insertVariable(varName, value);
        }
    }

    // 清理哈希表内存
    freeHashTable();

    return 0;
}
