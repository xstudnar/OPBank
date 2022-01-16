//
// Created by Martin Studňař on 14.01.2022.
//

#ifndef OPBANKA_ACCOUNT_H
#define OPBANKA_ACCOUNT_H


#include <string>


class Account{
std::string m_name;
int m_id;
float m_moneyLeft;
int m_paymentId=0;
int m_bankId=0;
public:
    Account(int idCard, std::string name, float moneyLeft);
    Account(int idCard, std::string name);
    void printInfo();
    void Deposite(float sum, int id);
    void Withdrawal(float sum, int id);
    float getMoney();
    int getID();
    void AccountOwnerChange(int bankID, std::string name);



};


#endif //OPBANKA_ACCOUNT_H
