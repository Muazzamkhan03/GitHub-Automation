# include <iostream>
# include <string>

void createDir(std::string);
// void initiateGit();


int main(int argc, char *argv[]){
    std::string fileName = argv[1];
    createDir(fileName);
    // initiateGit();
    return 0;
}

void createDir(std::string name){
    std::string command = "mkdir " + name;
    system(command.c_str());
}