Exercise 2 

## What is an atomic operation?
Atomic operations in concurrent programming are program operations that run completely independently of any other processes.

## What is a semaphore?
A semaphore is a kernel resource that provides synchronization services to the OS.
A non-negative variable which is shared between threads.
Binary semaphore can only take 2 values, and is used to implement the solution of a critical section problem.
Counting semaphore can take all values, used to control access to a resource that has multiple instances. 

## What is a mutex?
Locking mechanism used to synchronize access to a resource. Only 1 task can acquire the mutex. Mutual exclusion.
Wither producer or consumer can have the key/mutex and proceed with the work.

## What is the difference between a mutex and a binary semaphore?
That while a mutex is a locking mechanism that excludes access when in use, semaphore is more of a signaling mechanism,
that "informs" when the data is updated. No mutual exclusion.

## What is a critical section?
A code segment which is accessed by more than one process. Contains shared variables/resources that are needed to be 
synchronized. 

## What is the difference between race conditions and data races?
Race condition is a semantic error; when flaws occurs because of timing or ordering of events.
Data race is when >1 instructions from different threads access the same mem loc, where at least 1 is a write operation.

## List some advantages of using message passing over lock-based synchronization primitives.
Allows multiple processes to read/write to the message quee. Easier to build mmassively parallell hardware.
More tolerant of higher communication latencies.
Easier to avoid concurrency errors.

## List some advantages of using lock-based synchronization primitives over message passing.
One advantage is that we avoid data races. 




















