from Queue import *

# Instantiating the Queue
q = Queue(1)

# Inserting the elements in the queue
q.enqueue(2)
q.enqueue(3)
q.enqueue(4)
q.enqueue(5)

# Peeking at the first element
print(q.peek())

# Removing some element
print(q.dequeue())
print(q.dequeue())

# Peeking at the element that is first now
print(q.peek())

# Inserting a new element
q.enqueue(6)

# Removing some element
print(q.dequeue())
print(q.dequeue())
print(q.dequeue())

# Peeking 
print(q.peek())