#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

int main()
{
	//declare
	double g1;						//math grade
	double g2;						//history grade
	double g3;						//science grade
	double g4;						//language grade
	double g5;						//english grade
	double g6;						//elective grade
	string s1, s2, s3, s4, s5, s6;	//class names
	char c1, c2, c3, c4, c5, c6;	//letter grade

	//get class names
	cout << "Enter your first class name: ";
	cin >> s1;

	//get class names 2
	cout << "Enter your second class name: ";
	cin >> s2;

	//get class names
	cout << "Enter your third class name: ";
	cin >> s3;

	//get class names
	cout << "Enter your fourth class name: ";
	cin >> s4;

	//get class names
	cout << "Enter your fifth class name: ";
	cin >> s5;

	//get class names
	cout << "Enter your sixth class name: ";
	cin >> s6;

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

	return 0;
}