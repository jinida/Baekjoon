#include <iostream>
#include <string>
#include <deque>

void insert(std::deque<int> &v, int val)
{
    if (v.size() == 0)
    {
        v.push_back(val);
        return;
    }

    int start = 0, end = v.size() - 1;
    int mid;
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
        {
            v.insert(v.begin() + mid, val);
            return;
        }
    }

    if (v[mid] < val)
    {
        v.insert(v.begin() + mid + 1, val);
    }
    else if (v[mid] > val)
    {
        v.insert(v.begin() + mid, val);
    }
    else
        v.insert(v.begin() + mid, val);

}

int main()
{
    int cnt;
    std::cin >> cnt;
    std::deque<int> v;
    
    int num;
    std::string res;
    for (int i = 0; i < cnt; ++i)
    {
        std::cin >> num;
        if (num == 0)
        {
            if (v.empty())
                res += "0\n";
            else
            {
                res += (std::to_string(v.back()) + "\n");
                v.pop_back();
            }
            continue;
        }
        insert(v, num);
    }
    std::cout << res;
}
