#include "iostream"
#include "Id_generator.hpp"
#include "account_number_generator.hpp"


class account
{
private:
    /** 
     * @brief ID kullanıcıyı tanımlayacaktır. Unique olacaktır.
     * @note Unique olması için bir method kullanılacaktır.
    */ 
    std::string ID;

    std::string name;
    std::string surname;
    std::string accountNumber;
    std::string bank_name;

    
    
public:

    /**
     * @brief
     */

    account(std::string name,std::string surname,std::string bank_name);
    ~account();
    /**
     * @brief Setter
     */
    void setID(std::string Id);
    void setName(std::string Name);
    void setSurname(std::string Surname);
    void setAccountNumber(std::string Accountnumber);

    /**
     * @brief Getter
     */
    std::string getID();
    std::string getName();
    std::string getSurname();
    std::string getAccountNumber();
    std::string getBankName();
};

