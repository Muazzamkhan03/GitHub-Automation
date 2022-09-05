#ifndef HEADER
#define HEADER

# include <iostream>
# include <string>


class gitAuto{
        std::string path;
        std::string dirName;
        bool isPrivate;

    public:
    gitAuto(std::string, std::string, bool);
    void createDir();
    void createGitIgnore();
    void initiateGit();
    void makeHubRepo();
    void connectGit();
};

class runner: private gitAuto{
    public:
        runner(std::string, std::string, bool);
        void run();
};

#endif