# include <iostream>
# include <string>

void createDir(std::string, std::string);
void createGitIgnore(std::string, std::string);
void initiateGit(std::string, std::string);
void connectGit(std::string);


int main(int argc, char *argv[]){
    std::string path = argv[1];
    std::string dirName = argv[2];
    bool isPrivate = false;

    createDir(dirName, path);
    createGitIgnore(dirName, path);
    initiateGit(dirName, path);
    // Now the repo is created in github
    connectGit(dirName);
    
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
    std::string command = "cd " + path + "; " + "cd " + name + "; " + "git init; git add -A; git commit -m \"Initial commit with gitignore\"; git branch -M main";
    system(command.c_str());
}

void connectGit(std::string name){
    std::string command = "git remote add origin git@github.com:Muazzamkhan03/"+name+".git; git push -u origin main";
    system(command.c_str());
}