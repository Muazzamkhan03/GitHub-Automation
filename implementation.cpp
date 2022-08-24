# include "header.hpp"

void createDir(std::string name, std::string path){
    std::string command = "cd " + path + "; " + "mkdir " + name;
    system(command.c_str());
    
}

void createGitIgnore(std::string name, std::string path){
    std::string command = "cd " + path + "; " + "cd " + name + "; " + "touch .gitignore";
    system(command.c_str());
}

void initiateGit(std::string name, std::string path){
    std::string command = "cd " + path + "; " + "cd " + name + "; " + "git init; git add -A; git commit -m \"Initial commit with gitignore\"; git branch -M main";
    system(command.c_str());
}

void connectGit(std::string name){
    std::string command = "git remote add origin git@github.com:Muazzamkhan03/"+name+".git; git push -u origin main";
    system(command.c_str());
}