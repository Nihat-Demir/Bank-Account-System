#include "iostream"
#include "fstream"
#include <string>
#include <vector>
#include "sstream"
#include <algorithm>

class account_number_generator
{
private:
    
public:
    account_number_generator();
    ~account_number_generator();

    std::string openFile();
    bool controlFile(std::string account_number);
    void  writeFile(std::string new_account_number);
    std::string generateaccount_number();

};

