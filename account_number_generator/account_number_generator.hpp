#include "iostream"
#include "fstream"
#include <string>
#include <vector>
#include "sstream"
#include <algorithm>

class account_number_generator
{
private:
    std::string file_name;
    std::string bank_name;

public:
    account_number_generator(std::string bankName);
    ~account_number_generator();

    std::string openFile();
    bool controlFile(std::string account_number);
    void  writeFile(std::string new_account_number);
    std::string generateaccount_number();
    void createFileName();

};

