

#ifndef Queue_h
#define Queue_h
// implementation of single queue using array 
#define MAX 100
template <class T>
queue_array<T>::queue_array() {
	counter = 0;
	front = -1; rear = -1;
}
template <class T>
bool queue_array<T>::isEmpty() {
	if (front == -1 && rear == -1)
		return 1;
	return 0;
}
template <class T>
bool queue_array<T>::isFull() {
	if (rear == MAX - 1)
		return 1;
	return 0;
}
template <class T>
void queue_array<T>::enqueue(T val) {
	if (isFull())
		return;
	if (front == -1)
		front = 0;
	rear++;
	arr[rear] = val;
	counter++;

}
template <class T>
T queue_array<T>::dequeue() {

	T value;

	if (isEmpty())
		exit(0);
	value = arr[front];
	front++;
	counter--;
	return value;

}
template <class T>
void queue_array<T>::display() {
	int temp = front;
	if (isEmpty()) {
		cout << "your queue is empty \n";
		exit(0);
	}

	while (temp <= rear)
	{
		cout << " " << arr[temp] << endl;
		temp++;
	}
	cout << "number of elements : " << counter << endl;
}

//implementation of circular queue using array
#define MAX 100
template <class T>
queue_circular_array<T>::queue_circular_array() {
	counter = 0;
	front = -1; rear = -1;
}
template <class T>
bool queue_circular_array<T>::isEmpty() {
	if (front == -1 && rear == -1)
		return 1;
	return 0;
}
template <class T>
bool queue_circular_array<T>::isFull() {
	if ((rear + 1) % MAX == front)
		return 1;
	return 0;
}
template <class T>
void queue_circular_array<T>::enqueue(T val) {
	if (isFull())
		return;
	else {
		if (front == -1)
			front = 0;
		rear = (rear + 1) % MAX;

		arr[(rear + 1) % MAX] = val;

	}
	counter++;

}
template <class T>
T queue_circular_array<T>::dequeue() {

	T value;

	if (isEmpty())
		exit(0);

	else if (front == rear) {
		value = arr[front];
		front = rear = -1;
	}
	else {
		value = arr[front];
		front = (front + 1) % MAX;
	}
	counter--;
	return value;

}
template <class T>
void queue_circular_array<T>::display() {
	int temp = front;
	if (isEmpty()) {
		cout << "your queue is empty \n";
		return;
	}
	while (temp <= rear)
	{
		cout << " " << arr[temp] << endl;
		temp++;
	}
	cout << "number of elements : " << counter << endl;
}
#endif /* Queue_h */
