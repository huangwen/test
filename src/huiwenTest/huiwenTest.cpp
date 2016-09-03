#include <iostream>

using namespace std;

int main()
{
	string a, s;
	int i, len, mid, next, top;
	getline(cin, a);
	len = a.size();

	mid = len / 2 -1;

	top = 0;

	for(i = 0; i <= mid; i++)
	{
		s[++top] = a[i];
	}

	if(len % 2 == 0)
		next = mid + 1;
	else
		next = mid + 2;
	
	for(i = next; i <= len - 1; i++)
	{
		if(a[i] != s[top])
			break;
		top--;
	}

	if(top == 0)
		cout << " yes";
	else
		cout << "no";
	return 0;	
}
