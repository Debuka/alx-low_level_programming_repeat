C - malloc, free

Tasks
0. Float like a butterfly, sting like a bee
mandatory
Write a function that creates an array of chars, and initializes it with a specific char.

1. The woman who has no imagination has no wings
mandatory
Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.

2. He who is not courageous enough to take risks will accomplish nothing in life
mandatory
Write a function that concatenates two strings.

3. If you even dream of beating me you'd better wake up and apologize
mandatory
Write a function that returns a pointer to a 2 dimensional array of integers.

Prototype: int **alloc_grid(int width, int height);
Each element of the grid should be initialized to 0
The function should return NULL on failure
If width or height is 0 or negative, return NULL

4. It's not bragging if you can back it up
mandatory
Write a function that frees a 2 dimensional grid previously created by your alloc_grid function.


5. It isn't the mountains ahead to climb that wear you out; it's the pebble in your shoe
#advanced
Write a function that concatenates all the arguments of your program.

Prototype: char *argstostr(int ac, char **av);
Returns NULL if ac == 0 or av == NULL
Returns a pointer to a new string, or NULL if it fails
Each argument should be followed by a \n in the new string

6. I will show you how great I am
#advanced
Write a function that splits a string into words.

Prototype: char **strtow(char *str);
The function returns a pointer to an array of strings (words)
Each element of this array should contain a single word, null-terminated
The last element of the returned array should be NULL
Words are separated by spaces
Returns NULL if str == NULL or str == ""
If your function fails, it should return NULL
