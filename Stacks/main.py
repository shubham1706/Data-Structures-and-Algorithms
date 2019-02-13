from Stack import *

# Instantiating the Node 
n1 = Node(1)
n2 = Node(2)
n3 = Node(3)
n4 = Node(4)
n5 = Node(5)
n6 = Node(6)

# Instantiating the Stack 
stack = Stack(n1)

# Using operations on the stack
stack.push(n2)
stack.push(n3)
stack.push(n4)
stack.push(n5)
print(stack.pop().value)
print(stack.pop().value)
print(stack.pop().value)
print(stack.pop().value)
print(stack.pop().value)
print(stack.pop())
stack.push(n6)
print(stack.pop().value)

