#include "iostream"
#include "fstream"
#include <string>
#include <vector>
#include "sstream"
#include <algorithm>

class Id_generator
{
private:
    std::string bankName;
    std::string file_name;
    
public:
    Id_generator(std::string bank_name);
    ~Id_generator();

    std::string openFile();
    bool controlFile();
    void writeFile(std::string new_id);
    std::string generateId();
    void CreateFileName();

};

