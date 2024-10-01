1. Append Two Arrays

Read array elements:
Prompt user to enter array size.

Check if size is valid.
Read array elements using readArray function.

Merge two arrays:
Copy elements of first array to merged array.
Copy elements of second array to merged array, starting from where first array's elements end.
Print merged array using printArray function.


2. Stack using Array

Initialize stack:
Define stack as an array of size MAX_SIZE.
Initialize top of stack to -1.

Menu-driven stack operations:
Present user with options: PUSH, POP, DISPLAY, EXIT.
Perform chosen operation.

PUSH operation:
Check if stack is full.
If full, display "Stack overflow" message.
If not full, prompt user to enter value, increment top index, and assign value to stack array.

POP operation:
Check if stack is empty.
If empty, display "Stack underflow" message.
If not empty, display popped element and decrement top index.

DISPLAY operation:
Check if stack is empty.
If empty, display "The stack is empty" message.
If not empty, display elements in stack in reverse order.


3. Stack using Linked List


1. Create Stack
- Initialize top to NULL and count to 0

2. Push Element
- Allocate a new node with given data
- Set info of new node to data and ptr to top
- Update top to new node
- Increment count

3. Pop Element
- Check if top is NULL (underflow)
- If not, retrieve info of top node
- Update top to ptr of top node
- Free the popped node
- Decrement count

4. Display Stack
- Traverse from top to end of list
- Print info of each node

5. Get Top Element
- Return info of top node

6. Check Empty
- If top is NULL, print "Stack is empty"
- Else, print "Stack is not empty with count elements"

7. Destroy Stack
- Traverse from top to end of list
- Free each node
- Update top to NULL and count to 0

8. Get Stack Count
- Return countof elements in stack


4. Sparse Matrix Creation Algorithm

1. Input: Matrix size (rows, columns) and matrix elements.
2. Check: Ensure matrix size is within defined limits (10x10).
3. Initialize: Create a sparse matrix b with dimensions MAX x 3.
4. Store metadata:
	- b[0][0]: Number of rows.
	- b[0][1]: Number of columns.
5. Iterate through the input matrix a:
	- For each non-zero element a[i][j]:
		- Store row index i in b[k][0].
		- Store column index j in b[k][1].
		- Store element value a[i][j] in b[k][2].
		- Increment k.
6. Store number of non-zero elements: b[0][2] = k - 1.
7. Output: Print the sparse matrix b in the format of 3 triples (row, column, value).

5. Queue Using Array


1. Initialization
	- Set front and rear to -1
	- Create an empty array of size QUEUE_SIZE
2. Enqueue
	- Check if queue is full ((rear + 1) % QUEUE_SIZE == front)
	- If full, return error message
	- If front is -1, set front to 0
	- Increment rear modulo QUEUE_SIZE
	- Add element to data[rear]
3. Dequeue
	- Check if queue is empty (front is -1)
	- If empty, return error message
	- Print removed element (data[front])
	- If front equals rear, reset front and rear to -1
	- Otherwise, increment front modulo QUEUE_SIZE
4. Display
	- Check if queue is empty (front is -1)
	- If empty, return error message
	- Print elements from data[front] to data[rear] in a circular manner
5. Menu Operations
	- Print menu options (Enqueue, Dequeue, Display, Exit)
	- Get user choice
	- Perform corresponding operation
	- Repeat until user chooses to exit

6. Circular Queue Using Linked List

Enqueue
1. If queue is full (front == 0 && rear == SIZE - 1) or (front == rear + 1), print "Queue overflow" and exit.
2. If rear == SIZE - 1 and front != 0, set rear = -1.
3. Increment rear and store value at cQueue[rear].
4. If front == -1, set front = 0.
5. Print "Insertion successful".

Dequeue
1. If queue is empty (front == -1 && rear == -1), print "Queue underflow" and exit.
2. Print deleted element: cQueue[front].
3. Increment front. If front == SIZE, set front = 0.
4. If front - 1 == rear, set front = rear = -1.

Display
1. If queue is empty (front == -1), print "Queue is empty" and exit.
2. Print queue elements:
	- If front <= rear, print cQueue[i] for i = front to rear.
	- If front > rear, print cQueue[i] for i = front to SIZE - 1, then i = 0 to rear.