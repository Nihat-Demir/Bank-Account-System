#include "account_number_generator.hpp"

account_number_generator::account_number_generator(){
    bool controlFile();
}
account_number_generator::~account_number_generator(){}

std::string account_number_generator::openFile(){

    std::ifstream file("account_number_generator.txt");

    std::string line;
    std::string fileContent;

    while(std::getline(file,line)){
        fileContent+=line;

    }
    
}

bool account_number_generator::controlFile(std::string account_number){

    std::ifstream file("account_number_generator.txt");

    if(!file){

        std::ofstream createdFile("account_number_generator.txt");
        createdFile << "0";
        createdFile.close();
        return false;
    }
    file.close();
    return true;

}

std::string account_number_generator::generateaccount_number(){


    std::string file_content = openFile();

    std::stringstream content(file_content);

    std::string line;
    std::vector<int> account_number_list;

    while(std::getline(content,line)){

        try{
            int account_number = std::stoi(line);
            account_number_list.push_back(account_number);
        }
        catch(const std::exception& e){
            continue;
        }
    std::sort(account_number_list.begin(),account_number_list.end());
    int last_account_number = account_number_list[account_number_list.size()-1];
    int new_account_number = last_account_number + 1;

    std::string new_account_number_str = std::to_string(new_account_number);

    writeFile(new_account_number_str);

    return new_account_number_str;
    }

}

void  account_number_generator::writeFile(std::string new_account_number){

    std::ofstream file("account_number_generator.txt",std::ios::app);

    if(file.is_open()){
        file<<new_account_number<<std::endl;

    }
    file.close();

}