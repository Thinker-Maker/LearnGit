#include <iostream>

struct X{
    bool operator>(const X& other)const{
        return true;
    }
};

template<typename T, typename T2>
T Max(const T& a, const T2& b)
{
    return a > b ? a : b;
}

int main()
{
    std::cout << Max(1, 2) << '\n';
    std::cout << Max(1, 1.1) << '\n';
    Max(X{}, X{});
    return 0;
}
