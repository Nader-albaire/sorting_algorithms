Project Description: 0x1B. C - Sorting Algorithms & Big O

The "0x1B. C - Sorting algorithms & Big O" project challenges students to implement various sorting algorithms in the C programming language. The project is designed for pairs of students who are expected to pair program for the mandatory part. Key learning objectives include understanding and implementing at least four different sorting algorithms, grasping the concept of Big O notation to evaluate time complexity, selecting the most appropriate sorting algorithm for a given input, and comprehending the characteristics of stable sorting algorithms.

Requirements:

    Editors: Students are allowed to use vi, vim, or emacs.
    Compilation: All files will be compiled on Ubuntu 20.04 LTS using gcc with specific options (-Wall -Werror -Wextra -pedantic -std=gnu89).
    Style: Code should adhere to the Betty style, checked using betty-style.pl and betty-doc.pl.
    Restrictions: No global variables, no more than 5 functions per file, and unless specified otherwise, the standard library is off-limits (printf, puts, etc., are forbidden).
    Files and Documentation: A README.md file is mandatory. Code should be organized with header files (sort.h), including function prototypes and guarded against multiple inclusion.
    Testing: Students can use provided main.c files for testing but aren't required to push them to the repository.

This project not only focuses on the technical implementation of sorting algorithms but also aims to reinforce essential programming skills, collaboration in pair programming, and understanding algorithmic complexity. Students are encouraged to explore various sorting algorithms, evaluate their efficiency using Big O notation, and apply their knowledge to select the most suitable algorithm for different scenarios.




# Project Description: 0x1B. C - Sorting Algorithms & Big O

In this C programming project, pairs of students implement sorting algorithms, grasp Big O notation for time complexity, and understand the selection of algorithms. Key objectives include implementing four sorting algorithms, adhering to coding standards, and documenting code. Restricted use of the standard library enhances algorithmic understanding. The project encourages collaboration, reinforcing both technical and collaborative skills.

:computer: Happy coding! :rocket:

```plaintext
  ┏━━━━━━━━━━━━━━━┓   ┏━━━━━━━━━━━━━━━┓   ┏━━━━━━━━━━━━━━━┓
  ┃  ♠ 2          ┃   ┃  ♥ 7          ┃   ┃  ♦ K          ┃
  ┃     ┏━━━━┓    ┃   ┃     ┏━━━━┓    ┃   ┃     ┏━━━━┓    ┃
  ┃     ┃ ♠  ┃    ┃   ┃     ┃ ♥  ┃    ┃   ┃     ┃ ♦  ┃    ┃
  ┃     ┃    ┃    ┃   ┃     ┃    ┃    ┃   ┃     ┃    ┃    ┃
  ┃     ┃ 2  ┃    ┃   ┃     ┃ 7  ┃    ┃   ┃     ┃ K  ┃    ┃
  ┃     ┗━━━━┛    ┃   ┃     ┗━━━━┛    ┃   ┃     ┗━━━━┛    ┃
  ┃         ♠ 2   ┃   ┃         ♥ 7   ┃   ┃         ♦  K  ┃
  ┗━━━━━━━━━━━━━━━┛   ┗━━━━━━━━━━━━━━━┛   ┗━━━━━━━━━━━━━━━┛



 _____ _               _                _____           _
|  __ (_)             | |              |  __ \         | |
| |__) | |__   __ __ _| |_   _ ___    | |__) |__ _  __| | ___
|  ___/| '_ \ / _` | | | | / __|   |  _  // _` |/ _` |/ _ \
| |    | | | | (_| | | |_| \__ \   | | \ \ (_| | (_| |  __/
|_|    |_| |_|\__,_|_|\__,_|___/   |_|  \_\__,_|\__,_|\___|
                                     
     ____  _     _     _____ _           _
    |  _ \| |   (_)   |  __ (_)         | |
    | |_) | |__  _ _  | |__) |__ _  __ _| |_
    |  _ <| '_ \| | | |  ___/ '_ \|_  / | __|
    | |_) | | | | | |_| | |   | | | |/ /| | |_
    |____/|_| |_|_|\__, |_|   |_| |_/___|\__|
                    __/ |
                   |___/




N     A     L     BBBBB    A     I RRRRR  EEEEE       I I I A A A A   BBBBB   U   U BBBBB   A A A A    K  K  EEEEE RRRRR
NN    A A    L     B    B  A A    I R    R E           I   A     A   B    B  U   U B    B  A     A    K K   E     R    R
N N  A   A   L     BBBBB  A   A   I RRRRR  EEEE        I   AAAAA A   BBBBB   U   U BBBBB  AAAAA AAAAA K     EEEE  RRRRR
N  N AAAAA   L     B    B AAAAA   I R  R   E           I   A     A   B    B  U   U B    B  A     A    K K   E     R  R
N   NA     A  LLLLL BBBBB A     A  I R   RR EEEEE     I I I A     A   BBBBB    UUU  BBBBB  A     A    K  K  EEEEE R   RR

