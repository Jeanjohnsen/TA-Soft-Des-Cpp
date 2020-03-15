#include <iostream>
#include <Loan.h>

using namespace std;

void test(){

    // Loan(double debt, int years, int paymentsPerYear, double interestRate)

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    double a;
    int y;
    int py;
    double ir;

    std :: cout << "Enter the debt, number of years, payments per year and the interest rate: " << std :: endl;
    std :: cin >> a >> y >> py >> ir;

    Loan p (a, y, py, ir);

    std :: cout << "Ydenlsen er hold ud : " << p.totalPayment() << "\n" <<
                   p.getDebt() << "\n" <<
                   p.getYears() << "\n";
}

int main()
{

    test();
    return 0;
}
