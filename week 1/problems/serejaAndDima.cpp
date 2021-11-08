#include <iostream>
#include <queue>
 
using namespace std;
 
int main()
{
	int n = 0, x = 0, s = 0, d = 0;
	deque<int> cards;
	
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		cards.push_back(x);
	}
	
	while (!cards.empty())
	{
		if (cards.front() > cards.back())
		{
			s += cards.front();
			cards.pop_front();
		}
		else
		{
			s += cards.back();
			cards.pop_back();
		}
		
        if (!cards.empty())
        {
            if (cards.front() > cards.back())
            {
                d += cards.front();
                cards.pop_front();
            }
            else
            {
                d += cards.back();
                cards.pop_back();
            }
        }
	}
	
	cout << s << ' ' << d;
}
