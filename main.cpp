# include <iostream>
# include <string>

void createDir(std::string, std::string);
void createGitIgnore(std::string, std::string);
void initiateGit(std::string, std::string);


int main(int argc, char *argv[]){
    std::string path = argv[1];
    std::string dirName = argv[2];
    createDir(dirName, path);
    createGitIgnore(dirName, path);
    initiateGit(dirName, path);
    return 0;
}

void createDir(std::string name, std::string path){
    std::string command = "cd " + path + "; " + "mkdir " + name;
    system(command.c_str());
    
}

void createGitIgnore(std::string name, std::string path){
    std::string command = "cd " + path + "; " + "cd " + name + "; " + "touch .gitignore";
    system(command.c_str());
}

void initiateGit(std::string name, std::string path){
    std::string command = "cd " + path + "; " + "cd " + name + "; " + "git init; git add -A; git commit -m \"Initial commit with gitignore\"";
    system(command.c_str());
}
