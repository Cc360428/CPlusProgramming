# run
g++ 1-1.cpp

## 第一章

- **const_cast** 转换符是用来移除变量的 const 或 volatile 限定符。对于后者，我不是太清楚，因为它涉及到了多线程的设计，而我在这方面没有什么了解。所以我只来说 const 方面的内容


### 关键字
- auto: 用于自动类型推断，通常用于简化变量声明。
- const: 用于定义常量或指示不可修改的对象。
- constexpr: 用于在编译时计算常量表达式的值。
- static: 用于指示静态成员变量或函数，或限制变量的作用域。
- volatile: 用于指示变量可能会在未经通知的情况下更改。
- extern: 用于声明外部变量或函数。
- mutable: 用于声明类中的可变成员，即使在const对象上也可以修改。
- register: 用于建议编译器将变量存储在寄存器中以提高访问速度。
- sizeof: 用于获取类型或表达式的大小（以字节为单位）。
- typedef: 用于创建类型别名。
- typename: 用于标识模板中的类型。
- template: 用于定义和使用函数模板或类模板。
- try/catch: 用于异常处理。
- throw: 用于抛出异常。
- catch: 用于捕获异常。
- delete: 用于释放动态分配的内存。
- new: 用于动态分配内存。
- operator: 用于定义自定义操作符函数。
- class: 用于定义类。
- struct: 用于定义结构体。
- enum: 用于定义枚举类型。
- namespace: 用于创建命名空间以组织代码。
- public/private/protected: 用于定义类成员的访问权限。
- virtual: 用于声明虚函数。
- override: 用于明确地重写基类中的虚函数。
- final: 用于防止派生类进一步继承或覆盖虚函数。
- this: 用于指向当前对象的指针。
- friend: 用于声明友元函数或友元类。
- return: 用于从函数中返回值。
- break: 用于跳出循环。
- continue: 用于终止当前循环迭代并继续下一次迭代。
- goto: 用于无条件跳转到标签。
- if/else: 用于条件语句。
- switch/case: 用于开关语句。
- while/do-while: 用于循环。
- for: 用于for循环。
- try/catch/finally: 用于异常处理。
- new/delete: 用于动态内存管理。
- const_cast/dynamic_cast/reinterpret_cast/static_cast: 用于类型转换。
- sizeof: 用于获取类型或表达式的大小。