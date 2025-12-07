#include <iostream>
#include <cstdint>
using namespace std;

// 定义一个 union，可以存储 int、float 或 4 个字节
// 注意：union 中的所有成员共享同一块内存，他们的大小等于最大成员的大小
// 成员之间不会相互独立存储，他们被视为同一存储空间的不同解释方式，调用时会根据当前的成员类型来解释内存中的数据
union Value {
    int   i;
    float f;
    uint8_t bytes[4];
};

int main() {
    Value v{};
    v.i = 0x3f800000;              // 二进制对应 float 1.0
    cout << "union size: " << sizeof(Value) << '\n'; // 通常 4
    cout << "interpret as float: " << v.f << '\n';   // 读取为 float，得 1.0
    cout << "bytes: ";
    for (auto b : v.bytes) cout << hex << (int)b << ' ';
    cout << dec << '\n';

    v.f = 2.5f;                    // 写入 float
    cout << "reinterpret as int: 0x" << hex << v.i << dec << '\n'; // 共享同一存储
}