#include<iostream>
using namespace std;

int main()
{
    int a;
    std::cout<< sizeof a<<std::endl;
    std::cout<< sizeof(int)<<std::endl;

    // 列表初始化不能缩窄变换，也就是不能转化成超过类型范围的值
    float b[3] = {1,'c',3.0};
    cout<<b[1]  <<endl;

    char c[3] = {'a', 11, 'c'};
    printf("%c %c %c\n", c[0], c[1], c[2]);
    return 0;
}