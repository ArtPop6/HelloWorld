#include <iostream>
#include<string>
using namespace std;
class List
{
	private:
		int *head;
		int num;
		int size;
	public:
		List(int s=100)
		{
			size=s;
			head=new int[size];
			num=0;		  	
		}
		~List();
		void put(int a);
		int getE(int index);
		void insert(int n,int m);
		void del(int x);			
};
List::~List()
{	
}
void List::put(int a)
{
	head[num]=a;
	num++;
	size++;	
}
int List::getE(int index)
{
	return head[index];
}
void List::insert(int n,int m)
{
	num++;
	for(;num>=n;num--)
	{
		head[num]=head[num-1];
	}
	head[n-1]=m;
 } 
void List::del(int x)
{
	for(;x<num;x++)
	{
		head[x]=head[x+1]; 		
	} 
	num--;	
}
int main()
{
	List yu;
	yu.put(0);
	yu.put(1);
	yu.put(3);
	yu.put(4);
	yu.put(5);
	yu.put(6);
	yu.insert(3,2);
	yu.del(2);
	for(int i=0;i<7;i++)
	{
		cout << yu.getE(i) << endl;
	}
}




