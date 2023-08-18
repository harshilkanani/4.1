#include<iostream>
using namespace std;
class cricketer
{
	public:
		int total_run,c_1,c_2,c_3,c_4,c_5;
		void get()
		{
			cout<<"Enter cricketA Run:";
			cin>>c_1;
			cout<<"Enter cricketB Run:";
			cin>>c_2;
			cout<<"Enter cricketC Run:";
			cin>>c_3;
			cout<<"Enter cricketD Run:";
			cin>>c_4;
			cout<<"Enter cricketE Run:";
			cin>>c_5;
			total_run=c_1+c_2+c_3+c_4+c_5;
		}
};
class batsman:public cricketer
{
	public:
		int avg_run;
		void get2()
		{
			avg_run=total_run/5;
			cout<<"Total run:"<<total_run<<endl;
			cout<<"Average Run:"<<avg_run<<endl;
		}
};
main()
{
	batsman b;
	b.get();
	b.get2();
}