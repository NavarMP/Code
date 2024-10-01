# Algorithm

## 1. Append Two Arrays

### 1. Read array elements

1. Prompt user to enter array size.
2. Check if size is valid.
3. Read array elements using readArray function.

### 2. Merge two arrays

1. Copy elements of first array to merged array.
2. Copy elements of second array to merged array, starting from where first array's elements end.

### 3. Print merged array using printArray function

## 2. Stack using Array

### 1. Initialize stack

1. Define stack as an array of size MAX_SIZE.
2. Initialize top of stack to -1.

### 2. Menu-driven stack operations

1. Present user with options: PUSH, POP, DISPLAY, EXIT.
2. Perform chosen operation.

### 3. PUSH operation

1. Check if stack is full.
2. If full, display "Stack overflow" message.
3. If not full, prompt user to enter value, increment top index, and assign value to stack array.

### 4. POP operation

1. Check if stack is empty.
2. If empty, display "Stack underflow" message.
3. If not empty, display popped element and decrement top index.

### 5. DISPLAY operation

1. Check if stack is empty.
2. If empty, display "The stack is empty" message.
3. If not empty, display elements in stack in reverse order.

## 3. Stack using Linked List

### 1. Create Stack

1. Initialize top to NULL and count to 0

### 2. Push Element

1. Allocate a new node with given data
2. Set info of new node to data and ptr to top
3. Update top to new node
4. Increment count

### 3. Pop Element

1. Check if top is NULL (underflow)
2. If not, retrieve info of top node
3. Update top to ptr of top node
4. Free the popped node
5. Decrement count

### 4. Display Stack

1. Traverse from top to end of list
2. Print info of each node

### 5. Get Top Element

1. Return info of top node

### 6. Check Empty

1. If top is NULL, print "Stack is empty"
2. Else, print "Stack is not empty with count elements"

### 7. Destroy Stack

1. Traverse from top to end of list
2. Free each node
3. Update top to NULL and count to 0

### 8. Get Stack Count

1. Return countof elements in stack

## 4. Sparse Matrix Creation Algorithm

### 1. Input: Matrix size (rows, columns) and matrix elements

### 2. Check: Ensure matrix size is within defined limits (10x10)

### 3. Initialize: Create a sparse matrix b with dimensions MAX x 3

### 4. Store metadata

1. b[0][0]: Number of rows.
2. b[0][1]: Number of columns.
  
### 5. Iterate through the input matrix a

1. For each non-zero element a[i][j]:
2. Store row index i in b[k][0].
3. Store column index j in b[k][1].
4. Store element value a[i][j] in b[k][2].
5. Increment k.
  
### 6. Store number of non-zero elements: b[0][2] = k - 1

### 7. Output: Print the sparse matrix b in the format of 3 triples (row, column, value)

## 5. Queue Using Array

### 1. Initialization

- Set front and rear to -1
- Create an empty array of size QUEUE_SIZE
  
### 2. Enqueue

- Check if queue is full ((rear + 1) % QUEUE_SIZE == front)
- If full, return error message
- If front is -1, set front to 0
- Increment rear modulo QUEUE_SIZE
- Add element to data[rear]
  
### 3. Dequeue

- Check if queue is empty (front is -1)
- If empty, return error message
- Print removed element (data[front])
- If front equals rear, reset front and rear to -1
- Otherwise, increment front modulo QUEUE_SIZE
  
### 4. Display

- Check if queue is empty (front is -1)
- If empty, return error message
- Print elements from data[front] to data[rear] in a circular manner
  
### 5. Menu Operations

- Print menu options (Enqueue, Dequeue, Display, Exit)
- Get user choice
- Perform corresponding operation
- Repeat until user chooses to exit

## 6. Circular Queue Using Linked List

### 1. Enqueue

1. If queue is full (front == 0 && rear == SIZE - 1) or (front == rear + 1), print "Queue overflow" and exit.
2. If rear == SIZE - 1 and front != 0, set rear = -1.
3. Increment rear and store value at cQueue[rear].
4. If front == -1, set front = 0.
5. Print "Insertion successful".

### 2. Dequeue

1. If queue is empty (front == -1 && rear == -1), print "Queue underflow" and exit.
2. Print deleted element: cQueue[front].
3. Increment front. If front == SIZE, set front = 0.
4. If front - 1 == rear, set front = rear = -1.

### 3. Display

1. If queue is empty (front == -1), print "Queue is empty" and exit.
2. Print queue elements:

- If front <= rear, print cQueue[i] for i = front to rear.
- If front > rear, print cQueue[i] for i = front to SIZE - 1, then i = 0 to rear.
