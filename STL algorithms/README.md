<h1> Land of Permutation </h1>
<h2>Heap </h2>
Heap is a data structure that looks like a tree but have the property that every node is smaller than its parent node.
<h3><b>1. make_heap : </b></h3>
<b>syntax:</b> std:: make_heap(beg(num),end(num));
<h3><b>2. push_heap : </b></h3>
it is used to push new element in heap at its true position <br>
<b>syntax:</b> std:: push_heap(beg(num),end(num));
<h3><b>3. pop_heap :</b></h3>
<b>syntax:</b> std:: pop_heap(beg(num),end(num));<br>
it simply swaps the element we want to pop with last element and then pop_back it from the last

<h2>Sorting </h2>
<h3><b>1. sort :</h3></b>
which simply sorts in ascending order
<h3><b>2. partial_sort :</h3></b>
which sorts in spacified range
<h3><b>3. nth_element :</h3></b>
after nth_element elements present in the left of the nth_element will be in unspecified order but less than nth_element and elements in the right of the nth_element will be in unspecified order but not less than nth_element.
<h3><b>4. sort_heap :</h3></b>
<h3><b>5. inplace_merge :</h3></b>

<h2>Partitioning </h2>
<h3><b>1. partition </h3></b>
<h3><b>2. partition_point </h3></b>
