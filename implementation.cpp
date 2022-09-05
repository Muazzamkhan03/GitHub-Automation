# include "header.hpp"

gitAuto::gitAuto(std::string p, std::string n, bool i):path(p),dirName(n),isPrivate(i){}

void gitAuto::createDir(){
    std::string command = "cd " + path + "; " + "mkdir " + dirName;
    system(command.c_str()); 
}

void gitAuto::createGitIgnore(){
    std::string command = "cd " + path + "; " + "cd " + dirName + "; " + "touch .gitignore";
    system(command.c_str());
}

void gitAuto::initiateGit(){
    std::string command = "cd " + path + "; " + "cd " + dirName + "; " + "git init; git add -A; git commit -m \"Initial commit with gitignore\"";
    system(command.c_str());
}

void gitAuto::connectGit(){
    std::string command = "cd " + path + "; " + "cd " + dirName + "; " + "git remote add origin git@github.com:Muazzamkhan03/"+dirName+".git; git push -u origin master";
    system(command.c_str());
}

void gitAuto::makeHubRepo(){
    std::string command;
    
    if(isPrivate){
        command = "python3 main.py --name " + dirName + " --private";
        system(command.c_str());
    }
    else{
        command = "python3 main.py --name " + dirName;
        system(command.c_str());
    }
}

runner::runner(std::string p, std::string n, bool i):gitAuto(p,n,i){}

void runner::run(){
    createDir();
    createGitIgnore();
    initiateGit();
    makeHubRepo();
    connectGit();
}