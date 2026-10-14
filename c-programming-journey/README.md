# C Programming Journey

80 beginner-friendly C programs. Every program has:
- a full explanation at the top of the `.c` file: what it does, how it works, the output (as a comment), and the concept learned

## How to compile and run
```
gcc -Wall -o program 01_basics/01_hello_world.c
./program
```
On Windows (MinGW) run `program.exe` instead of `./program`.

## Contents

### Basics (01_basics/) - I/O, variables, operators, conditions, switch, characters

| # | Program | Concept |
|---|---|---|
| 1 | [Hello World](01_basics/01_hello_world.c) | Basic program structure and output. |
| 2 | [Variables and Data Types](01_basics/02_variables.c) | Variables, data types and format specifiers. |
| 3 | [Add Two Numbers](01_basics/03_add_two_numbers.c) | Input, variables and arithmetic operators. |
| 4 | [Subtract Two Numbers](01_basics/04_subtract_numbers.c) | Subtraction and expression evaluation. |
| 5 | [Multiply Two Numbers](01_basics/05_multiply_numbers.c) | Multiplication and arithmetic operators. |
| 6 | [Divide Two Numbers](01_basics/06_divide_numbers.c) | Floating-point arithmetic and conditional statements. |
| 7 | [Check Even or Odd](01_basics/07_even_odd.c) | Modulus operator and if-else. |
| 8 | [Check Positive, Negative or Zero](01_basics/08_positive_negative.c) | Comparison operators and else if. |
| 9 | [Largest of Two Numbers](01_basics/09_largest_two.c) | Comparison and conditional selection. |
| 10 | [Largest of Three Numbers](01_basics/10_largest_three.c) | Logical operators and multiple conditions. |
| 11 | [Check Leap Year](01_basics/11_leap_year.c) | Combining logical conditions. |
| 12 | [Simple Calculator](01_basics/12_simple_calculator.c) | switch, case, break and arithmetic operations. |
| 13 | [Check Vowel or Consonant](01_basics/13_vowel_consonant.c) | Characters, nested conditions and the ctype.h library. |
| 14 | [Identify Character Type](01_basics/14_character_type.c) | Standard character-classification functions. |
| 15 | [Find ASCII Value of a Character](01_basics/15_ascii_value.c) | Character representation and type conversion. |
| 16 | [Swap Two Numbers Using a Temporary Variable](01_basics/16_swap_temporarily.c) | Assignment and variable manipulation. |
| 17 | [Swap Two Numbers Without a Temporary Variable](01_basics/17_swap_without_temp.c) | Arithmetic assignment and tracing a program step by step. |
| 18 | [Calculate Simple Interest](01_basics/18_simple_interest.c) | Using a formula with input and calculation. |
| 19 | [Area of a Circle](01_basics/19_area_circle.c) | Constants, math expressions and input validation. |
| 20 | [Grade Calculator](01_basics/20_grade_calculator.c) | if-else-if chains and range checking. |

### Loops (02_loops/) - for, while, do-while, digits, primes, GCD and LCM

| # | Program | Concept |
|---|---|---|
| 1 | [Print Natural Numbers](02_loops/01_natural_numbers.c) | for loop. |
| 2 | [Print Numbers in Reverse](02_loops/02_reverse_count.c) | Decrementing loop. |
| 3 | [Print Even Numbers](02_loops/03_even_numbers.c) | Loop with a step of 2. |
| 4 | [Print Odd Numbers](02_loops/04_odd_numbers.c) | Loop with a step of 2. |
| 5 | [Sum of Natural Numbers](02_loops/05_sum_natural.c) | Accumulator pattern. |
| 6 | [Multiplication Table](02_loops/06_multiplication_table.c) | Loop with a fixed range. |
| 7 | [Factorial](02_loops/07_factorial.c) | Product accumulator and overflow limits. |
| 8 | [Fibonacci Series](02_loops/08_fibonacci.c) | Loops and variable shifting. |
| 9 | [Count Digits](02_loops/09_count_digits.c) | do-while loop and integer division. |
| 10 | [Sum of Digits](02_loops/10_sum_digits.c) | Extracting digits with % and /. |
| 11 | [Reverse a Number](02_loops/11_reverse_number.c) | Building a number digit by digit. |
| 12 | [Palindrome Number](02_loops/12_palindrome_number.c) | Reverse and compare. |
| 13 | [Armstrong Number](02_loops/13_armstrong_number.c) | Nested loops and digit processing. |
| 14 | [Prime Number](02_loops/14_prime_number.c) | Flag variable and optimized loop limit. |
| 15 | [Prime Numbers in a Range](02_loops/15_primes_in_range.c) | Nested loops. |
| 16 | [GCD (Greatest Common Divisor)](02_loops/16_gcd.c) | Euclid's algorithm. |
| 17 | [LCM (Least Common Multiple)](02_loops/17_lcm.c) | Using GCD to find LCM. |
| 18 | [Perfect Number](02_loops/18_perfect_number.c) | Divisors and accumulation. |
| 19 | [Calculate Power](02_loops/19_power_calculation.c) | Repeated multiplication. |
| 20 | [Decimal to Binary](02_loops/20_decimal_to_binary.c) | Number systems, arrays and loops. |

