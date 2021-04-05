void deletemiddle(stack<int> &s , int n , int curr=0)
{
	if(s.empty() || curr==n)
		return ;
	
	int temp = s.top();
	s.pop();
	
	deletemiddle(s,n,curr+1);
	
	if(curr!=n/2)
		s.push(temp);
}