//
// Created by Martin Studňař on 14.01.2022.
//

#include <iostream>
#include "Account.h"


Account::Account(int idCard, std::string name, float money) {
    m_id=idCard;
    m_name=name;
    m_moneyLeft=money;


}

Account::Account(int idCard, std::string name) {
    m_id=idCard;
    m_name=name;
    m_moneyLeft=0;

}

void Account::Deposite(float sum, int id) {
    if(m_id==id){
        m_moneyLeft+=sum;
        std::cout<< "Deposite: " << sum << " $" << " to account with ID: "<< id <<std::endl;
        std::cout << "Payment ID " << m_paymentId << std::endl;
        m_paymentId++;
        std::cout<< std::endl;
    } else {std::cout << "Wrong address " << id << std::endl;
        std::cout<< std::endl;}
}

void Account::Withdrawal(float sum, int id) {
    if (m_id == id){
        if (m_moneyLeft >= sum) {
            m_moneyLeft -= sum;
            std::cout << "Withdrawal: -" << sum << " $" << " from account with ID: "<< id << std::endl;
            std::cout << "Payment ID " << m_paymentId << std::endl;
            m_paymentId++;
            std::cout<< std::endl;
        } else { std::cout << "Not enough cash on account with ID: "<< id << std::endl;
            std::cout<< std::endl;}
    }else {std::cout << "Wrong address " << id << std::endl;
        std::cout<< std::endl;}
}



float Account::getMoney() {
    return m_moneyLeft;
}

void Account::printInfo() {
    std::cout << "---Bank account---"<< std::endl;
    std::cout << "Account ID: " << m_id << std::endl;
    std::cout << "Owner: " << m_name << std::endl;
    std::cout << "Balance: " << m_moneyLeft << " $" << std::endl;
    std::cout<< std::endl;
}


    int Account::getID() {
        return m_id;
    }

void Account::AccountOwnerChange(int bankID, std::string name) {
    if(m_id==bankID){
        std::cout<< "Account owner of account ID: " << bankID <<" was changed from "<< m_name <<" -> " << "name" << std::endl;
        m_name=name;
    }else{std::cout<<"Wrong account ID" << bankID << std::endl;}
}
