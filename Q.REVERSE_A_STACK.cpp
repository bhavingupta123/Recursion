//https://www.geeksforgeeks.org/reverse-a-stack-using-recursion/

void reverse(stack<int> &s)
{
	if(s.szie()==1)
	{
		return ;
	}
	
	int temp = s.top();
	s.pop();
	reverse(s);
	insert(s,temp);
}

void insert(stack<int> &s , int ele)
{
	if(s.size()==0)
	{
		s.push(ele);
		return ;
	}
	
	int temp = s.top();
	s.pop();
	insert(s,ele);
	s.push(temp);
}