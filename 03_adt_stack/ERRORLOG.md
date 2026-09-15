at least 2 real errors you actually hit: the date, the exact compiler 
or runtime error text copied verbatim, what caused it, and how you fixed it.


date: 9/14/2026 

C:\Users\mount\Documents\GitHub\CS210CPPRepo\03_adt_stack\main.cpp: In function 'int main()':
C:\Users\mount\Documents\GitHub\CS210CPPRepo\03_adt_stack\main.cpp:21:42: error: 'class Stack' has no member named 'peak'; did you mean 'peek'?
21 |     std::cout << "After pop, top: " << s.peak() << std::endl;
|                                          ^~~~
|                                          peek
mingw32-make[3]: *** [CMakeFiles\03_adt_stack.dir\build.make:78: CMakeFiles/03_adt_stack.dir/03_adt_stack/main.cpp.obj] Error 1
mingw32-make[2]: *** [CMakeFiles\Makefile2:180: CMakeFiles/03_adt_stack.dir/all] Error 2
mingw32-make[1]: *** [CMakeFiles\Makefile2:187: CMakeFiles/03_adt_stack.dir/rule] Error 2
mingw32-make: *** [Makefile:149: 03_adt_stack] Error 2

the error was that I misspelled peek as peak in main, I went back and fixed it and the program ran fine.

date: 9/14/2026 

C:\Users\mount\Documents\GitHub\CS210CPPRepo\03_adt_stack\main.cpp: In function 'int main()':
C:\Users\mount\Documents\GitHub\CS210CPPRepo\03_adt_stack\main.cpp:23:36: error: 'class Stack' has no member named 'isfull'; did you mean 'isFull'?
23 |     std::cout << "Is full? " << (s.isfull() ? "yes" : "no") << std::endl;
|                                    ^~~~~~
|                                    isFull
mingw32-make[3]: *** [CMakeFiles\03_adt_stack.dir\build.make:78: CMakeFiles/03_adt_stack.dir/03_adt_stack/main.cpp.obj] Error 1
mingw32-make[2]: *** [CMakeFiles\Makefile2:180: CMakeFiles/03_adt_stack.dir/all] Error 2
mingw32-make[1]: *** [CMakeFiles\Makefile2:187: CMakeFiles/03_adt_stack.dir/rule] Error 2
mingw32-make: *** [Makefile:149: 03_adt_stack] Error 2

made another misspelling error and wrote isfull instead of the capitalized isFull in main, went back and fixed to the propper isFull.