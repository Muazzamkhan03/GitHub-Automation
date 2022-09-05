# include "header.hpp"

int main(int argc, char *argv[]){
    std::string pathName = argv[1];
    std::string directoryName = argv[2];
    std::string cond;
    bool isPrivate = false;

    if(argc == 4){
        cond = argv[3];
    }

    if(cond == "-p"){
        isPrivate = true;
    }

    runner engine(pathName,directoryName,isPrivate);
    engine.run();

    return 0;
}
