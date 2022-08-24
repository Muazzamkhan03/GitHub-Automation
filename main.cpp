# include "header.hpp"
# include <string.h>

int main(int argc, char *argv[]){
    std::string path = argv[1];
    std::string dirName = argv[2];
    bool isPrivate = false;

    if(strcmp(argv[3],"-p")==0){
        isPrivate = true;
    }

    createDir(dirName, path);
    createGitIgnore(dirName, path);
    initiateGit(dirName, path);
    makeHubRepo(dirName, isPrivate);
    connectGit(dirName);

    return 0;
}
