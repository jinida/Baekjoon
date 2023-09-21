#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>

std::vector<int> vector_split(std::string input, char delimiter) {
    std::vector<int> answer;
    std::stringstream ss(input);
    std::string temp;
    answer.push_back(0);
    while (getline(ss, temp, delimiter)) {
        answer.push_back(*(answer.end()-1) + stoi(temp));
    }

    return answer;
}

int main()
{
    int tc;
    std::string input;
    std::vector<int> v;
    getline(std::cin, input);
    tc = stoi(input);
    int min, max;
    
    std::vector<int>::iterator v_iter;
    for (int i = 0; i < tc; ++i)
    {
        getline(std::cin, input);
        v = vector_split(input, ' ');

        int max = *(v.end() - 1);
        int min = *std::min_element(v.begin(), v.end() - 1);
        int result = max - min;
        for (v_iter = v.end() - 2; v_iter != v.begin(); v_iter--)
        {
            if (max >= *v_iter)
                continue;
            else
                max = *v_iter;

            min = *std::min_element(v.begin(), v_iter);
            if(result < max - min)
                result = max - min;
        }
        std::cout << result << "\n";
        std::vector<int>().swap(v);
    }
}
