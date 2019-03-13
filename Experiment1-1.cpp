#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
int main()

{
	int genad;
	int premium;
	int sideline;
	int box;
	int ntickets1;
	int ntickets2;
	int ntickets3;
	int ntickets4;
	genad = 25;
	premium = 50;
	sideline = 100;
	box = 250;


	cout << "Enter Number of Tickets Sold for General Admission" << endl;
	cin >> ntickets1;
	cout << "Enter Number of Tickets Sold for Premium" << endl;
	cin >> ntickets2;
	cout << "Enter Number of Tickets Sold for Sideline" << endl;
	cin >> ntickets3;
	cout << "Enter Number of Tickets Sold for Box" << endl;
	cin >> ntickets4;
	cout << "    " << "Ticket Type" << "    " << "Number of Tickets Sold" << "    " << "Total Sale per Ticket Type" << "    " << "Total Overall Sale"
		 << endl;
	cout << "general admission" << "        " << ntickets1 << "                            " << ntickets1 * 25 << "                          " << (ntickets1 * 25) + (ntickets2 * 50) + (ntickets3 * 100) + (ntickets4 * 250)  
		 << endl;
	cout << "premium" << "                  " << ntickets2 << "                            " << ntickets2 * 50
		 << endl;
	cout << "sideline" << "                 " << ntickets3 << "                            " << ntickets3 * 100
		 << endl;
	cout << "box" << "                      " << ntickets4 << "                            " << ntickets4 * 250
		 << endl;


	_getch();
	return 0;
}