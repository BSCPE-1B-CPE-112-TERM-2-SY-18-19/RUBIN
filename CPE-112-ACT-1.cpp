#include<iostream>

using namespace std;

class wasteful{  /*Mao ni akong gi declare nga class name "wasteful" para mao rasad ni akong pagatawagon sa akong main()*/
	public: 
		void display(int m[5]);
		long digit[100],n, x, t, j, factor[100], rem[100], num[10],num1[10];   /*Function or variables nga gideclare para gamiton sa problem nga ang output kay wasteful number */
};
int main() 
{
	int num[10]={10,11,12,13,14,15,16,17,18,19}; /*Kani sya kay Array nga naay value nga gipangbutang kaning mga value ha or numbera mao ni basihan kung asay mga wasteful number nila */
	wasteful numbers;			     /* Mao nani sya ang gitawag na */
	numbers.display (num);			     /* Pangalan sa object nako */
	return 0;
}

	void wasteful::display(int num[10]) 	     /*Mao ni ang variable nga akong gi declare nga akong pagatawagon */
{
	cout<<"Displaying WASTEFUL: "<<endl;	
	
	for (int i=0; i<10; i++)	             /*Mao ni sya ang looping para sa wasteful number */
	{
		
	    for (i=0;i<10; i++)                      /*Mao nani sya ang code para makuha ang wasteful numbers */
			{
			digit[i]=0;
			n=num[i];
			x=n;
			for (;n!=0;)
				{
				n=n/10;
				digit[i]++;
				}
			t=0;
			j=2;
			factor[i]=0;
			for (;x!=0;)
				{
				if (x%j==0)
					{
					x=x/j;
					rem[t]=j;
					t++;
					factor[i]++;
					if(x==1)
						{
						break;
						}
					}
			else
				{
				j++;
				}
			}
		}
		for (i=0; i<10; i++)
			{
			if (factor[i]>digit[i])
				{
				cout<<"Number: "<<num[i]<<endl;
				}
			}
		}
}

