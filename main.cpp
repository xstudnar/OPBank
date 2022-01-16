#include <iostream>
#include "Account.h"

int main() {
    Account* account1= new Account(9812253056, "John Smith", 300);
    Account* account2= new Account(8804075545,"Josh Wheeler");
    account1->printInfo();
    account2->printInfo();
    account1->Deposite(300, 9812253056);
    account1->Deposite(300, 1564231530);
    account1->printInfo();
    account2->printInfo();
    account2->AccountOwnerChange(8804075545, "James Ofl");
    account2->printInfo();
    account1->Deposite(300, 9812253056);
    delete account1;
    delete account2;
    return 0;
}
