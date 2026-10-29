# Validation report

Compiler: gcc.exe (x86_64-posix-seh-rev0, Built by MinGW-W64 project) 8.1.0

Command per source: `gcc -std=c11 -Wall -Wextra -Wpedantic -Werror=implicit-function-declaration -fsyntax-only FILE.c`. Uppercase .C sources were renamed to .c so they are treated as C.

- Checked 212 unique nonempty source files.
- Syntax passed: 210.
- Syntax failed: 2.
- Sample runtime checks: 13/13 passed.

Syntax success does not establish correctness, safe input handling, or freedom from undefined behavior. Warning-free status is not claimed. All recorded failures and selected static issues are separated under 99_Needs_Review.

## Sample checks

- [Digit counting](03_Loops_and_Number_Problems/College_Wallah_Practice/01_count_digits.c): PASS
- [Iterative factorial](03_Loops_and_Number_Problems/College_Wallah_Practice/05_factorial.c): PASS
- [Pair sum](05_Arrays/College_Wallah_Practice/02_pair_sum.c): PASS
- [Linear search](05_Arrays/Faculty_Problem_Set/10_linear_search.c): PASS
- [Array extrema](05_Arrays/Independent_Practice/09_array_extrema_positions.c): PASS
- [Matrix addition](06_Matrices/Faculty_Problem_Set/06_matrix_addition.c): PASS
- [Matrix multiplication](06_Matrices/Faculty_Problem_Set/07_matrix_multiplication.c): PASS
- [Pointer swap](08_Functions/Faculty_Problem_Set/13_swap_by_pointer.c): PASS
- [Recursive factorial](09_Recursion/College_Wallah_Practice/01_recursive_factorial.c): PASS
- [Recursive Fibonacci](09_Recursion/Faculty_Problem_Set/11_recursive_fibonacci.c): PASS
- [Structures](11_Structures/Faculty_Problem_Set/10_triangle_areas.c): PASS
- [Pointer update](10_Pointers/HackerRank_Practice/05_pointer_update.c): PASS
- [File processing](12_File_Handling/Final_Exam_Practice/06_even_odd_file_sums.c): PASS

## Compiler diagnostics

### 04_Pattern_Printing/College_Wallah_Practice/Pattern_Printing/10_alphabet_triangle_variant.c

```text
$REPOSITORY\04_Pattern_Printing\College_Wallah_Practice\Pattern_Printing\10_alphabet_triangle_variant.c: In function 'main':
$REPOSITORY\04_Pattern_Printing\College_Wallah_Practice\Pattern_Printing\10_alphabet_triangle_variant.c:14:18: warning: unused variable 'ch' [-Wunused-variable]
             char ch=(char)d;
                  ^~
```

### 04_Pattern_Printing/Faculty_Problem_Set/09_binary_checkerboard.c

```text
$REPOSITORY\04_Pattern_Printing\Faculty_Problem_Set\09_binary_checkerboard.c: In function 'main':
$REPOSITORY\04_Pattern_Printing\Faculty_Problem_Set\09_binary_checkerboard.c:7:9: warning: unused variable 'a' [-Wunused-variable]
     int a=1;
         ^
```

### 05_Arrays/Final_Exam_Practice/07_account_balance_update.c

```text
$REPOSITORY\05_Arrays\Final_Exam_Practice\07_account_balance_update.c: In function 'main':
$REPOSITORY\05_Arrays\Final_Exam_Practice\07_account_balance_update.c:5:11: warning: unused variable 'n' [-Wunused-variable]
     int i,n,t_type,id;
           ^
$REPOSITORY\05_Arrays\Final_Exam_Practice\07_account_balance_update.c: In function 'updatebalance':
$REPOSITORY\05_Arrays\Final_Exam_Practice\07_account_balance_update.c:22:9: warning: unused variable 'i' [-Wunused-variable]
     int i;
         ^
```

### 05_Arrays/Independent_Practice/08_array_addition.c

```text
$REPOSITORY\05_Arrays\Independent_Practice\08_array_addition.c: In function 'main':
$REPOSITORY\05_Arrays\Independent_Practice\08_array_addition.c:4:15: warning: unused variable 'k' [-Wunused-variable]
     int i,n,j,k;
               ^
$REPOSITORY\05_Arrays\Independent_Practice\08_array_addition.c:4:13: warning: unused variable 'j' [-Wunused-variable]
     int i,n,j,k;
             ^
```

### 05_Arrays/Independent_Practice/09_array_extrema_positions.c

```text
$REPOSITORY\05_Arrays\Independent_Practice\09_array_extrema_positions.c: In function 'main':
$REPOSITORY\05_Arrays\Independent_Practice\09_array_extrema_positions.c:4:13: warning: unused variable 'sum' [-Wunused-variable]
     int i,n,sum=0;
             ^~~
```

### 05_Arrays/Independent_Practice/10_linear_search.c

```text
$REPOSITORY\05_Arrays\Independent_Practice\10_linear_search.c: In function 'main':
$REPOSITORY\05_Arrays\Independent_Practice\10_linear_search.c:4:13: warning: unused variable 'sum' [-Wunused-variable]
     int i,n,sum=0;
             ^~~
```

### 06_Matrices/Faculty_Problem_Set/05_identity_matrix.c

```text
$REPOSITORY\06_Matrices\Faculty_Problem_Set\05_identity_matrix.c: In function 'main':
$REPOSITORY\06_Matrices\Faculty_Problem_Set\05_identity_matrix.c:7:9: warning: unused variable 'arr' [-Wunused-variable]
     int arr[n][n];
         ^~~
```

