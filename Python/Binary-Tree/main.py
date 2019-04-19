from BinaryTree import *


tree = BinaryTree(1)
tree.root.left = Node(2)
tree.root.right = Node(3)
tree.root.left.left = Node(4)
tree.root.left.right = Node(5)



print(tree.search(4))
print(tree.search(6))

# We have done pre order traversing here
print(tree.print_tree())
