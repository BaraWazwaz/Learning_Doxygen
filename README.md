# Learning_Doxygen

This is a testing project to explore the conventions of building a 
standard project in C++ Language, working with Git (Version Control), 
Doxygen (Documentation Tool), LICENSES (Intellectual Property Protection), 
Environment Variables and Structured Project Framework.

## How to get on machine
**NOTE: This Project only works on Windows for now**
1. Make sure you have `git` installed
2. Make sure you have `doxygen` installed and included in PATH
3. Make sure you have `graphviz` (also known as `dot`) installed and included in PATH
4. Run the following command while inside the directory you want to clone the project to:
    ```
    git clone https://github.com/BaraWazwaz/Learning_Doxygen
    ```
5. Make sure to write your own `.env` file under the root of the directory

## How to use

| Action | command to run |
|:-------|:---------------|
| Build Project | `make` or `make all` |
| Run Project | `make run` |
| Update Documentation Manually | `make doc` or `doxygen docs/DoxyFile` |

## Project Hierarchy

```
Learning_Doxygen/
├── .git/                Version Control Files
├── .vscode/             Visual Studio Code IDE Configurations
├── assets/
│   ├── docs.png         Screenshot of Documentation Output
│   └── license.png      Screenshot of Documentation Output
├── docs/
│   ├── DoxyFile         Doxygen Documentation Settings
│   └── output/          Documentation in HTML
├── include/
│   ├── header.hpp       Included Declaration Header
│   ├── template.hpp     Included Declaration Template Header
│   └── template.tpp     Implementation Template Header
├── src/
│   ├── header.cpp       Compiled Implementation Header
│   └── main.cpp         Main Program
├── tests/
├── .env                 Environment Variables
├── .gitattributes       Specific Instructions on How Git Handles Some Files
├── .gitignore           Files to be Ignored by Git
├── LICENSE              License Used to Protect Intellectual Property Rights of Project
├── Makefile             Project Compiler (and Documentation Updater)
└── README.md            Notes for Project Explorers
```

## References

1. Regarding Licenses:
    ![License Manual](<assets/license.png>)
    - <https://choosealicense.com/licenses/>
2. Regarding Doxygen:
    ![HTML Output](<assets/docs.png>)
    - <https://www.doxygen.nl/manual/>
3. Regarding Makefile:
    - <https://www.gnu.org/software/make/manual/make.html>
    - <https://makefiletutorial.com/>