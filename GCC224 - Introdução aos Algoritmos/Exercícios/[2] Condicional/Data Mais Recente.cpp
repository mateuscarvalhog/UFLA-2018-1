#include <iostream>

using namespace std;

int main()
{
    
    int day1, month1, year1, day2, month2, year2;
    cin>>day1>>month1>>year1>>day2>>month2>>year2;
    
    if (year1 > year2)
    {
		cout<<day1<<" "<<month1<<" "<<year1<<endl;
	}
	else if (year2 > year1)
	{
		cout<<day2<<" "<<month2<<" "<<year2<<endl;
	}
	else
	{
		if (month1 > month2)
		{
			cout<<day1<<" "<<month1<<" "<<year1<<endl;
		}
		else if (month2 > month1)
		{
			cout<<day2<<" "<<month2<<" "<<year2<<endl;
		}
		else
		{
			if (day1 > day2)
			{
				cout<<day1<<" "<<month1<<" "<<year1<<endl;
			}
			else if (day2 > day1)
			{
				cout<<day2<<" "<<month2<<" "<<year2<<endl;
			}
		}
	}
    
    return 0;
}
