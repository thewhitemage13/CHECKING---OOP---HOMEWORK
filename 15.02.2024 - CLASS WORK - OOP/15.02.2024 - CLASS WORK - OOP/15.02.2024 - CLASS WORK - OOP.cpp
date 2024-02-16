#include <iostream>
#include <stack>
#include <string>
using namespace std;

void Checking(string math)
{
	stack<char> parentheses;

	parentheses.push(math[0]);

	for (int i = 1; i < math.length(); i++)
	{
		if (math[i] == '(' || math[i] == '[' || math[i] == '{')
		{
			parentheses.push(math[i]);
		}
		else if (math[i] == ')')
		{
			if (parentheses.top() == '(')
				parentheses.pop();
			else
				break;
		}
		else if (math[i] == ']')
		{
			if (parentheses.top() == '[')
				parentheses.pop();
			else
				break;
		}
		else if (math[i] == '}')
		{
			if (parentheses.top() == '{')
				parentheses.pop();
			else
				break;
		}
	}

	if (parentheses.empty())
	{
		cout << "correct sequence" << "\n";

	}
	else
	{
		cout << "mismatch" << "\n";
	}
}

int main()
{
	string math = "{(1<5->[3+]9-4)}";
	Checking(math);
}