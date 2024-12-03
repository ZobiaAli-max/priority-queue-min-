#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main()
{
	priority_queue<int , vector<int>, greater<int> > q;
	q.push(45);
	q.push(75);
	q.push(95);
	q.push(5);
	while(!q.empty())
	{
		cout<<q.top()<<" ";
		q.pop();
	}
}
