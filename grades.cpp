#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

int main()
{
	//declare
	double g1;									//grade 1
	double g2;									//grade 2
	double g3;									//grade 3
	double g4;									//grade 4
	double g5;									//grade 5
	double g6;									//grade 6
	double gpa1, gpa2, gpa3, gpa4, gpa5, gpa6;	//letter grade converted to gpa
	double gpat;								//total grade point average
	string s1, s2, s3, s4, s5, s6;				//class names
	char c1, c2, c3, c4, c5, c6;				//letter grade

	//get class names
	for (int i = 1; i <= 6; i++)
	{
	cout << "Enter class " << i << " name: ";
	if (i == 1)
		cin >> s1;
	else if (i == 2)
		cin >> s2;
	else if (i == 3)
		cin >> s3;
	else if (i == 4)
		cin >> s4;
	else if (i == 5)
		cin >> s5;
	else if (i == 6)
		cin >> s6;
	}

	//get grade 1
	cout << "Enter your " << s1 << " grade: ";
	cin >> g1;
	if (g1 >= 89.5)
		c1 = 'A';
	else if(g1 >= 79.5)
		c1 = 'B';
	else if(g1 >= 69.5)
		c1 = 'C';
	else if(g1 >= 59.5)
		c1 = 'D';
	else if(g1 < 59.5)
		c1 = 'F';

	//get grade 2 
	cout << "Enter your " << s2 << " grade: ";
	cin >> g2;
	if (g2 >= 89.5)
		c2 = 'A';
	else if(g2 >= 79.5)
		c2 = 'B';
	else if(g2 >= 69.5)
		c2 = 'C';
	else if(g2 >= 59.5)
		c2 = 'D';
	else if(g2 < 59.5)
		c2 = 'F';

	//get grade 3
	cout << "Enter your " << s3 << " grade: ";
	cin >> g3;
	if (g3 >= 89.5)
		c3 = 'A';
	else if(g3 >= 79.5)
		c3 = 'B';
	else if(g3 >= 69.5)
		c3 = 'C';
	else if(g3 >= 59.5)
		c3 = 'D';
	else if(g3 < 59.5)
		c3 = 'F';

	//get grade 4
	cout << "Enter your " << s4 << " grade: ";
	cin >> g4;
	if (g4 >= 89.5)
		c4 = 'A';
	else if(g4 >= 79.5)
		c4 = 'B';
	else if(g4 >= 69.5)
		c4 = 'C';
	else if(g4 >= 59.5)
		c4 = 'D';
	else if(g4 < 59.5)
		c4 = 'F';

	//get grade 5
	cout << "Enter your " << s5 << " grade: ";
	cin >> g5;
	if (g5 >= 89.5)
		c5 = 'A';
	else if(g5 >= 79.5)
		c5 = 'B';
	else if(g5 >= 69.5)
		c5 = 'C';
	else if(g5 >= 59.5)
		c5 = 'D';
	else if(g5 < 59.5)
		c5 = 'F';

	//get grade 6
	cout << "Enter your " << s6 << " grade: ";
	cin >> g6;
	cout << endl;
	if (g6 >= 89.5)
		c6 = 'A';
	else if(g6 >= 79.5)
		c6 = 'B';
	else if(g6 >= 69.5)
		c6 = 'C';
	else if(g6 >= 59.5)
		c6 = 'D';
	else if(g6 < 59.5)
		c6 = 'F';

	//calculate gpa1
	if (g1 >= 89.5)
		gpa1 = 4;
	else if(g1 >= 79.5)
		gpa1 = 3;
	else if(g1 >= 69.5)
		gpa1 = 2;
	else if(g1 >= 59.5)
		gpa1 = 1;
	else
		gpa1 = 0;

	//calculate gpa2
	if (g2 >= 89.5)
		gpa2 = 4;
	else if(g2 >= 79.5)
		gpa2 = 3;
	else if(g2 >= 69.5)
		gpa2 = 2;
	else if(g2 >= 59.5)
		gpa2 = 1;
	else
		gpa2 = 0;

	//calculate gpa3
	if (g3 >= 89.5)
		gpa3 = 4;
	else if(g3 >= 79.5)
		gpa3 = 3;
	else if(g3 >= 69.5)
		gpa3 = 2;
	else if(g3 >= 59.5)
		gpa3 = 1;
	else
		gpa3 = 0;

	//calculate gpa4
	if (g4 >= 89.5)
		gpa4 = 4;
	else if(g4 >= 79.5)
		gpa4 = 3;
	else if(g4 >= 69.5)
		gpa4 = 2;
	else if(g4 >= 59.5)
		gpa4 = 1;
	else
		gpa4 = 0;

	//calculate gpa5
	if (g5 >= 89.5)
		gpa5 = 4;
	else if(g5 >= 79.5)
		gpa5 = 3;
	else if(g5 >= 69.5)
		gpa5 = 2;
	else if(g5 >= 59.5)
		gpa5 = 1;
	else
		gpa5 = 0;

	//calculate gpa6
	if (g6 >= 89.5)
		gpa6 = 4;
	else if(g6 >= 79.5)
		gpa6 = 3;
	else if(g6 >= 69.5)
		gpa6 = 2;
	else if(g6 >= 59.5)
		gpa6 = 1;
	else
		gpa6 = 0;

	//calculate total gpa
	gpat = (gpa1 + gpa2 + gpa3 + gpa4 + gpa5 + gpa6) / 6;


	//output line 1
	cout << showpoint << fixed << setprecision(2) << left;
	cout << setw(10) << s1 
		 << setw(10) << s2 
		 << setw(10) << s3 
		 << setw(10) << s4 
		 << setw(10) << s5 
		 << setw(10) << s6;
	cout << endl;

	//output line 2
	cout << setw(10) << c1
		 << setw(10) << c2
		 << setw(10) << c3
		 << setw(10) << c4
		 << setw(10) << c5
		 << setw(10) << c6;
	cout << endl;
	cout << endl;

	//otuput gpa
	cout << showpoint << setprecision(1) << setw(4) << left;
	cout << "GPA: " << gpat;
	cout << endl;
	
	

	return 0;
}