# :clipboard: Printf | 42 SP
- Actual Status : finished.
- Result        : waiting evaluation
  
  Prinft is the second project at 42.
The purpose of this project is to repeat the behavior of the printf function but we only deal with some cases.

#### We need to implement the following conversions:

• %c Prints a single character.  
• %s Prints a string (as defined by the common C convention).  
• %p The void * pointer argument has to be printed in hexadecimal format.  
• %d Prints a decimal (base 10) number.  
• %i Prints an integer in base 10.  
• %u Prints an unsigned decimal (base 10) number.  
• %x Prints a number in hexadecimal (base 16) lowercase format.  
• %X Prints a number in hexadecimal (base 16) uppercase format.  
• %% Prints a percent sign.  

## 📝 Functions

| Files | Description |
| :------: | :---------: |
| ``ft_putnbr.c`` | Contains the functions that deal with hexadecimal, decimal, integers numbers and pointers. |
| ``ft_printf.c`` | Contains the principal function: the function who deal with the type of data. Also contains the function who checks if is a conversion to deal with and the functions to deal with char or strings|
| ``ft_printf.h`` | The header with functions libraries and prototypes. |
| ``Makefile`` | The automatizated compilator|


## 🛠️ Usage

In order to use this static library in your project, you must download this repository into your pc and compile the library

``` shell
$> git clone https://github.com/NataliMRocha/Printf-42.git
$> cd Printf-42
$> make
```

In your code, simply include its header:

``` C
#include "libftprintf.h"
```

And, when compiling your code, add the required flags:

``` shell
$> -L ./libftprintf -lft
```