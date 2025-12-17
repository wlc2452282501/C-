#include <iostream>

using namespace std;

int main()
{
    int a = 2;
    printf("a=%d, &a=%p\n", a, (void*)&a);

    // 指向有效内存地址的指针变量p，p指向a的地址
    int* p = &a;

    printf("*p=%d\n", *p);

    return 0;
}