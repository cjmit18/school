
This package demonstrates the classic producer-consumer concurrency pattern in Java using thread-safe communication. 
The ConcurrencyDriver creates 2 producer threads and 2 consumer threads that share a bounded buffer (ArrayBlockingQueue with capacity 5). 
Producers generate random integers and place them into the buffer, 
while consumers retrieve and process these integers. Both operations include random sleep intervals
to simulate realistic processing delays.

KEY FEATURES:

• Thread-Safe Buffer: Uses ArrayBlockingQueue to automatically handle synchronization - producers block when the buffer is full, and consumers block when empty

• Concurrent Execution: ExecutorService manages a fixed thread pool of 4 threads (2 producers, 2 consumers) running simultaneously

• Balanced Workload: Each producer generates 10 random integers (1-100), and each consumer retrieves 10 integers, ensuring all produced data is eventually consumed
