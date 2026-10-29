# Interview revision guide

Start with exercises you can explain and reproduce yourself. This shortlist uses existing supplied code; no new solutions were presented as your prior work. The checks below use small sample inputs, not exhaustive tests.

## Suggested walkthrough

1. State the input, expected output and valid input range.
2. Trace a small example by hand.
3. Explain the algorithm and time/space complexity.
4. Describe a boundary case or limitation.
5. Explain how you would improve the original exercise.

## Original exercises to revisit

### 1. [Digit counting](03_Loops_and_Number_Problems/College_Wallah_Practice/01_count_digits.c)

O(d) time, O(1) space; discuss zero and negative input.

Sample build/run: **passed**.

### 2. [Iterative factorial](03_Loops_and_Number_Problems/College_Wallah_Practice/05_factorial.c)

O(n) time, O(1) space; discuss integer overflow.

Sample build/run: **passed**.

### 3. [Pair sum](05_Arrays/College_Wallah_Practice/02_pair_sum.c)

O(n²) time, O(1) additional space; explain i < j.

Sample build/run: **passed**.

### 4. [Linear search](05_Arrays/Faculty_Problem_Set/10_linear_search.c)

O(n) time; explain first match and missing elements.

Sample build/run: **passed**.

### 5. [Array extrema](05_Arrays/Independent_Practice/09_array_extrema_positions.c)

O(n) time; require n > 0 before arr[0].

Sample build/run: **passed**.

### 6. [Matrix addition](06_Matrices/Faculty_Problem_Set/06_matrix_addition.c)

O(rows × columns) time; explain compatible dimensions.

Sample build/run: **passed**.

### 7. [Matrix multiplication](06_Matrices/Faculty_Problem_Set/07_matrix_multiplication.c)

O(r1 × c1 × c2); explain c1 == r2 and zero initialization.

Sample build/run: **passed**.

### 8. [Pointer swap](08_Functions/Faculty_Problem_Set/13_swap_by_pointer.c)

O(1); C passes pointer values, enabling changes to the pointed-to objects.

Sample build/run: **passed**.

### 9. [Recursive factorial](09_Recursion/College_Wallah_Practice/01_recursive_factorial.c)

O(n) time and stack; identify base case, domain and overflow.

Sample build/run: **passed**.

### 10. [Recursive Fibonacci](09_Recursion/Faculty_Problem_Set/11_recursive_fibonacci.c)

Naive exponential recursion; discuss iterative improvement.

Sample build/run: **passed**.

### 11. [Structures](11_Structures/Faculty_Problem_Set/10_triangle_areas.c)

Explain record fields, initialization, and value passing.

Sample build/run: **passed**.

### 12. [Pointer update](10_Pointers/HackerRank_Practice/05_pointer_update.c)

Explain why both results are computed before replacing the inputs.

Sample build/run: **passed**.

### 13. [File processing](12_File_Handling/Final_Exam_Practice/06_even_odd_file_sums.c)

Explain fscanf, fclose, relative paths, and fopen failure handling.

Sample build/run: **passed**.

## Discussion questions

- Why does an array of length n have valid indices 0 through n-1?
- What happens when scanf fails or an array length is zero?
- How do an array parameter and a pointer parameter relate?
- What is the difference between printing a swap inside a function and changing caller variables?
- Why does recursive factorial need a base case? What inputs cause problems?
- Why is the naive recursive Fibonacci implementation expensive?
- How do you distinguish '=' from '==' and '&&' from '||'?
- Why must strings reserve space for a null terminator?
- Why should gets be replaced with bounded input?
- What can go wrong with fopen and why does the current directory matter?
- What happens when multiple values tie for the maximum?
- What is a structure, and when would you pass its address?

## Useful debugging examples

See [KNOWN_ISSUES.md](KNOWN_ISSUES.md). The original maximum-of-four attempt fails on tied maxima; the prime attempt mishandles values below 2; the second-largest attempt has an unfinished update branch. Be ready to explain a fix rather than claiming these attempts are finished.

The menu-based inventory, train, and patient exercises are preserved under 99_Needs_Review. They are useful design discussions but are not polished production applications.
