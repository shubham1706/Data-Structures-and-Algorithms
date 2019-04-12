# Defining Queue class and using the methods with the use of lists
class Queue(object):
    def __init__(self, head=None):
        self.storage = [head]

    # Inserting an element in the queue.
    def enqueue(self, new_element):
        self.storage.append(new_element)
    
    # Returns the value of the first element inserted.
    def peek(self):
        return self.storage[0]

    # Removes the first inserted element from the queue.
    def dequeue(self):
        return self.storage.pop(0)