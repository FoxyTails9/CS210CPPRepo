1 (9/14/2026 1pm):Fixed Stack.h to match the interface required in the assignment, and updated main.cpp so its function calls matched 
the actual names in Stack.h (peek, isFull, etc.). This mattered because if main didn't call the exact function names 
declared in the header, the program wouldn't compile at all.

2 (9/14/2026 4pm):Implemented push, pop, peek, isEmpty, isFull, and size, and tested that each worked correctly. isEmpty and isFull just
return a bool from a single comparison against topIndex. For push, pop, and peek, I added if-statements checking 
isFull()/isEmpty() first so the array is never written to or read from out of bounds. When those checks fail, the function 
prints a message and returns a sentinel value (or just returns early (for push)) instead of crashing. I chose that over 
throwing an exception since we haven't covered exceptions in this course yet so that was the simplest way to fail safely.

3 (9/14/2026 10pm):Answered the reflection questions, making sure each answer was specific to my own variable names (topIndex, data) and 
function behavior rather than a generic stack description to match my code. Looked over the code and make some minor changes here and 
there to double-check that it's running fine.
