# Exercises needing review

These are preserved learning attempts, not corrected solutions. Moving a file here does not change its algorithm. General input validation and overflow handling have not been exhaustively audited. Files outside this folder also need appropriate input bounds.

## [99_Needs_Review/01_Basics_and_IO/HackerRank_Practice/01_hello_world_input.c](99_Needs_Review/01_Basics_and_IO/HackerRank_Practice/01_hello_world_input.c)

- Uses gets(), removed from C11; bounded input requires a separate code revision.

## [99_Needs_Review/01_Basics_and_IO/HackerRank_Practice/02_character_line_input.c](99_Needs_Review/01_Basics_and_IO/HackerRank_Practice/02_character_line_input.c)

- Uses gets(), removed from C11; bounded input requires a separate code revision.

## [99_Needs_Review/01_Basics_and_IO/ICS_Exercises/14_character_multiplication_attempt.c](99_Needs_Review/01_Basics_and_IO/ICS_Exercises/14_character_multiplication_attempt.c)

- A string literal is assigned to char; a character literal is needed.

## [99_Needs_Review/03_Loops_and_Number_Problems/Faculty_Problem_Set/17_17.c](99_Needs_Review/03_Loops_and_Number_Problems/Faculty_Problem_Set/17_17.c)

- For n below 2, execution continues and can also print Prime.

## [99_Needs_Review/04_Pattern_Printing/Faculty_Problem_Set/17_empty_pattern_attempt.c](99_Needs_Review/04_Pattern_Printing/Faculty_Problem_Set/17_empty_pattern_attempt.c)

- j == n+1 is unreachable inside the j <= n loop.

## [99_Needs_Review/05_Arrays/Faculty_Problem_Set/08_max_min_positions.c](99_Needs_Review/05_Arrays/Faculty_Problem_Set/08_max_min_positions.c)

- Minimum update compares against max instead of min.

## [99_Needs_Review/05_Arrays/Faculty_Problem_Set/09_count_vowels_attempt.c](99_Needs_Review/05_Arrays/Faculty_Problem_Set/09_count_vowels_attempt.c)

- Reads a character but tests an uninitialized integer array; loop also exceeds bounds.

## [99_Needs_Review/05_Arrays/Faculty_Problem_Set/14_swap_arrays.c](99_Needs_Review/05_Arrays/Faculty_Problem_Set/14_swap_arrays.c)

- Output uses n for the second array although its allocated length is m.

## [99_Needs_Review/05_Arrays/Faculty_Problem_Set/18_array_input_incomplete.c](99_Needs_Review/05_Arrays/Faculty_Problem_Set/18_array_input_incomplete.c)

- Incomplete program: missing closing body and intended operation.
- Did not pass the recorded C11 compiler syntax check.

## [99_Needs_Review/05_Arrays/Independent_Practice/13_swap_arrays_attempt.c](99_Needs_Review/05_Arrays/Independent_Practice/13_swap_arrays_attempt.c)

- Swapping differently sized arrays can write beyond allocated storage.

## [99_Needs_Review/05_Arrays/Independent_Practice/20_second_largest_attempt.c](99_Needs_Review/05_Arrays/Independent_Practice/20_second_largest_attempt.c)

- Second-largest update branch is commented out; result depends on input order.

## [99_Needs_Review/06_Matrices/Faculty_Problem_Set/04_matrix_diagonals.c](99_Needs_Review/06_Matrices/Faculty_Problem_Set/04_matrix_diagonals.c)

- Diagonal traversal assumes square dimensions; rectangular input can exceed a column bound.

## [99_Needs_Review/07_Strings/Faculty_Problem_Set/01_string_length.c](99_Needs_Review/07_Strings/Faculty_Problem_Set/01_string_length.c)

- Uses gets(), removed from C11; bounded input requires a separate code revision.

## [99_Needs_Review/07_Strings/Faculty_Problem_Set/02_concatenate_strings.c](99_Needs_Review/07_Strings/Faculty_Problem_Set/02_concatenate_strings.c)

- Uses gets(), removed from C11; bounded input requires a separate code revision.

## [99_Needs_Review/07_Strings/Faculty_Problem_Set/03_count_vowels.c](99_Needs_Review/07_Strings/Faculty_Problem_Set/03_count_vowels.c)

- Uses gets(), removed from C11; bounded input requires a separate code revision.

## [99_Needs_Review/07_Strings/Faculty_Problem_Set/04_word_count.c](99_Needs_Review/07_Strings/Faculty_Problem_Set/04_word_count.c)

