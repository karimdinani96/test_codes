


int a =10;

for(int i=0;i<sizeof(int)*8/2;i++)
{
	
	int s,e;

	s= (a & 1<< (32-i)) >> (32-i);
	e = a & 1 <<i;
	
	if (s!=e)
	{
		if(s==1)
		{
			a |= 1<<i;
			a &= ~(1<<(32-i));
		}
		else
		{
			a &= ~(1<<i);
			a |= 1<<(32-i);
		}
	}
	
}
