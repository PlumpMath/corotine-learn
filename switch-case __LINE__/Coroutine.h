struct task
{
    int i;
    int state;
    int num;
};


#define crBegin(state) \
    switch (state)  \
{ \
    case 0:

#define crReturn(state, ret) \
    (state) = __LINE__; \
    return (ret); \
    case __LINE__:

#define crEnd() \
}

int courtine(task *t);