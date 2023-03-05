#include <iostream>
#include <optional>

int collatz_count(int y)
{
    std::cout << "Collatz count!\n";
    int n = 0;
    while (y > 1)
    {
        ++n;
        if ((y & 1) == 0)
            y >>= 1;
        else
            y = 3 * y + 1;
    }

    return n;
}

int demo(std::optional<int> x, int y)
{
    if (x.has_value())
        return x.value();
    else
        return collatz_count(y);
}

int main()
{
    std::cout << "Result = " << demo(42, 72) << '\n';
}