- Uses gets(), removed from C11; bounded input requires a separate code revision.

## [99_Needs_Review/07_Strings/Faculty_Problem_Set/05_reverse_string.c](99_Needs_Review/07_Strings/Faculty_Problem_Set/05_reverse_string.c)

- Uses gets(), removed from C11; bounded input requires a separate code revision.
- Uses non-standard strrev(); portability requires review.

## [99_Needs_Review/07_Strings/Faculty_Problem_Set/06_uppercase_string.c](99_Needs_Review/07_Strings/Faculty_Problem_Set/06_uppercase_string.c)

- Uses gets(), removed from C11; bounded input requires a separate code revision.

## [99_Needs_Review/07_Strings/Faculty_Problem_Set/07_toggle_case.c](99_Needs_Review/07_Strings/Faculty_Problem_Set/07_toggle_case.c)

- Uses gets(), removed from C11; bounded input requires a separate code revision.

## [99_Needs_Review/07_Strings/Faculty_Problem_Set/08_string_skeleton.c](99_Needs_Review/07_Strings/Faculty_Problem_Set/08_string_skeleton.c)

- Empty main body: exercise skeleton only.

## [99_Needs_Review/07_Strings/Faculty_Problem_Set/09_character_frequency_attempt.c](99_Needs_Review/07_Strings/Faculty_Problem_Set/09_character_frequency_attempt.c)

- Uses gets(), removed from C11; bounded input requires a separate code revision.
- Uppercase range check uses OR, making the condition always true.

## [99_Needs_Review/07_Strings/Faculty_Problem_Set/10_palindrome_attempt.c](99_Needs_Review/07_Strings/Faculty_Problem_Set/10_palindrome_attempt.c)

- Uses gets(), removed from C11; bounded input requires a separate code revision.
- Invalid array initialization and pointer comparison instead of string comparison.
- Uses non-standard strrev(); portability requires review.
- Did not pass the recorded C11 compiler syntax check.

## [99_Needs_Review/07_Strings/Faculty_Problem_Set/11_sum_digits_in_string.c](99_Needs_Review/07_Strings/Faculty_Problem_Set/11_sum_digits_in_string.c)

- Uses gets(), removed from C11; bounded input requires a separate code revision.

## [99_Needs_Review/07_Strings/Faculty_Problem_Set/16_palindrome.c](99_Needs_Review/07_Strings/Faculty_Problem_Set/16_palindrome.c)

- Uses gets(), removed from C11; bounded input requires a separate code revision.

## [99_Needs_Review/07_Strings/Final_Exam_Practice/02_string_reverse_attempt.c](99_Needs_Review/07_Strings/Final_Exam_Practice/02_string_reverse_attempt.c)

- Uses gets(), removed from C11; bounded input requires a separate code revision.
- String reversal reads the terminator repeatedly and never terminates the destination.

## [99_Needs_Review/07_Strings/Final_Exam_Practice/11_atbash_encoder.c](99_Needs_Review/07_Strings/Final_Exam_Practice/11_atbash_encoder.c)

- Uses gets(), removed from C11; bounded input requires a separate code revision.

## [99_Needs_Review/07_Strings/Final_Exam_Practice/16_word_frequency_attempt.c](99_Needs_Review/07_Strings/Final_Exam_Practice/16_word_frequency_attempt.c)

- Uses gets(), removed from C11; bounded input requires a separate code revision.
- Temporary string construction and occurrence-count loop are incomplete/incorrect.

## [99_Needs_Review/07_Strings/Final_Exam_Practice/20_consonant_encoder.c](99_Needs_Review/07_Strings/Final_Exam_Practice/20_consonant_encoder.c)

- Uses gets(), removed from C11; bounded input requires a separate code revision.

## [99_Needs_Review/07_Strings/Final_Exam_Practice/23_replace_nth_character_attempt.c](99_Needs_Review/07_Strings/Final_Exam_Practice/23_replace_nth_character_attempt.c)

- Uses gets(), removed from C11; bounded input requires a separate code revision.
- Computed string index can exceed string length and array capacity.

## [99_Needs_Review/08_Functions/Faculty_Problem_Set/08_reverse_array_attempt.c](99_Needs_Review/08_Functions/Faculty_Problem_Set/08_reverse_array_attempt.c)

- Reverse loop starts at a, one beyond the final array index.

## [99_Needs_Review/08_Functions/Faculty_Problem_Set/11_string_length.c](99_Needs_Review/08_Functions/Faculty_Problem_Set/11_string_length.c)

