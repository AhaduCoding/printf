# Readme _printf function 📚
------------

Custom implementation of the function `printf` as a project for Holberton School. In this project we apply the knowledge that we have gotten  in C programming language.

------------

### Description of function 📚
The functions in the `_printf()`  produce output according to a format . This function returns the number of characters printed, excluding the null byte used to end output to strings. To use this fuction is needed to include the header file `holberton.h`.

#### Formats 🛠
* **%c:** prints characters.
* **%s:** prints strings.
* **%d:** prints decimal numbers.
* **%i:** prints integers numbers.
* **%b:** the unsigned int argument is converted to binary.
* **%u:** prints an unsigned decimal number.
* **%o:** prints a number in octal (base8).
* **%x:** prints a number in hexadecimal (base 16).
* **%X** prints a number in uppercase hexadecimal.
* **%p** prints the address of a pointer.
* **%r:** reverses a string.
* **%R:** prints a string in ROT13 base.

------------

### Prototype
`int _printf(const char *format, ...);`

------------
### Compile de file ⚙
To compile a file with the function is necessary to add all the `*.c` involved in the program (functions, main files, etc). For that reason to compile type:

`gcc -Wall -Werror -Wextra -pedantic *.c -o name_of_executable`

To execute te program type:
`./name_of_executable`

------------


### Examples of use:
##### Print chars:
* Input: `_printf("Printing the char %c\n", 'C');`

* Output: `Printing the char C`

##### Print strings:
* Input: `_printf("%s\n", "Holberton School");`

* Output: `Holberton School`

##### Print decimal numbers:
* Input: `_printf("The number %i is smaller than %d\n", 9, 10);`

* Output: `The number 9 is smaller than 10`

##### Print binaries numbers:
* Input: `_printf("Number 10 in base 2 is: %b\n",  10);`

* Output: `Number 10 in base 2 is: 1010`

##### Print numbers in octal (base 8):
* Input: `_printf("Number 10 in base 8 is: %\o",  10);`

* Output: `Number 10 in base 8 is: 12`

##### Print numbers as Hexadecimals (base 16):
* Input: `_printf("Number 10 in base 16 is: %x, and uppercased is %X",  10);`

* Output: `Number 10 in base 16 is a, and uppercased is A`

##### Print strings showing non-printable characters:
* Input: `_printf("%S\n", "Holberton\nSchool");`

* Output: `Holberton\x0ASchool`

##### Print reversed strings:
* Input: `_printf("%r\n", "Holberton");`

* Output: `notrebloH`

##### Print strings in ROT13 base:
* Input: `_printf("%r\n", "Holberton");`

* Output: `Ubyoregba`

------------
### Files Description
| File  |Description   |
| ------------ | ------------ |
|**_printf.c()**   | Contains the main function of  _printf   |
| **functions.c** |Contains: <br> -  **print_c:** function which allows to print characters.<br>- **print_s:** function which allows to print characters.<br>- **print_por:** process the character `%`.<br>- **print_id:** prints both integers and decimal numbers.|
|**functions2.c**|Contains:<br>- **impresion_o:** prints a base8 number.<br>-**print_u:** prints unsigned int<br>-**print_o:** convert the number to octal and sends the results to impresion_o.<br>-**print_2X:** converts and prints a decimal number to 2 digits Hexadecimal.<br>-**print_S:** prints the non-printable characters. |
|**functions3.c**|Contains:<br>-**switch_h:** select the character for hexadecimals.<br>-**impresion_x:** prints the hexadecimal number.<br>-**print_x:** convert the number to hexadecimal and sends the number to impresion_x.|
|**functions4.c**|Contains:<br>-switch_H, impresion_x, print_x. Prints hexadecimal number but uppercase.|
|**functions5.c**|Contains:<br>-**print_R:** prints a ROT13 string.<br>-**print_r:** prints a reversed string.<br>-**print_p:** prints the adress of a pointer.|

------------

### Authors

* Jorge Zafra.
* Carlos Molano.
