#include<iostream>
using namespace std;
template <class T>
T max(T *q,int n)
{
	T max=q[0];
	for(int i=1;i<n;i++)
	{
		if(max<q[i])
		{
			max=q[i];
		}
	}
	return max;
}
int main()
{
	double a[6]={3.6,4.5,6.7,8.9,1.2,4.1};
	cout<<max(a,6)<<endl;
	float b[6]={2.5,6.7,9.1,3.2,3.2,4.3};
	cout<<max(b,6);
}