### Pattern Printing (03_patterns/) - nested loops with stars, numbers and letters

| # | Program | Concept |
|---|---|---|
| 1 | [Right Triangle](03_patterns/01_right_triangle.c) | Nested loops. |
| 2 | [Inverted Triangle](03_patterns/02_inverted_triangle.c) | Nested loops with a decreasing outer loop. |
| 3 | [Solid Square](03_patterns/03_square.c) | Nested loops. |
| 4 | [Hollow Square](03_patterns/04_hollow_square.c) | Conditions inside nested loops. |
| 5 | [Pyramid](03_patterns/05_pyramid.c) | Spaces plus stars in nested loops. |
| 6 | [Inverted Pyramid](03_patterns/06_inverted_pyramid.c) | Nested loops. |
| 7 | [Diamond](03_patterns/07_diamond.c) | Combining two patterns. |
| 8 | [Right Number Triangle](03_patterns/08_right_number_triangle.c) | Printing the column counter. |
| 9 | [Inverted Number Triangle](03_patterns/09_inverted_number_triangle.c) | Nested loops with numbers. |
| 10 | [Number Pyramid](03_patterns/10_number_pyramid.c) | Up and down counting. |
| 11 | [Floyd's Triangle](03_patterns/11_floyd_triangle.c) | Counter that keeps growing. |
| 12 | [Binary Triangle](03_patterns/12_binary_triangle.c) | Using the modulus operator in patterns. |
| 13 | [Alphabet Triangle](03_patterns/13_alphabet_triangle.c) | Characters and ASCII in loops. |
| 14 | [Repeated Number Triangle](03_patterns/14_repeated_number_triangle.c) | Row number vs column number. |
| 15 | [Hollow Triangle](03_patterns/15_hollow_triangle.c) | Conditions inside nested loops. |
| 16 | [Hollow Pyramid](03_patterns/16_hollow_pyramid.c) | Conditions inside nested loops. |
| 17 | [X Pattern](03_patterns/17_x_pattern.c) | Diagonals in a grid. |
| 18 | [Plus Pattern](03_patterns/18_plus_pattern.c) | Middle row and column logic. |
| 19 | [Checkerboard](03_patterns/19_checkerboard.c) | Alternating pattern with %. |
| 20 | [Hourglass](03_patterns/20_hourglass.c) | Combining inverted and normal pyramids. |

### Arrays (04_arrays/) - traversal, searching, sorting, insert/delete, rotation, matrices

| # | Program | Concept |
|---|---|---|
| 1 | [Read and Display an Array](04_arrays/01_array_input_output.c) | Array input, output and traversal. |
| 2 | [Sum of Array Elements](04_arrays/02_array_sum.c) | Traversal and accumulation. |
| 3 | [Average of Array Elements](04_arrays/03_array_average.c) | Averages and type choice. |
| 4 | [Find Largest Element](04_arrays/04_largest_element.c) | Finding a maximum. |
| 5 | [Find Smallest Element](04_arrays/05_smallest_element.c) | Finding a minimum. |
| 6 | [Reverse an Array](04_arrays/06_reverse_array.c) | Reverse traversal. |
| 7 | [Linear Search](04_arrays/07_linear_search.c) | Searching and break. |
| 8 | [Count Even and Odd Elements](04_arrays/08_count_even_odd.c) | Counters and modulus. |
| 9 | [Copy an Array](04_arrays/09_copy_array.c) | Array assignment element by element. |
| 10 | [Merge Two Arrays](04_arrays/10_merge_arrays.c) | Combining arrays with index offsets. |
| 11 | [Second Largest Element](04_arrays/11_second_largest.c) | Two-pass searching. |
| 12 | [Sort in Ascending Order](04_arrays/12_sort_ascending.c) | Bubble sort. |
| 13 | [Sort in Descending Order](04_arrays/13_sort_descending.c) | Bubble sort. |
| 14 | [Frequency of Each Element](04_arrays/14_frequency_elements.c) | Counting duplicates with a marker array. |
| 15 | [Remove Duplicate Elements](04_arrays/15_remove_duplicates.c) | Shifting elements. |
| 16 | [Insert an Element](04_arrays/16_insert_element.c) | Insertion in an array. |
| 17 | [Delete an Element by Position](04_arrays/17_delete_element.c) | Deletion in an array. |
| 18 | [Rotate Array Left](04_arrays/18_rotate_left.c) | Array rotation. |
| 19 | [Rotate Array Right](04_arrays/19_rotate_right.c) | Array rotation. |
| 20 | [Matrix Addition](04_arrays/20_matrix_addition.c) | 2D arrays. |
