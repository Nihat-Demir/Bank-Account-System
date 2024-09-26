#include "account.hpp"

account::account(std::string name,std::string surname,std::string bank_name){

    Id_generator Id_generator(bank_name);
    account_number_generator Account_number_generator(bank_name);

    this->name = name;
    this->surname = surname;
    this->ID = Id_generator.generateId();
    this->accountNumber = Account_number_generator.generateaccount_number();
    this->bank_name = bank_name;

};

account::~account(){

}

void account::setID(std::string Id){

    this->ID = Id;
}

void account::setName(std::string Name){
    name = Name;
}

void account::setSurname(std::string Surname){
    surname = Surname;
}

void account::setAccountNumber(std::string Accountnumber){
    accountNumber = Accountnumber;
}

std::string account::getID(){

    return this->ID;
}

std::string account::getName(){

    return this->name;
}

std::string account::getSurname(){

    return this->surname;
}

std::string account::getAccountNumber(){

    return this->accountNumber;
}

std::string account::getBankName(){

    return this->bank_name;
}