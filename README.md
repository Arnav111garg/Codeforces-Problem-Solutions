# Codeforces Problem Solutions

This repository contains C++ solutions to various Codeforces problems, organized by topic rather than difficulty rating. The goal is to make it easier to review and learn algorithms by concept such as arrays, greedy methods, graphs, dynamic programming, and math.

## Why this repository exists

This repository is intended for:
- Practicing problem-solving skills
- Building a personal reference for common algorithmic patterns
- Organizing solutions by topic for faster review
- Keeping solutions compatible with GNU G++23 14.2 (64-bit, MSYS2)

## Repository structure

```text
codeforces-solutions/
├── solutions/
│   ├── arrays-and-strings/
│   ├── dynamic-programming/
│   ├── graphs/
│   ├── greedy/
│   ├── math/
│   ├── sorting-and-searching/
│   └── ...
├── templates/
│   └── solution.cpp
└── README.md
```

Each solution is placed in the most relevant topic folder. If a problem fits multiple categories, it is stored in the category that best matches the main idea behind the solution.

## Compiler and environment

These solutions are written for:
- Compiler: GNU G++23 14.2 (64-bit, MSYS2)
- Language standard: C++23

Example build command on Windows/MSYS2:

```bash
g++ -std=gnu++23 -O2 -Wall -Wextra -pedantic -o solution.exe solution.cpp
```

## How to use this repository

1. Open the project folder in Visual Studio Code.
2. Copy the template from `templates/solution.cpp` into the relevant topic folder.
3. Add your solution using a clear and descriptive filename, such as:
   - `problem-name.cpp`
   - `a-problem-name.cpp`
4. Compile and run it locally to verify correctness.

## Suggested solution template

The file `templates/solution.cpp` provides a clean starting point with common headers and standard input/output setup.

## Coding conventions

To keep the repository consistent and readable:

- Use clear and descriptive file names
- Add comments for important ideas or edge cases
- Prefer simple and readable logic over overly clever solutions
- Keep formatting consistent
- Include the problem name and link in comments when possible

## Contribution guidelines

Contributions are welcome. If you want to add a new solution:

- Place it in the correct topic folder
- Make sure it compiles successfully
- Test it on sample input before committing
- Keep the code readable and well-structured

## Notes

This repository is mainly for learning, practice, and personal reference. It is not a replacement for official editorials, but it can be a useful companion while preparing for Codeforces contests.

Happy coding!
