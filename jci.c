
#define lil(x) 	(x&0x0000000FF <<24 | x&0000FF00 <<8| x&0x00FF0000 >>8 | x&0xFF000000 >>24) 


fun(int word,int start,int num)
{
	

	for(int i=start;i<start+num;i++)
	{
		if(i>32)
			break;

		word&=~(1<<i);
	}

	return word;

}


void t1()
{
//collect


//post sem1
}

void t2()
{
//process

//wait sem1


//post sem2
}

void t3()
{
//send

//wait sem2

}

int main()
{
	//init semaphores

	//start 3 threads

	//wait on thread exit
}
