#include "Loan.h"
#include <cmath>

Loan::Loan()
{

}

Loan :: Loan(double debt, int years, int paymentsPerYear, double interestRate){

    _debt = debt;
    mYears = years;
    mPaymentsPerYear = paymentsPerYear;
    _interestRate = interestRate;

}

double Loan::getInterestRate() const
{
    return _interestRate;
}

void Loan::setInterestRate(double interestRate)
{
    _interestRate = interestRate;
}

double Loan::getDebt() const
{
    return _debt;
}

void Loan::setDebt(double debt)
{
    _debt = debt;
}

int Loan:: getYears() const
{
    return mYears;
}

void Loan::setYears(int years)
{
    mYears = years;
}

int Loan :: getPaymentsPerYear() const{

return mPaymentsPerYear;
}

void Loan::setPaymentsPerYear(int paymentsPerYear)
{
    mPaymentsPerYear = paymentsPerYear;
}


double Loan :: totalPayment() const{
    double y = getDebt() * (getInterestRate()/(1 -(pow((1 + getInterestRate()), -getPaymentsPerYear()))));

        return y;
}


