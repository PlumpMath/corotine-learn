#include"Coroutine.h"
int courtine(task *t)
{
    crBegin(t->state);
    for(;;)
    {
        t->num = 1;
        for(t->i = 0; t->i < 20; ++t->i)
        {
            crReturn(t->state, t->num);
            t->num += 1;
        }
    }
    crEnd();
}