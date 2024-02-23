#include <iostream>
#include <unordered_map>
#include <algorithm>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int testCase;
    std::cin >> testCase;
    std::unordered_map<std::string, bool> log;
    std::vector<std::string> names;
    for (int i = 0; i < testCase; ++i)
    {
        std::string name, el;
        std::cin >> name >> el;
        log[name] = el == "enter" ? 1 : 0;
        names.push_back(name);
    }
    
    std::sort(names.begin(), names.end(), [](std::string a, std::string b) {return a > b; });

    for (auto name : names)
    {
        if (log[name])
        {
            std::cout << name << "\n";
            log.erase(name);
        }
    }
}
