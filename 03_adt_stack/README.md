1. What value does topIndex hold immediately after construction, and why does that 
specific value make isEmpty() return the right answer with no special-casing?

The value is -1, and it works for isEmpty() because isEmpty is defined as return topIndex == -1; 
so if the stack is empty, topIndex is -1, so isEmpty() returns the boolean value of true. If even 
one element has been pushed, then topIndex becomes 0 thus making isEmpty false. The reason for why 
no special-casing is needed is that -1 is not a valid array index so it's a natural number to use
for when there is no elements in a stack.

2. Walk through push step by step, in words: what happens to data and topIndex, in what 
order, and why would swapping that order break the stack?

topIndex runs first, making it go from -1 to 0. stack Data at index topIndex = value runs after making data index 0 = 10.
That makes the top element be at index 0, and topIndex == 0, which is correct for its identity. For the second push(20),
the topIndex goes from 0 to 1 and the data of index 1 becomes 20. The reason why swaping the order breaks the stack is that 
there is no index of -1 and that causes issue with possible crashes and undefined behavior.

3. Give the time complexity of push, pop, peek, isEmpty, isFull, and size, individually, 
in Big-O. For each one, justify it by describing what your code actually does, not by 
naming the general rule for stacks.

push is O(1) because topIndex++ is one integer increment and data [topIndex] = value is one array store at a computed offset. 
No loops, no shifting, no resizing so the work is the same no matter the number of elements.

pop is O(1)  as it read the data [topIndex] once, decrements is once, and returns the read value. Because all of those steps are constant-time ones
and the fact that the top is always the last occupied slot the increase in elements doesn't change the run time.

Peek is O(1) as it reads one element at a known index and there is no traversal.

isEmpty is O(1) as it only does one comparison

isFull is O(1) as it only does one comparison like isEmpty.

size is O(1) as it's derived from the index plus 1 rather than being stored so it's free.

4. Exactly what happens in your code when push is called while the stack is full? State what 
prints (if anything), what gets returned (if anything), and whether topIndex changes. Then 
say why you chose that behavior.

When push is called on a full stack, isFull() returns true, so the function prints "Stack is full." and then returns immediately, before topIndex++ or the data[topIndex] = value 
line ever runs. Since push is declared void, it doesn't return a value in the normal sense. I picked this behavior, printing and doing nothing, because we haven't covered exceptions 
yet, so this was the simplest way to signal the problem without crashing or writing out of bounds.

5. Exactly what happens when pop or peek is called while the stack is empty? Same level of detail
as above.

When pop or peek is called on an empty stack, isEmpty() returns true in both functions. pop prints "Stack is empty. Cannot pop value." and returns -1 as a sentinel value so the caller 
has some indication something went wrong, rather than reading undefined memory from data[-1]. peek behaves the same way, printing "Stack is empty. Cannot peek value." and also returning 
-1. In both cases topIndex does not change, since neither function ever reaches the point where it would read or modify the array.

6. Your array is fixed at 100 slots. If a caller needed more room than that, what would have to 
change in your class to support it, and what would it likely cost in terms of the time complexity 
you gave in question 3?

To support more than 100 slots, data would have to stop being a fixed int data[100] array member and instead become a pointer to dynamically allocated memory, or use a vector. This would change the time 
complexity as once the array fills up, the entire contents would need to be copied into a bigger array, making that one push O(n). Every push after that, while the array isn't full would still be O(1). 
Averaged across many pushes, this makes push amortized O(1) as most pushes stay cheap, and the occasional expensive resize gets spread out over all the others.

7. Without looking anything up: if this stack were built on a linked list instead of an array, 
name one advantage and one disadvantage that trade-off would bring, based on what you already 
know about how arrays and pointers behave differently.

The advantage of using a linked list is that nodes are allocated individually, allowing the stack to grow past a fixed size, unlike a fixed array such as the one I am
using here. The disadvantage is that every push has to allocate new memory for a new node, rather than writing into a slot that already exists, like my array does with data[topIndex] = value.