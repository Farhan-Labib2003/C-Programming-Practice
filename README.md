# C Programming Practice

C programming coursework and practice exercises maintained by **Farhan Labib**, a CSE student at United International University.

This repository brings together my supplied C practice collections, grouped by topic so I can revisit the fundamentals, trace programs, and discuss what I learned. It includes tutorial practice, faculty problem-set work, exam exercises, and early mini-project attempts.

## At a glance

- **212 unique source files**, consolidated from three supplied archives.
- **166 exercises** in the topic folders; **46 attempts** separated under `99_Needs_Review`.
- **210 sources passed** the recorded C11 syntax check; **2 need compiler-related revision**.
- **13/13 selected sample build/run checks passed**. This does not mean all exercises were runtime-tested.
- Source algorithms were retained; filenames, organization and line endings were cleaned up. Hardcoded student IDs were replaced with a placeholder.

## Explore by topic

| Topic | Main sources | Needs review |
| --- | ---: | ---: |
| [Basics and IO](01_Basics_and_IO) | 18 | 3 |
| [Conditions and Arithmetic](02_Conditions_and_Arithmetic) | 2 | 0 |
| [Loops and Number Problems](03_Loops_and_Number_Problems) | 14 | 1 |
| [Pattern Printing](04_Pattern_Printing) | 52 | 1 |
| [Arrays](05_Arrays) | 23 | 6 |
| [Matrices](06_Matrices) | 13 | 1 |
| Strings | 0 | 17 |
| [Functions](08_Functions) | 19 | 3 |
| [Recursion](09_Recursion) | 5 | 0 |
| [Pointers](10_Pointers) | 8 | 2 |
| [Structures](11_Structures) | 7 | 8 |
| [File Handling](12_File_Handling) | 5 | 1 |
| Mini Projects | 0 | 3 |

Sources retain context such as `Faculty_Problem_Set`, `College_Wallah_Practice`, `HackerRank_Practice`, and `Final_Exam_Practice`. The original problem numbers are kept in filenames; [FILE_INDEX.md](FILE_INDEX.md) lists every exercise.

## Start here

- [Interview revision guide](INTERVIEW_GUIDE.md): selected original exercises and explanation prompts.
- [Known issues](KNOWN_ISSUES.md): incomplete, legacy and flagged attempts.
- [Validation report](VALIDATION_REPORT.md): actual checks and compiler diagnostics.
- [Preparation report](CLEANUP_REPORT.md): what was kept, consolidated and excluded.
- [Source map](SOURCE_MAP.json): original paths, archive hashes and published file hashes.

## Compile and run one exercise

Each `.c` file is a separate program. Compile one at a time, rather than linking the whole collection together. GCC with C11 support is recommended; several exercises use variable-length arrays.

From the repository root in PowerShell:

```powershell
New-Item -ItemType Directory -Force build | Out-Null
gcc -std=c11 -Wall -Wextra "05_Arrays/Faculty_Problem_Set/10_linear_search.c" -o build/example.exe -lm
.\build\example.exe
```

On Linux/macOS with GCC available:

```bash
mkdir -p build
gcc -std=c11 -Wall -Wextra "05_Arrays/Faculty_Problem_Set/10_linear_search.c" -o build/example -lm
./build/example
```

For file-handling exercises, run the executable with its exercise folder as the current directory so names such as `input1.txt` resolve. Read the selected source to see which files it opens. Example input and historical output files are retained alongside those exercises; running a program may overwrite its output file.

## Learning status

This is a learning archive, not a single finished application. Compiler success is separate from algorithm correctness. Some examples assume small positive input, omit bounds checks, or use integer arithmetic that can overflow. The review folder includes original string exercises using `gets`, non-standard `strrev`, incomplete skeletons, and selected logic errors. These have been documented rather than silently replaced with new solutions.

## Credits and ownership

The supplied folder labels identify faculty problem sets, College Wallah tutorial practice and HackerRank exercises. Those contexts and existing comments are retained. Problem statements and teaching material belong to their respective creators; this collection does not claim that every problem or reference technique originated with me. No license has been assigned to the supplied coursework.

## Connect

[GitHub](https://github.com/Farhan-Labib2003) · [LinkedIn](https://www.linkedin.com/in/farhan-labib-530402326/)
