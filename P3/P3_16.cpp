#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};
int main()
{
    // 相比于c语言，c++允许不使用struct关键字来声明结构体变量
    Node head = {0};

    return 0;
}
