# include "header.hpp"

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
