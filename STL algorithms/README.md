
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
<h1> Other Permutations </h1>
<h3>1. rotate</h3>
<h3>2. shuffle</h3>
<h3>3. next_permutation </h3>
<h3>4. prev_permutation </h3>
<h3>5. reverse</h3>
<h2>Partitoning-sort-heap </h2>
<h3>1. stable_*</h3>
Example : stable_sort , stable_partition
<h3>2. is_*</h3>
Example : is_sorted, is_partitioned, is_heap
<h3>3. is_*_untill</h3>
           
<h1> Searching techniques </h1>
<h2> Unsorted </h2>
<h3>1. find</h3>
<h3>2. adjacent_find</h3>
<h2> Sorted </h2>
<h3>1. lower_bound</h3>
<h3>2. upper_bound</h3>
<h3>3. equal_range</h3>
<h3>4. binary_search</h3> it return value true if given element is present or not and returns false if given element is not present
<h2> Searching range </h2>
<h3>1. search</h3>
<h3>2. find_end</h3>
<h3>3. find_first_of</h3>
<h2> Searching a relative value </h2>
<h3>1. min_element </h3>
<h3>2. max_element</h3>
<h3>3. minmax_element</h3>

<h1> Algos on sets </h1>
<h2> A: soted B:unsorted </h2>
<h3>1. set_difference </h3>
<h3>2. set_union</h3>
<h3>3. set_symmetric_difference</h3>
<h3>4. set_intersection</h3>
<h3>5. includes</h3> it return boolean value when all the elements of B is present in the set A.
<h3>6. merge</h3>

