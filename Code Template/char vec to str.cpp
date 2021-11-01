#include <iostream>
#include <vector>

int main()
{
    std::vector<char> input({ 'a', 'b', 'c' });

    std::string s(input.begin(), input.end());
    std::cout << s;

    return 0;
}
