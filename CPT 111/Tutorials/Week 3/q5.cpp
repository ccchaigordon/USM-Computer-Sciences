#include <iostream>

using namespace std;

int main()
{
    int shareNum = 1000;
    float paidPerShare = 45.5, sellPerShare = 56.9, commision = (0.02 * shareNum * paidPerShare) + (0.02 * shareNum * sellPerShare), profit;
    profit = (shareNum * sellPerShare) - (shareNum * paidPerShare) - (0.02 * shareNum * paidPerShare) - (0.02 * shareNum * sellPerShare);
    cout << "Amount Joe paid for the stock: " << shareNum * paidPerShare << endl;
    cout << "Amount Joe paid to his broker when he paid for the stock: " << 0.02 * shareNum * paidPerShare << endl;
    cout << "Amount Joe sold the stock for: " << shareNum * sellPerShare << endl;
    cout << "Amount Joe paid to his broker when he sold the stock: " << 0.02 * shareNum * sellPerShare << endl;
    cout << "Amount of profit: " << profit;

    return 0;
}