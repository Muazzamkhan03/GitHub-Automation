
# GitHub Automation

Makes a local and remote repository of provided name in the directory of the path which is provided as an argument.
Also adds a .gitignore file as an initial commit. 


## How to Use

The 'gitauto' executable should be run with the following arguments.
1) The path of the folder, where this new directory is to be made.
2) The name of the directory
3) -p flag can be added at the end, if the repository is to be kept
private in gitHub.
## Usage/Examples

```shell
gitauto /Users/root/Desktop MyProject 
```
In case of a private repository:

```shell
gitauto /Users/root/Desktop MyProject -p
```



