from LinkedList import *

# Objects of nodes
n1 = Node(1)
n2 = Node(2)
n3 = Node(3)
n4 = Node(4)
n5 = Node(5)
n6 = Node(6)
n7 = Node(7)
n8 = Node(8)


# Object of LinkedList
ll = LinkedList(n1)


# Adding more nodes to the linkedlist
ll.append(n2)
ll.append(n3)
ll.append(n4)
ll.append(n6)
ll.append(n7)
ll.append(n8)


# Getting the head node or first node in the LinkedList
print(ll.head.value)

# Getting the values of node next to the head.
print(ll.head.next.value)


# Getting the node object at the desired positions
print(ll.get_position(3).value)
print(ll.get_position(6).value)
print(ll.get_position(4).value)
print(ll.get_position(7).value)


# Inserting a new node in the LinkedList
ll.insert(n5,5)
print(ll.get_position(5).value)

# Deleting nodes from the linkedlist
ll.delete(1)
ll.delete(2)
ll.delete(3)

