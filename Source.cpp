#include <iostream>
#include <algorithm>
#pragma warning( disable : 4996 )
using namespace std;

int age[2000000];
int main()
{
	freopen("Input.txt", "rt", stdin);
	freopen("Output.txt", "w+t", stdout);
	int n;
	while (cin >> n)
	{
		if (!n)
			break;
		for (int i = 0; i < n; i++)
			cin >> age[i];
		sort(age, age + n);
		cout << age[0];
		for (int i = 1; i < n; i++)
			cout << " " << age[i];
		cout << endl;
	}
	return 0;
}