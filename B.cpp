#include<bits/stdc++.h>
using namespace std;
const int arr=1E5+6;
int main()
{
	int a[arr];
	long long n,k;
	int temp=2;
	int t=0;
	cin>>n>>k;
	for (int i = 9; i > 1; i--) {
        while (n % i == 0) {
        	t++;
            a[t]=i;
            n /= i;
        }
    }
    if ( n > 10)
    {
    	cout<<-1;
    	return 0;
	}
	sort (a+1,a+t+1);
	if (t > k) 
	{
		cout<<-1;
	}
	else if ( t == k) 
	{
		for (int i=1;i<=t;i++)
		cout<<a[i];
	}
	else  if ( t < k)
	{
		for (int i=1;i<=k-t;i++)
			cout<<1;
		for (int i=1;i<=t;i++)
			cout<<a[i];
	}
	return 0;
}
