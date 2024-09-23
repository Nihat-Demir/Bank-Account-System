#include "iostream"
#include "fstream"
#include <string>
#include <vector>
#include "sstream"
#include <algorithm>

class Id_generator
{
private:
    
public:
    Id_generator();
    ~Id_generator();

    std::string openFile();
    bool controlFile(std::string id);
    void writeFile(std::string new_id);
    std::string generateId();

};

