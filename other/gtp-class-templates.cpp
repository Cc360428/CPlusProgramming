#include <iostream>
#include <vector>
#include <stdexcept> // 添加头文件以支持 std::runtime_error

// 定义一个通用的堆栈类模板
template <typename T>
class Stack
{
private:
    std::vector<T> elements;

public:
    void push(const T &value)
    {
        elements.push_back(value);
    }

    void pop()
    {
        if (!isEmpty())
        {
            elements.pop_back();
        }
    }

    T top() const
    {
        if (!isEmpty())
        {
            return elements.back();
        }
        throw std::runtime_error("Stack is empty");
    }

    bool isEmpty() const
    {
        return elements.empty();
    }

    size_t size() const
    {
        return elements.size();
    }
};

int main()
{
    // 使用类模板创建整数堆栈
    Stack<int> intStack;

    intStack.push(5);
    intStack.push(10);
    intStack.push(20);

    std::cout << "Top element of intStack: " << intStack.top() << std::endl;
    intStack.pop();
    std::cout << "After popping, top element of intStack: " << intStack.top() << std::endl;

    // 使用类模板创建字符串堆栈
    Stack<std::string> stringStack;

    stringStack.push("Hello");
    stringStack.push("World");

    std::cout << "Top element of stringStack: " << stringStack.top() << std::endl;

    return 0;
}