#include<bits/stdc++.h>
using namespace std;

int main()//code begins here
{
	int i,j,t,n,k,p;
	cin >> t;
	for(p=1;p<=t;p++)
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
			if(!(A[i]-dayno) && !(temp))
			{
				count++;
				temp--;
			}
			if(!temp)
			{
				dayno++;
				temp = k;
			}
		}
		cout << "Case #" << p << ": " << count << endl;
	}
}
