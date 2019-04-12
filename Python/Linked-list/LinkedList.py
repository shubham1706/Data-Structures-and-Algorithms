# Defining a class for node or an element with attributes value and next node.
class Node(object):
    def __init__(self, value):
        self.value = value
        self.next = None
        
# Defining a class for LinkedList so nodes can be manipulated.
class LinkedList(object):
    def __init__(self, head=None):
        self.head = head
        
    # Method to add a new node in LinkedList.
    def append(self, new_node):
        current = self.head
        if self.head:
            while current.next:
                current = current.next
            current.next = new_node
        else:
            self.head = new_node
            
    # Method to return the node at the query position.
    def get_position(self, position):
        
        current = self.head
        counter = 1

        if position < 1:
            return None

        while (current and counter<=position):
            if counter == position:
                return current
            current = current.next
            counter +=1
        return None
        
    # Method to insert a new node or element at the desired position.
    def insert(self, new_node, position):

        current = self.head
        counter = 1

        if position>1:
            while current and counter<position:
                if counter == position-1:
                    new_node.next = current.next
                    current.next = new_node
                current = current.next
                counter +=1

        elif position ==1:
            new_node.next = self.head
            self.head = new_node

    # Method to remove a node from the linkedlist.
    def delete(self, value):

        current = self.head
        previous = None
        while current.value != value and current.next:
            previous = current
            current = current.next

        if current.value == value:
            if previous:
                previous.next = current.next
            else:
                self.head = current.next