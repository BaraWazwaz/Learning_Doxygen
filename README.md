![GitHub Workflow Status](https://img.shields.io/github/actions/workflow/status/BaraWazwaz/Learning_Doxygen/windows.yml)
![License](https://img.shields.io/github/license/BaraWazwaz/Learning_Doxygen)

# Learning_Doxygen

## 📌 Purpose
This is a testing project to explore the conventions of building a 
standard project in C++ Language, working with Git (Version Control), 
Doxygen (Documentation Tool), LICENSES (Intellectual Property Protection), 
Environment Variables and Structured Project Framework.

## 🚀 Quick Start

**NOTE: This Project works ONLY on Windows for now**

1. Prerequisites
    Make sure you have:
   - installed `git`.
   - installed `make`.
   - installed `doxygen` and included it in PATH.
   - installed `graphviz` (also known as `dot`) and included it in PATH.
2. Cloning
    Run the following command while inside the directory you want to clone the project to:
    ```
    git clone https://github.com/BaraWazwaz/Learning_Doxygen
    ```
3. Environment Variables (for testing)
    Make sure to write your own `.env` file under the root of the directory.

## 🛠️ How to use

| Action | command to run |
|:-------|:---------------|
| Build Project | `make` or `make all` |
| Run Project | `make run` |
| Update Documentation Manually | `make doc` or `doxygen docs/DoxyFile` |

## 📂 Project Layout

```
Learning_Doxygen/
├── .git/                Version Control Files
├── .vscode/             Visual Studio Code IDE Configurations
├── assets/
│   ├── docs.png         Screenshot of Documentation Output
│   └── license.png      Screenshot of Documentation Output
├── docs/
│   ├── Doxyfile         Doxygen Documentation Settings
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

## 🔗 References

1. Regarding Licenses:
    ![License Manual](<assets/license.png>)
    - <https://choosealicense.com/licenses/>
2. Regarding Doxygen:
    ![HTML Output](<assets/docs.png>)
    - <https://www.doxygen.nl/manual/>
3. Regarding Makefile:
    - <https://www.gnu.org/software/make/manual/make.html>
    - <https://makefiletutorial.com/>

## 🤝 Contributing

More information found [here](<./CONTRIBUTING>).

## 📜 License

More information found [here](<./LICENSE>).