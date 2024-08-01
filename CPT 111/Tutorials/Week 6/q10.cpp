#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
    double ticketPrice, totalSale;
    int numberOfTicketsSold, totalSold;
    fstream inFile("/content/inTicket.txt", ios::in);
    fstream outFile("/content/outTicket.txt", ios::out);
    outFile << right << setw(31) << "Ticket Price ($)\tTicket Sold\n";
    outFile << "----------------------------------------\n";
    while (!inFile.eof())
    {
        inFile >> ticketPrice;
        outFile << right << setw(12) << fixed << setprecision(2) << ticketPrice;
        inFile >> numberOfTicketsSold;
        outFile << right << setw(16) << numberOfTicketsSold << endl;
        totalSold += numberOfTicketsSold;
        totalSale += ticketPrice * numberOfTicketsSold;
    }
    outFile << "----------------------------------------\n";
    outFile << "Total Tickets Sold: " << setw(12) << right << totalSold << " tickets\n";
    outFile << "Total Sale Amount: " << setw(11) << right << "$" << fixed << setprecision(2) << totalSale;

    inFile.close();
    outFile.close();

    return 0;
}