#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i,j,t,n,k,p;
	cin >> t;
	for(p=0;p<t;p++)
	{
		cin >> n >> k;
		int A[n];
		int count = 0,temp = k;
		for(i=0;i<n;i++)
			cin >> A[i];
		sort(A,A+n);
		int dayno = 0;
		for(i=0;i<n;i++)
		{
			if(A[i]-dayno > 0 && temp > 0)
			{
				count++;
				temp--;
			}
			if(temp == 0)
			{
				dayno++;
				temp = k;
			}
		}
		cout << "Case #" << p+1 << ": " << count << endl;
	}
}
