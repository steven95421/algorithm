// change this to your id
static const char* student_id = "0410021" ;

//
// do your homework here
//
//


void min_heapify(int * input_array, int size, int position) {
	// I'll give you an array without ordered
	// please write an algorithm as text book
	//
	// Example:
	//      input : { 7, 14, 6, 5, 1, 3, 8 } ,7, 2
	//   expected : { 7, 14, 3, 5, 1, 6, 8 }

}

void min_heap_build(int * input_array, int size) {
	// I'll give you an array without ordered
	// please make this whole array as a min-heap tree
	//
	// Example:
	//      input : { 7, 14, 6, 5, 1, 3, 8 } ,7
	//   expected : { 1, 5, 3, 7, 14, 6, 8 }
	
}

void min_heap_insert(int * input_heap, int size, int key) {
	// I'll give you an array which is a min heap has one more space
	// (finally value 999 is not a true value)
	// please change the 999 into key
	// and make this array as a min-heap tree
	//
	// Example:
	//      input : { 1, 5, 3, 7, 14, 6, 8, 999 }, 8, 4
	//   expected : { 1, 4, 3, 5, 14, 6, 8 ,7}
	
}

void min_heap_minimum(int * input_heap, int size, int * output_key) {
	// I'll give you an array which is a min heap
	// please show the smallest value
	//
	// Example:
	//      input : { 1, 4, 3, 5, 14, 6, 8 ,7} , 8, &output_key
	//   expected : output_key == 1
	
}

void min_heap_extract(int * input_heap, int size, int * output_key) {
	// I'll give you an array which is a min heap
	// please tell me which is the smallest value
	// after delete(swap) that value , adjust array as heap
	// finall, make the final value 999 as fake
	//
	// Example:
	//      input : { 1, 4, 3, 5, 14, 6, 8 ,7} , 8, &output_key
	//   expected : { 3, 4, 6, 5, 14, 7, 8, 999} ,output_key == 1
		
}

void min_heap_sort(int* input_heap, int size) {
	//
	// you cannot use library sort function!
	//
	// I'll give you an array which is a min heap
	// please sort it
	//
	// Example:
	//      input : { 1, 4, 3, 5, 14, 6, 8 ,7} ,8
	//   expected : { 1, 3, 4, 5, 6, 7, 8, 14} 
		
}


void min_heap_decrease_key(int * input_heap, int size, int position, int decrease) {
	// I'll give you an array which is a min heap
	// the position need to be decreased by a value(ex: 5 - 5 = 0)
	// please adjust the result as a min-heap
	//
	// Example:
	//      input : { 1, 4, 3, 5, 14, 6, 8, 7}, 8, 3, 5
	//   expected : { 0, 1, 3, 4, 14, 6, 8, 7} 
	
}
