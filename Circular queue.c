#include <stdio.h>
#define max 10
int front=-1;
int rear=-1;
int cqueue[max];
	
	void insert(int data, int cqueue[max])
	{
		if((rear+1)%max==front)
		{
			return;
		}
		else if(front==-1 && rear==-1)
		{
			front==0;
			rear==0;
		}
		else
		{
			rear==(rear+1)%max;
		}
		cqueue[rear] = data;
	}

void Delete()
	{
		if(front==-1 && rear==-1)
		{
			printf("\nUnderflow");
		}
		else if(front==rear)
		{
			front=-1;
			rear=-1;
		}
		else if(front==max-1)
		{
			front = 0;
		}
		else 
		{
			front = front+1;
		}
		data = cqueue[];
		return data;
	}
int main()
{
insert(10);
insert(20);
return 0;	
}