#include"Coroutine.h"
#include<stdio.h>

int main()
{
    task t;

    t.state = 0;
    for(int i = 0; i < 100; ++i)
    {
        printf("%d\n", courtine(&t));
    }
    return 0;
}
