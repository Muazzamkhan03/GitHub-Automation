# include "header.hpp"
# include <string.h>

int main(int argc, char *argv[]){
    std::string path = argv[1];
    std::string dirName = argv[2];
    std::string cond;
    bool isPrivate = false;

    if(argc == 4){
        cond = argv[3];
    }

    if(cond == "-p"){
        isPrivate = true;
    }

    createDir(dirName, path);
    createGitIgnore(dirName, path);
    initiateGit(dirName, path);
    makeHubRepo(dirName, isPrivate);
    connectGit(dirName,path);

    return 0;
}
