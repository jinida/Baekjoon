#include <iostream>
#include <queue>
#include <sstream>
#include <vector>

using namespace std;

void find(priority_queue<int>& pq, vector<int>& val)
{
    if (pq.size() == 0)
        return;
    int start = 0, end = pq.size() - 1;
    int mid;
    pq[1];
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (pq[mid] < val)
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
}

priority_queue<int>& pq_split(string input, char delimiter) {
    priority_queue<int> answer;
    stringstream ss(input);
    string temp;

    while (getline(ss, temp, delimiter)) {
        answer.push(stoi(temp));
    }

    return answer;
}

vector<int>& v_split(string input, char delimiter) {
    vector<int> answer;
    stringstream ss(input);
    string temp;

    while (getline(ss, temp, delimiter)) {
        answer.push_back(stoi(temp));
    }

    return answer;
}

int main()
{
    int tc;
    std::string num;
    cin >> tc;
    for (int i = 0; i < tc; ++i)
    {
        std::priority_queue<int> pq;
        std::vector<int> v;
        cin >> num;
        pq = pq_split(num, ' ');
        cin >> num;
        v = v_split(num, ' ');
        find(pq, v);
    }
}
