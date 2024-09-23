#include "Id_generator.hpp"

Id_generator::Id_generator(){
    bool controlFile();
}
Id_generator::~Id_generator(){}

std::string Id_generator::openFile(){

    std::ifstream file("id_generator.txt");

    std::string line;
    std::string fileContent;

    while(std::getline(file,line)){
        fileContent+=line;

    }
    
}

bool Id_generator::controlFile(std::string id){

    std::ifstream file("id_generator.txt");

    if(!file){

        std::ofstream createdFile("id_generator.txt");
        createdFile << "0";
        createdFile.close();
        return false;
    }
    file.close();
    return true;

}

std::string Id_generator::generateId(){


    std::string file_content = openFile();

    std::stringstream content(file_content);

    std::string line;
    std::vector<int> id_list;

    while(std::getline(content,line)){

        try{
            int id = std::stoi(line);
            id_list.push_back(id);
        }
        catch(const std::exception& e){
            continue;
        }
    std::sort(id_list.begin(),id_list.end());
    int last_id = id_list[id_list.size()-1];
    int new_id = last_id + 1;

    std::string new_id_str = std::to_string(new_id);

    writeFile(new_id_str);

    return new_id_str;
    }

}

void Id_generator::writeFile(std::string new_id){

    std::ofstream file("id_generator.txt",std::ios::app);

    if(file.is_open()){
        file<<new_id<<std::endl;

    }
    file.close();

}