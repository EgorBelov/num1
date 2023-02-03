#include <iostream>
using namespace std;
#include <vector>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <list>


int G() 
{
	return 0;
}
int C()
{
	ifstream cin("input.txt");
	ofstream cout("output.txt");
	int n, a, m, q, sum, w;
	cin >> n;
	vector <int> mp;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		mp.push_back(a);
	}
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		w = 0;
		sum = 0;
		cin >> q;
		do {
			sum += mp[w];
			w++;
		} while (sum < q);
		cout << w << endl;
	}
	cin.close();
	cout.close();
	return 0;
}
int F()
{
	ifstream cin("input.txt");
	ofstream cout("output.txt");
	int t, x, y, i , w  , a ;
	vector <int> arr;
	cin >> t;
	for (int j = 0; j < t; j++)
	{
		cin >> x >> y;
		if (x != 1) {
			i = 1, w = 2;
			a = y / x;
			if (a != 1)
				for (i = 2; i <= sqrt(a); i++)
				{
					w = 0;
					if (a % i == 0)
						while (a != 1)
						{
							if (a % i != 0)

								break;
							a /= i; w++;
						}
					if (a == 1)
					{
						break;
					}
					a = y / x;
				}
			if (a == 1)
			{
				arr.push_back(w);
				arr.push_back(i);
			}
			else {
				arr.push_back(0);
				arr.push_back(0);
			}
		}
		else {
			arr.push_back(x);
			arr.push_back(y);
		}
	}
	int st = 0;

	for (i = 0; i < t; i++) 
	{
		cout << arr[st] << " ";
		st++;
		cout << arr[st] << endl;
		st++;
	}
	cin.close();
	cout.close();
	return 0;
}
int A()
{
	ifstream cin("input.txt");
	ofstream cout("output.txt");

	int n, k;
	int x, kkey = 0, vvalue = 0, mmax = INT32_MIN;
	map <int, int> mp;
	cin >> n;
	cin >> k;
	vector<int> m;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		mp[i + 1] = x;
	}
	for (int i = 0; i < k; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			auto it = find(m.begin(), m.end(), j);
			if ((mp[j] >= mmax) && (it == m.end())) {
				mmax = mp[j];
				vvalue = mp[j];
				kkey = j;
			}

		}

		m.push_back(kkey);
		mp.erase(kkey);
		mmax = INT32_MIN;
	}
	cout << vvalue << endl;
	for (int i = 0; i < m.size(); i++)
		cout << m[i] << " ";

	cin.close();
	cout.close();
	return 0;
}
int B()
{
	int n, a, sum1 = 0, sum2 = 0, sum3 = 0;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> a;
		sum1 += a;
	}
	for (int i = 0; i < n - 1; ++i) {
		cin >> a;
		sum2 += a;
	}
	for (int i = 0; i < n - 2; ++i) {
		cin >> a;
		sum3 += a;
	}
	cout << sum1 - sum2 << endl;
	cout << sum2 - sum3 << endl;
	return 0;
}
int D()
{
	int n, s1 = 0, s2 = 0, s3 = 0, t1, t2, t3;
	cin >> n;
	int res = 0;
	for (int i = 0; i < n; i++) {
		cin >> t1 >> t2 >> t3;
		s1 += t1;
		s2 += t2;
		s3 += t3;
	}
	if (s1 == 0 && s2 == 0 && s3 == 0)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}
int E()
{
	int n, b, num = 0, max = 0, x, numMax;
	vector<int> arr;
	cin >> n;
	int minp = INT32_MAX;

	for (int i = 0; i < n; i++)
	{
		cin >> b;
		arr.push_back(b);
	}
	
	
	cout << arr[0];
	return 0;
}

int main() {
	F();
	return 0;
}