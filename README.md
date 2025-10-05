# recursion-cpp

### **Experiment 1: Factorial Calculation using Recursion**

**Aim:** To calculate the **factorial** of a non-negative integer using a recursive function.

**Theory:** This program uses **recursion**, where the function `fact(n)` calls itself repeatedly to solve a smaller sub-problem. The **base case** is defined for $n=0$ or $n=1$, where the function returns $1$, providing a termination point for the recursion. The **recursive step** is $n! = n \times (n-1)!$, which breaks down the problem until it hits the base case.

**Algorithm:**
1.  **Define the function `fact(int n)`:**
    a.  Implement the **base case**: If $n$ is $0$ or $1$, return $1$.
    b.  Implement the **recursive step**: Otherwise, return $n$ multiplied by the result of calling `fact(n - 1)`.
2.  **In `main`:**
    a.  Prompt the user to enter a number and store it in variable `n`.
    b.  Call the `fact(n)` function.
    c.  Print the result in the format: "$n$! = [Factorial Value]".

***

### **Experiment 2: Sum of Natural Numbers using Recursion**

**Aim:** To calculate the sum of all natural numbers up to a given positive integer $n$ using a recursive function.

**Theory:** This program calculates the sum $1 + 2 + 3 + \dots + n$ through recursion. The **base case** is defined for $n \le 1$, where the sum is $1$. The **recursive formula** for the sum is $\text{sum}(n) = n + \text{sum}(n-1)$, where the function adds the current number $n$ to the sum of all preceding numbers.

**Algorithm:**
1.  **Define the function `sum(int n)`:**
    a.  Implement the **base case**: If $n$ is less than or equal to $1$, return $1$.
    b.  Implement the **recursive step**: Otherwise, return the sum of $n$ and the result of calling `sum(n - 1)`.
2.  **In `main`:**
    a.  Prompt the user to enter a number and store it in variable `n`.
    b.  Call the `sum(n)` function.
    c.  Print the result in the format: "Sum upto $n$ = [Sum Value]".

***

### **Experiment 3: Reverse a String using Recursion**

**Aim:** To reverse a given string by printing its characters in reverse order using a recursive function.

**Theory:** This program reverses a string using a recursive function `revStr` that takes a character pointer `*str`. The core idea is that the function recursively calls itself on the *next* character (`str+1`) before printing the *current* character (`*str`).
* The **base case** is reached when the function encounters the null terminator (`\0`) at the end of the string, at which point the recursion stops.
* The **recursive calls** build up a stack of characters. As the stack unwinds, the characters are printed in the reverse order of their traversal, thus reversing the string.

**Algorithm:**
1.  **Define the function `revStr(char *str)`:**
    a.  Implement the **base case**: Check if the character pointed to by `*str` is the null terminator (`\0`); if so, the recursion stops (the function returns implicitly).
    b.  Implement the **recursive step**: If it is not the null terminator, recursively call `revStr` with `str+1` (the next character's address).
    c.  **Output Step**: Immediately after the recursive call returns, print the current character `*str`.
2.  **In `main`:**
    a.  Declare a character array `n` to hold the string.
    b.  Prompt the user to enter a string and read the input into `n`.
    c.  Call the `revStr(n)` function to print the reversed string.

***

### **Experiment 4: Reverse a Number using Recursion**

**Aim:** To reverse the digits of a given integer using a recursive function.

**Theory:** This program reverses the digits of a number by repeatedly using the modulo and division operators within a recursive function `revNum`.
* The **base case** is when the number $n$ becomes $0$, at which point the recursion stops.
* The last digit of the number is obtained using the modulo operator ($n \% 10$) and is printed *before* the recursive call.
* The number is then reduced by dividing it by $10$ ($n / 10$) for the next recursive call. This sequence prints the digits in reverse order.

**Algorithm:**
1.  **Define the function `revNum(int n)`:**
    a.  Implement the **base case**: If $n$ is $0$, the recursion stops.
    b.  **Output Step**: Print the last digit of $n$ using `n % 10`.
    c.  Implement the **recursive step**: Call `revNum` with the new number `n / 10`.
2.  **In `main`:**
    a.  Prompt the user to enter a number and store it in variable `num`.
    b.  Call the `revNum(num)` function to print the reversed number.

***

### **Conclusion**

These four experiments effectively demonstrate the power and versatility of **recursion** in C++. Recursion is shown to be a suitable technique for problems like calculating a factorial or a sum (mathematical functions) and for manipulating sequences like strings and integers (data processing) by relying on a defined base case to terminate the process and prevent infinite loops.
