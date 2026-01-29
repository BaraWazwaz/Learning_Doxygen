# How to use

| Action | command to run |
|:-------|:---------------|
| Build Project | `make` |
| Run Project | `bin/main.exe` |
| Update Documentation Manually | `doxygen docs/DoxyFile` |

# Project Hierarchy

```
Learning_Doxygen/
├── .env                 <- Environment Variables
├── .gitattributes       <- Specific Instructions on How Git Handles Some Files
├── .gitignore           <- Files to be Ignored by Git
├── LICENSE              <- License Used to Protect IP Rights of Project
├── Makefile             <- Project Compiler (and Documentation Updater)
├── README.md            <- Notes for Project Explorers
├── .git/                <- Git Version Control Storage
├── assets/
│   └── docs.png         <- Screenshot of Documentation Output
├── docs/
│   └── DoxyFile         <- Doxygen Documentation Settings
│   └── output/          <- Documentation in HTML
├── include/
│   └── header.hpp       <- Included Declaration Header
├── src/
│   ├── header.cpp       <- Compiled Implementation Header
│   └── main.cpp         <- Main Program
└── tests/
```