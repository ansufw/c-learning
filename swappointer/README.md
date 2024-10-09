# First Attempt

The variables a and b were initialized to 21 and 17, respectively. The first call to printf within the swap function shows these two values swapped, but the second call to printf in main shows the original values unchanged. Let’s examine what happened. 

C is a call-by-value (also called a pass-by-value) language, which means that when you provide an argument to a function, the value of that argument is copied into a distinct variable for use within the function. The swap function assigns the values of the objects you pass as arguments to the respective parameters. When the values of the parameters in the function are changed, the values in the caller are unaffected because they are distinct objects. Consequently, the variables a and b retain their original values in main during the second call to printf. The goal of the program was to swap the values of these two objects. By testing the program, we’ve discovered it has a bug, or defect.

# Second Attempt

To repair this bug, you can use pointers to rewrite the swap function. We use the indirection (*) operator to both declare pointers and dereference them, as shown in `secondattempt.c`.

When used in a function declaration or definition, * acts as part of a pointer declarator indicating that the parameter is a pointer to an object or function of a specific type. In the rewritten swap function, we specify two parameters, `a` and `b`, and declare them both as type pointers to int.

When you use the unary * operator in expressions within the function, the unary * operator dereferences the pointer to the object. For example, consider the following assignment:

```
pa = pb;
```

This replaces the value of the pointer pa with the value of the pointer pb. Now consider the actual assignment in the swap function:

```
*pa = *pb;
```

This dereferences the pointer pb, reads the referenced value, dereferences the pointer pa, and then overwrites the value at the location referenced by
pa with the value referenced by pb.

When you call the swap function in main, you must also place an ampersand (&) character before each variable name:
```
swap(&a,&b);
```

The unary & is the address-of operator, which generates a pointer to its operand. This change is necessary because the swap function now accepts pointers to objects of type int as parameters instead of simply values of type int.