- Uses gets(), removed from C11; bounded input requires a separate code revision.

## [99_Needs_Review/08_Functions/HackerRank_Practice/04_max_of_four.c](99_Needs_Review/08_Functions/HackerRank_Practice/04_max_of_four.c)

- Strict comparisons fail when equal maximum values occur.

## [99_Needs_Review/10_Pointers/Faculty_Problem_Set/04_pointer_string_length.c](99_Needs_Review/10_Pointers/Faculty_Problem_Set/04_pointer_string_length.c)

- Uses gets(), removed from C11; bounded input requires a separate code revision.

## [99_Needs_Review/10_Pointers/Faculty_Problem_Set/06_pointer_vowel_consonant_counts.c](99_Needs_Review/10_Pointers/Faculty_Problem_Set/06_pointer_vowel_consonant_counts.c)

- Uses gets(), removed from C11; bounded input requires a separate code revision.

## [99_Needs_Review/11_Structures/Faculty_Problem_Set/01_student_input.c](99_Needs_Review/11_Structures/Faculty_Problem_Set/01_student_input.c)

- ID input uses sizeof(name) for the smaller id buffer.

## [99_Needs_Review/11_Structures/Faculty_Problem_Set/11_largest_triangle_attempt.c](99_Needs_Review/11_Structures/Faculty_Problem_Set/11_largest_triangle_attempt.c)

- Two separate if branches can print more than one result.

## [99_Needs_Review/11_Structures/Faculty_Problem_Set/12_player_scores.c](99_Needs_Review/11_Structures/Faculty_Problem_Set/12_player_scores.c)

- Uses gets(), removed from C11; bounded input requires a separate code revision.

## [99_Needs_Review/11_Structures/Final_Exam_Practice/04_most_expensive_book_attempt.c](99_Needs_Review/11_Structures/Final_Exam_Practice/04_most_expensive_book_attempt.c)

- Uses gets(), removed from C11; bounded input requires a separate code revision.
- Final branch mixes the first book title with third book details; ties also need review.

## [99_Needs_Review/11_Structures/Final_Exam_Practice/10_customer_average.c](99_Needs_Review/11_Structures/Final_Exam_Practice/10_customer_average.c)

- Uses gets(), removed from C11; bounded input requires a separate code revision.
- No shopping-count zero guard; unused flexible array member needs review.

## [99_Needs_Review/11_Structures/Final_Exam_Practice/18_cricketer_skeleton.c](99_Needs_Review/11_Structures/Final_Exam_Practice/18_cricketer_skeleton.c)

- Cricketer record definition with empty main: exercise skeleton only.

## [99_Needs_Review/11_Structures/Final_Exam_Practice/21_employee_score_analysis.c](99_Needs_Review/11_Structures/Final_Exam_Practice/21_employee_score_analysis.c)

- Uses gets(), removed from C11; bounded input requires a separate code revision.

## [99_Needs_Review/11_Structures/Final_Exam_Practice/24_best_customer_attempt.c](99_Needs_Review/11_Structures/Final_Exam_Practice/24_best_customer_attempt.c)

- Uses gets(), removed from C11; bounded input requires a separate code revision.
- Best index is tracked but the current customer is printed; zero/size cases need review.

## [99_Needs_Review/12_File_Handling/Final_Exam_Practice/05_word_length_from_file.c](99_Needs_Review/12_File_Handling/Final_Exam_Practice/05_word_length_from_file.c)

- Uses gets(), removed from C11; bounded input requires a separate code revision.

## [99_Needs_Review/13_Mini_Projects/Final_Exam_Practice/12_train_manager.c](99_Needs_Review/13_Mini_Projects/Final_Exam_Practice/12_train_manager.c)

- Uses gets(), removed from C11; bounded input requires a separate code revision.
- No capacity guard or empty-list guard before accessing the most popular train.

## [99_Needs_Review/13_Mini_Projects/Final_Exam_Practice/13_patient_manager.c](99_Needs_Review/13_Mini_Projects/Final_Exam_Practice/13_patient_manager.c)

- Uses gets(), removed from C11; bounded input requires a separate code revision.
- Search/display loop bound uses p[i].id instead of the patient count.

## [99_Needs_Review/13_Mini_Projects/Independent_Practice/01_inventory_manager.c](99_Needs_Review/13_Mini_Projects/Independent_Practice/01_inventory_manager.c)

- Uses gets(), removed from C11; bounded input requires a separate code revision.

