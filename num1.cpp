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
	int n, q, m;
	cin >> n;
	vector <int> mp;
	for (int i = 0; i < n; i++) 
	{
		cin >> q;
		mp.push_back(q);
	}
	for (int i = 0; i < n; i++) 
	{
		m = mp[i];
		if (m == 3) {
			cout << -1 << endl;
		}
		else {
			for (int j = (m / 2) + 1; j <= m; j++)
			{
				cout << j << " ";
			}
			for (int j = (m / 2); j >= 1; j--)
			{
				cout << j << " ";
			}
			cout << endl;
		}
		
	}
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
		while (sum < q) {
			sum += mp[w];
			w++;
		} 
		cout << w << endl;
	}
	cin.close();
	cout.close();
	return 0;
}
int F()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int a;
		int b;
		cin >> a;
		cin >> b;

		if (b % a != 0)
		{
			cout << "0 0";
		}
		else
		{
			cout << 1 << " " << b / a;
		}
		cout << "\n";
	}
	
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
	int n, b, num = 0, max, min , x = 0, numMax;
	vector<int> arr1, arr2;
	cin >> n;
	int minp = INT32_MAX;
	
	for (int i = 0; i < n; i++)
	{
		cin >> b;
		arr1.push_back(b);
		
	}
	//cout << arr1.size();
	while (!arr1.empty()) {
		x -= -1;
		max = *max_element(arr1.begin(), arr1.end());
		//cout << max << endl;
		min = *min_element(arr1.begin(), arr1.end());
		//cout << min << endl;
		for (int i = 0; i < arr1.size(); i++) {
			if (max == arr1[i]) {
				auto iter = arr1.cbegin();
				arr1.erase(iter + i);
				break;
			}
		}
		//arr1.erase(std::remove(arr1.begin(), arr1.end(), max), arr1.end());
		copy(arr1.begin(), arr1.end(), back_inserter(arr2));
		while (max != min) {
			numMax = *max_element(arr2.begin(), arr2.end());
			//cout << numMax << endl;
			if (numMax != max) {
				for (int i = 0; i < arr1.size(); i++) {
					if (numMax == arr1[i]) {
						auto iter = arr1.cbegin();
						arr1.erase(iter + i);
						break;
					}
				}
				//arr1.erase(std::remove(arr1.begin(), arr1.end(), numMax), arr1.end());
				max = numMax;
			}
			for (int i = 0; i < arr2.size(); i++) {
				if (numMax == arr2[i]) {
					auto iter = arr2.cbegin();
					arr2.erase(iter + i);
					break;
				}
			}
			//arr2.erase(std::remove(arr2.begin(), arr2.end(), numMax), arr2.end());
		}
	}
	
	cout << x;
	return 0;
}


int main()
{
	E();
	return 0;
}