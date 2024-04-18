//The find function in std::string uses a case-sensitive search. 
//Write a function that also performs a case insensitive search. 
//Use an enum to decide between case-sensitive 
//and case-insensitive search. 

//The prototype of the function is:

#include <iostream>
#include <sstream>

enum class Case{SENSITIVE, INSENSITIVE};

std::string minuscolo(const std::string& s){
    std::string ret{s};
    for(char& c:ret){
        c = tolower(c);
    }
    return ret;
}
 
size_t Find(
 const std::string &source,         //Source string to be searched
 const std::string &search_string,  //The string to search for
 Case searchCase = Case::INSENSITIVE,//Choose case sensitive/insensitive search
 size_t offset = 0 ) {                //Start the search from this offset
     //Implementation
    if(searchCase == Case::INSENSITIVE){
    size_t index{};
    std::string tmp{search_string};

    std::stringstream ss;
    std::string buffer;
    ss << source;

    bool found{false};

    while(ss >> buffer && !found){
        std::string aux_buf{minuscolo(buffer)};
        tmp = minuscolo(tmp);
        if(aux_buf == tmp){
            found = true;
            //find pos
            index = source.find(buffer);
        }
    }
    if(!found)index = std::string::npos;
     /*
     return position of the first character 
     of the substring, else std::string::npos
     */
    return index;
    }else{
        size_t index = source.find(search_string);
        return index;
    }
}
//Note that, 
//we don't have direct write access to the raw string 
//inside std::string.

void print_result(size_t f){
    if(f == std::string::npos)
        std::cout << "String not found!\n";
    else
        std::cout << "String Found at pos [" << f << "]\n";
}

int main(){

    std::string prova{"RobErtO"};
    std::string source{"my name is roberto"};

    size_t check = Find(source,prova);
    print_result(check);

    std::cout << std::endl;

    prova = "NaMe";
    check = Find(source,prova,Case::SENSITIVE);
    print_result(check);

    return 0;
}
