//https://www.geeksforgeeks.org/c-program-for-tower-of-hanoi/

void hanoi(int n , char from , char to , char help)
{
	if(n==1)
	{
		cout<<from<<" "<<to;
		return ;
	}
	
	hanoi(n-1,from,help,to);
	cout<<from<<" "<<to;
	hanoi(n-1,help,to,from);
}