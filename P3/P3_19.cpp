#include <iostream>
#include <string>
using namespace std;

struct Payload {
    // 枚举的成员变量可以提升为整型参与计算，但是不能直接赋值为整型值
    // 因为枚举类型的变量只能取枚举列表中的值，不能取其他整型值，即使它们在底层表示上是相同的
    enum Kind { AsInt, AsDouble, AsText } kind;
    // union 内只能包含平凡类型，不能包含非平凡类型（如 string）
    // union在结构体里有匿名联合体，不需要额外的成员变量来存储联合体的类型，也可以初始化联合体成员变量
    union {
        int    i;
        double d;
        // 对非平凡类型需显式构造/析构，简单示例用指针或使用 std::variant
    };
    //     union {
    //     int    i;
    //     double d;
    //     // 对非平凡类型需显式构造/析构，简单示例用指针或使用 std::variant
    // } id; // 匿名联合体改为命名联合体
    string text; // 单独放 struct，非平凡类型不放 union 内以简化示例
};

int main() {
    Payload p{};
    p.kind = Payload::AsInt;
    p.i = 42;
    // p.id.i = 42;

    if (p.kind == Payload::AsInt) cout << p.i << '\n';


    p.kind = Payload::AsDouble;
    p.d = 3.14;
    if (p.kind == Payload::AsDouble) cout << p.d << '\n';

    p.kind = Payload::AsText;
    p.text = "Hello, Union!";
    if (p.kind == Payload::AsText) cout << p.text << '\n';

    return 0;
}