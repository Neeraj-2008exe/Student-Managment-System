# Student-Managment-System
# Student Management (C)

Simple student management program implemented in C.

## Project Overview

This repository contains a single C source file that implements basic student-management functionality (add/list/search students). It is a small, educational command-line program.

## Files

- `code.c` — main C source file

## Prerequisites

- A C compiler (GCC/MinGW, Clang, or Microsoft Visual C++)
- Recommended on Windows: install MinGW-w64 or Visual Studio Build Tools

## Build (Windows PowerShell examples)

Using GCC (MinGW / MSYS):

```powershell
gcc -std=c11 -O2 -o student.exe code.c
```

Using Microsoft Visual C++ (Developer Command Prompt):

```powershell
cl /O2 /W4 /Fe:student.exe code.c
```

## Run

```powershell
.\student.exe
```

## Usage

Run the compiled executable and follow on-screen prompts. Exact commands and input depend on the implementation in `code.c`.

## Contributing

If you want help improving the project, please:

- Open an issue describing the feature or bug
- Provide patches or pull requests with small, focused changes

## License

Add a license file if you want to make this project open-source. For now, no license is included.

## Contact

If you want changes or a longer README (examples, CLI reference, tests), tell me what to include and I will update it.
