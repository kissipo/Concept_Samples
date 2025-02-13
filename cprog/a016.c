#include <stdio.h>

struct element
{
    char data;
    int next;
};

void RemoveNextElement(struct element list[], int current)
{
    if (list[current].next != -1)
        list[current].next = list[list[current].next].next;
}

int main()
{
    struct element list[] = {{'A', 1}, {'B', 2}, {'C', 3}, {'D', 4}, {'E', -1}};

    RemoveNextElement(list, 1); // 刪除 list[1] 的下一個節點 (即 list[2])

    for (int i = 0; i < 5; i++)
        printf("[%c, %d] ", list[i].data, list[i].next);

    return 0;
}