### 08_Functions/Final_Exam_Practice/15_sum_even_with_functions.c

```text
$REPOSITORY\08_Functions\Final_Exam_Practice\15_sum_even_with_functions.c: In function 'main':
$REPOSITORY\08_Functions\Final_Exam_Practice\15_sum_even_with_functions.c:6:9: warning: unused variable 'i' [-Wunused-variable]
     int i;
         ^
```

### 99_Needs_Review/01_Basics_and_IO/ICS_Exercises/14_character_multiplication_attempt.c

```text
$REPOSITORY\01_Basics_and_IO\ICS_Exercises\14_character_multiplication_attempt.c: In function 'main':
$REPOSITORY\01_Basics_and_IO\ICS_Exercises\14_character_multiplication_attempt.c:4:10: warning: initialization of 'char' from 'char *' makes integer from pointer without a cast [-Wint-conversion]
   char b="B";
          ^~~
```

### 99_Needs_Review/05_Arrays/Faculty_Problem_Set/18_array_input_incomplete.c

```text
$REPOSITORY\05_Arrays\Faculty_Problem_Set\18_array_input_incomplete.c: In function 'main':
$REPOSITORY\05_Arrays\Faculty_Problem_Set\18_array_input_incomplete.c:12:5: error: expected declaration or statement at end of input
     }
     ^
```

### 99_Needs_Review/07_Strings/Faculty_Problem_Set/10_palindrome_attempt.c

```text
$REPOSITORY\07_Strings\Faculty_Problem_Set\10_palindrome_attempt.c: In function 'main':
$REPOSITORY\07_Strings\Faculty_Problem_Set\10_palindrome_attempt.c:6:18: error: invalid initializer
     char ch[100]=strrev(a);
                  ^~~~~~
```

### 99_Needs_Review/07_Strings/Final_Exam_Practice/11_atbash_encoder.c

```text
$REPOSITORY\07_Strings\Final_Exam_Practice\11_atbash_encoder.c: In function 'removespecialcharacter':
$REPOSITORY\07_Strings\Final_Exam_Practice\11_atbash_encoder.c:4:25: warning: suggest parentheses around '&&' within '||' [-Wparentheses]
         if(!(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z')){
              ~~~~~~~~~~~^~~~~~~~~~~~~
```

### 99_Needs_Review/08_Functions/Faculty_Problem_Set/08_reverse_array_attempt.c

```text
$REPOSITORY\08_Functions\Faculty_Problem_Set\08_reverse_array_attempt.c: In function 'arrsum':
$REPOSITORY\08_Functions\Faculty_Problem_Set\08_reverse_array_attempt.c:4:11: warning: unused variable 'sum' [-Wunused-variable]
     int i,sum=0;
           ^~~
```

### 99_Needs_Review/11_Structures/Final_Exam_Practice/10_customer_average.c

```text
$REPOSITORY\11_Structures\Final_Exam_Practice\10_customer_average.c: In function 'main':
$REPOSITORY\11_Structures\Final_Exam_Practice\10_customer_average.c:12:20: warning: invalid use of structure with flexible array member [-Wpedantic]
     struct details c[3];
                    ^
```

### 99_Needs_Review/11_Structures/Final_Exam_Practice/21_employee_score_analysis.c

```text
$REPOSITORY\11_Structures\Final_Exam_Practice\21_employee_score_analysis.c: In function 'main':
$REPOSITORY\11_Structures\Final_Exam_Practice\21_employee_score_analysis.c:20:16: warning: too many arguments for format [-Wformat-extra-args]
         printf("Name:\n",i);
                ^~~~~~~~~
$REPOSITORY\11_Structures\Final_Exam_Practice\21_employee_score_analysis.c:20:16: warning: too many arguments for format [-Wformat-extra-args]
```

### 99_Needs_Review/11_Structures/Final_Exam_Practice/24_best_customer_attempt.c

```text
$REPOSITORY\11_Structures\Final_Exam_Practice\24_best_customer_attempt.c: In function 'main':
$REPOSITORY\11_Structures\Final_Exam_Practice\24_best_customer_attempt.c:14:9: warning: variable 'best_index' set but not used [-Wunused-but-set-variable]
     int best_index = -1;
         ^~~~~~~~~~
```

### 99_Needs_Review/13_Mini_Projects/Final_Exam_Practice/12_train_manager.c

```text
$REPOSITORY\13_Mini_Projects\Final_Exam_Practice\12_train_manager.c: In function 'main':
$REPOSITORY\13_Mini_Projects\Final_Exam_Practice\12_train_manager.c:36:9: warning: unused variable 'i' [-Wunused-variable]
     int i,n;
         ^
```

### 99_Needs_Review/13_Mini_Projects/Final_Exam_Practice/13_patient_manager.c

```text
$REPOSITORY\13_Mini_Projects\Final_Exam_Practice\13_patient_manager.c: In function 'patientsearch':
$REPOSITORY\13_Mini_Projects\Final_Exam_Practice\13_patient_manager.c:27:44: warning: unused parameter 'numofpatient' [-Wunused-parameter]
 void patientsearch(struct patient p[],int *numofpatient){
                                       ~~~~~^~~~~~~~~~~~
$REPOSITORY\13_Mini_Projects\Final_Exam_Practice\13_patient_manager.c: In function 'displaypatient':
$REPOSITORY\13_Mini_Projects\Final_Exam_Practice\13_patient_manager.c:52:45: warning: unused parameter 'numofpatient' [-Wunused-parameter]
 void displaypatient(struct patient p[],int *numofpatient){
                                        ~~~~~^~~~~~~~~~~~
```

