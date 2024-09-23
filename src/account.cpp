#include "account.hpp"

account::account(std::string name,std::string surname){

    Id_generator Id_generator;
    account_number_generator Account_number_generator;

    this->name = name;
    this->surname = surname;
    this->ID = Id_generator.generateId();
    this->accountNumber = Account_number_generator.generateaccount_number();

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