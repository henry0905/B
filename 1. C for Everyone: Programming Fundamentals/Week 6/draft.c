#include <stdio.h>   
int main(void) {
    int  miles = 26, yards = 385;
    int kilometers;
    kilometers = 1.609 * (miles + yards/1760.0);
    printf("\nA marathon is %d kilometers.\n", kilometers);
    int a[10] = {1,2,3,4,5,6,7,8,9,10}, i = 6 ;
    int *p = &a[0];
    printf("%d\n", *(p + i));

    int d = 1, b = 2, c = 3;
  //  printf ("Cau 15 %d \n",  d - b * c );
  //  printf ("Cau 16 %d \n",  c / d * b );
    printf ("Cau 17 %d \n",  d++ + --b );
    /*
1. Dennis Ritchie invented C at Bell Labs
2. True
3. 1,3,4
4. Prints HELLO WORLD followed by a new line
5. A circles area
6. %d
7. its an infinite loop
8. It should be return 0;
9. a % b 
3
10. b % a
1
11. a < b
1
12. c < b && a > 3
0
13. a / b > c
0
14. c = a++
3
15. a - b * c
-8 SAI
-5
16. c / a * b
0 SAI
6
17. a++ + --b
7 SAI
2
18. b = a = c
3 DUNG
19.  i && j
0
20. !!i
0
21.  i || !k
0
22. (i && (j = k)) || (k > j)
1
23. If a function’s declaration is int foo(void):
The function has no arguments

24. In ANSI standard C(1989) code - this is what we are teaching- declarations can occur in a for statement as in 

for(int i; i < 10; i++0 …
False DUNG

25. What happens when the return statement has a double expression and the function return type is int?
Nothing SAI
This causes a run-time error SAI

26. int foobar(int* n){
     *n = *n +1;
     return *n;
}

foobar(k) = 7, k = 7

27. A variable declared in a inner block that has the same name as one in the surrounding block causes an error.
False

28. Question 28
The original intent of using register int i; was


It was intended to compile optimized code

29. When declaring fact() why not use double fact() so that you do not have integer overflow?

There would be problems with accuracy.

30. Question 30
True/False - Factorial can only be computed recursively.
False 

31. int mystery(int p, int q){
     
    int r;
    if ((r = p % q) == 0)
        return q; 
    else return mystery(q, r);
}
When called with mystery(2, 6) it will return

2

32. When called with mystery(7, 91) it will return
7

33. A while can always be used to replace a for.
True

34. True/ False An if-else statement can always replace an if statement. 
True

35. If you declare the array char mystr[10];

None of these

36. int data[5] = {0 ,1, 2, 3, 4}, sum = 0 , i;

for (i = 0; i < 5 ; i++)
    sum = sum + data[i];
printf(“%d\n”, sum);

10

37. int a[10] = {1,2,3,4,5,6,7,8,9,10}, i = 6 ;
int *p = &a[0];
printf(“%d\n”, *(p + i));

7

38. True/False: The declaration char* str = & a[0]; where char a[5] = “abcd”;
The value of *str is the char ‘a’;

False SAI
True

39. The input function scanf() uses “call by reference” to pass in argument values.
True Dung


40. True/False mergesort is less efficient than bubblesort for very large sorting problems.
True SAI
False

41. if p and q are pointers to double and x and y are double which of the following is legal:
SAI p = &5.15
y = *q; Dung
    */
 }  