#include <list>
#include <iostream>
using namespace std;
int main()
{
    list<int> monkeys;
    int n, m;
    n = 10;
    m = 2;

    monkeys.clear();

    for (int i = 1; i < n; i++)
    {
        monkeys.push_back(i);
    }
    list<int>::iterator it = monkeys.begin();

    while (monkeys.size() > 1)
    {
        for (int i = 0; i < m; i++)
        {
            ++it;
            if (it == monkeys.end())
            {
                it = monkeys.begin();
            }
        }
        it = monkeys.erase(it);
        if (it == monkeys.end())
        {
            it = monkeys.begin();
        }
    }
    cout << monkeys.front() << endl;

    return 0;
}