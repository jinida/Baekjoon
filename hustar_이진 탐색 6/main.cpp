#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
void search_and_print(std::vector<int>& v, std::vector<int>& v2)
{
    if (v.empty() && v2.empty())
        return;

    int size = v.size();
    std::vector<int>::iterator iter;
    for (iter = v2.begin(); iter != v2.end(); iter++)
    {
        int val = *iter;
        int start = 0, end = size - 1;
        int mid = (start + end) / 2;
        while (start <= end)
        {
            mid = (start + end) / 2;
            if (v[mid] < val)
            {
                start = mid + 1;
            }
            else if (v[mid] > val)
            {
                end = mid - 1;
            }
            else
                break;
        }
        if (v[mid] < val)
            std::cout << size - mid -1 << " ";
        else if (v[mid] > val)
            std::cout << size - mid << " ";
        else
            std::cout << size - mid - 1 << " "; 
    }
    std::cout << "\n";
}

std::vector<int> vector_split(std::string input, char delimiter) {
    std::vector<int> answer;
    std::stringstream ss(input);
    std::string temp;

    while (getline(ss, temp, delimiter)) {
        answer.push_back(stoi(temp));
    }

    return answer;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int tc;
    std::cin >> tc;
    
    std::string input;
    std::vector<int> v1, v2;
    std::getline(std::cin, input);
    for (int i = 0; i < tc; ++i)
    {
        std::getline(std::cin, input);
        v1 = vector_split(input, ' ');
        std::getline(std::cin, input);
        std::sort(v1.begin(), v1.end());
        v2 = vector_split(input, ' ');
        search_and_print(v1, v2);
    }

    return 0;
}