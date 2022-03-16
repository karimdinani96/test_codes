


	int x;

	if( x & 1<<n)
		x &= ~(1<<n)
	else
		x|=1<<n

	x ^= (1<<n);  


	struct n{
		int data;
		struct n* next;
	};

	typedef struct n node;
 
	node* head;
	node* ahead;
	
	for(int i=0;i<n;i++)
		ahead=ahead->next;

	

	while(ahead != NULL)
	{
		
		printf("%d\n",head->data);
		head=head->next;
		ahead=ahead->next;
	}
	
	printf("%d",head->data);	
	
		




	














	
