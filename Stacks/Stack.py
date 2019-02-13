# Defining a class for node or an element with attributes value and next node.
class Node(object):
    def __init__(self, value):
        self.value = value
        self.next = None

# Defining a class for LinkedList so nodes can be manipulated.
class LinkedList(object):
    def __init__(self, head=None):
        self.head = head

    def append(self, new_node):
        current = self.head
        if self.head:
            while current.next:
                current = current.next
            current.next = new_node
        else:
            self.head = new_node

    def insert_first(self, new_node):
        new_node.next = self.head
        self.head = new_node

    def delete_first(self):
        if self.head:
            deleted_node = self.head
            temp = deleted_node.next
            self.head = temp
            return deleted_node
        else:
            return None

# Defining a class for Stack, which performs two operations: push and pop. Stack uses FIFO (First IN First OUT) policy to add or remove elements.
class Stack(object):
    def __init__(self,top=None):
        self.ll = LinkedList(top)

    # Method to push/add an element in the stack
    def push(self, new_node):
        self.ll.insert_first(new_node)

    # Method to pop/remove an element from the stack
    def pop(self):
        return self.ll.delete_first()
