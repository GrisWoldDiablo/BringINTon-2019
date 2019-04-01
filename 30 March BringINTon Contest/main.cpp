
// Problem one: Divisor Summation (Completed)
/*
#include <iostream>
using namespace std;

int main() {

	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int M;
		cin >> M;
		int total = 0;
		bool even = false;
		if (M % 2 == 0)
		{
			even = true;
		}
		if (even)
		{
			for (int j = 1; j <= (M / 2); j++)
			{

				if (M % j == 0)
				{
					total += j;
				}
			}
		}
		else
		{
			for (int j = 1; j <= (M / 2); j += 2)
			{
				if (M % j == 0)
				{
					total += j;
				}
			}
		}
		cout << total << endl;
	}
	return 0;
}
*/

// Problem two: Expedition
/*
#include <iostream>
#include <vector>

using namespace std;

int main() {

	int testCase;
	cin >> testCase;
	vector<int> distanceV;
	for (int i = 0; i < testCase; i++)
	{
		int N;
		cin >> N;
		int townDistance;
		int truckGas;
		for (int i = 0; i < N; i++)
		{
			int distance;
			int lenght;
			cin >> distance;
			cin >> lenght;
			distanceV.push_back(distance, lenght);
		}
	}
}
*/

// Problem three: Feynman (Completed)
/*
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int value;
	cin >> value;
	do
	{
		int total = 0;
		for (int i = 1; i <= value; i++)
		{
			total += pow((value - i) + 1, 2);
		}
		cout << total << endl;
		cin >> value;
	} while (value != 0);

	return 0;
}
*/

// Problem four: Average (Completed)
/*
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		int N;
		cin >> N;
		int total = 0;
		for (int i = 0; i < N; i++)
		{
			int value;
			cin >> value;
			total += value;
		}
		total /= N;
		cout << total << endl;
	}
	return 0;
}
*/

// Problem five: Even Numbers (Completed)
/*
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int value;
		cin >> value;
		if (value % 2 == 0)
		{
			string binary = "";
			while (value > 0)
			{
				stringstream myStreamString;
				myStreamString << value % 2;
				binary += myStreamString.str();
				value /= 2;
			}
			int binMul = 1;
			int convertedBin = 0;
			for (int i = binary.length() - 1; i >= 0; i--)
			{
				if (binary[i] == '1')
				{
					convertedBin += 1 * binMul;
				}

				binMul *= 2;
			}
			cout << convertedBin << endl;
		}
		else
		{
			cout << value << endl;
		}
	}

	return 0;
}
*/

// Problem six: Cookies Piles (Completed)
/*
#include <iostream>
using namespace std;
//5 11 17
//0+5 0+5+6 0+5+6+6
int main() {
	int T;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		int N;
		cin >> N;
		int A;
		cin >> A;
		int D;
		cin >> D;
		int total = 0;
		for (int i = 0; i < N; i++)
		{
			total += A + (D * i);
		}
		cout << total << endl;
	}
	return 0;
}*/

// Problem seven: Busy Man (Completed)
/*
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		int N;
		cin >> N;

	}
	return 0;
}
*/