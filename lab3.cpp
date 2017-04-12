#include<iostream>
#include <algorithm>
#include<fstream>
#include<vector>
using namespace std;
int main()
{
	int sum=0;
	ifstream s("file.in", ios::in);
	vector<int> zzz;
	for (int i = 1; i<10; i++)
	{
		int a;
		s >> a;
		zzz.push_back(a);
	}
        sort(zzz.begin(), zzz.end());
	reverse(zzz.begin(), zzz.end());
        for(int i=0;i<5;i++)
        {
 	 sum=sum+zzz[i];      
	}
	cout<<sum;
	return 0;
}



