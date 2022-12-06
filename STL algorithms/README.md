# Heap 
Heap is a data structure that looks like a tree but have the property that every node is smaller than its parent node.
1. make_heap : 
syntax: std:: make_heap(beg(num),end(num));
2. push_heap : it is used to push new element in heap at its true position 
syntax: std:: push_heap(beg(num),end(num));
3. pop_heap :
syntax: std:: pop_heap(beg(num),end(num));
it simply swaps the element we want to pop with last element and then pop_back it from the last

# Sorting 
1. sort :
which simply sorts in ascending order
2. partial_sort :
which sorts in spacified range
3. nth_element :
after nth_element elements present in the left of the nth_element will be in unspecified order but less than nth_element and elements in the right of the nth_element will be in unspecified order but not less than nth_element.
