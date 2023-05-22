#include <iostream>
using namespace std;

struct Node
{
	int data;
	Node* next;
};

struct Queue
{
	Node* front;
	Node* back;
	int size;
	void init()
	{
		front = nullptr;
		back = nullptr;
		size = 0;
	}
};

void push(Queue*& queue, int data)
{
	Node* tmp = new Node;
	tmp->data = data;
	tmp->next = nullptr;
	if (queue->size == 0)
	{
		queue->front = tmp;
		queue->back = tmp;
	}
	else
	{
		queue->back->next = tmp;
		queue->back = tmp;
	}
	queue->size++;
}

void pop(Queue*& queue)
{
	if (queue->size == 0)
	{
		return;
	}
	queue->front = queue->front->next;
	queue->size--;
}
void insert_element(Queue*& queue, int pos, int data)
{
	Queue* tmp = new Queue;
	tmp->init();
	for (int i = 1; i < pos; i++)
	{
		push(tmp, queue->front->data);
		pop(queue);
	}
	push(tmp, data);
	int init_size = queue->size;
	for (int i = 0; i < init_size; i++)
	{
		push(tmp, queue->front->data);
		pop(queue);
	}
	queue = tmp;
}
void insert_elements(Queue*& queue, int pos, int k)
{
	Queue* tmp = new Queue;
	tmp->init();
	int data;
	cout << "Enter elements, which need to add: ";
	for (int i = 1; i < pos; i++)
	{
		push(tmp, queue->front->data);
		pop(queue);
	}
	for (int i = 0; i < k; i++)
	{
		cin >> data;
		push(tmp, data);
	}
	int init_size = queue->size;
	for (int i = 0; i < init_size; i++)
	{
		push(tmp, queue->front->data);
		pop(queue);
	}
	queue = tmp;
}
void delete_element(Queue*& queue, int pos)
{
	Queue* tmp = new Queue;
	tmp->init();
	for (int i = 1; i < pos; i++)
	{
		push(tmp, queue->front->data);
		pop(queue);
	}
	pop(queue);
	int init_size = queue->size;
	for (int i = 0; i < init_size; i++)
	{
		push(tmp, queue->front->data);
		pop(queue);
	}
	queue = tmp;
}

void delete_elements(Queue*& queue, int pos, int k)
{
	Queue* tmp = new Queue;
	tmp->init();
	for (int i = 1; i < pos; i++)
	{
		push(tmp, queue->front->data);
		pop(queue);
	}
	for (int i = 0; i < k; i++)
	{
		pop(queue);
	}
	int init_size = queue->size;
	for (int i = 0; i < init_size; i++)
	{
		push(tmp, queue->front->data);
		pop(queue);
	}
	queue = tmp;
}

void search_element(Queue*& queue, int element)
{
	Queue* curr = new Queue;
	curr->init();
	while (queue->front != nullptr && queue->back != nullptr)
	{
		if (queue->front->data == element)
		{
			cout << "Element found!" << endl;
			return;
		}
		else
		{
			push(curr, queue->front->data);
			pop(queue);
		}
	}
	cout << "Element not found!" << endl;
}

Queue* createQueue(int n)
{
	Queue* queue = new Queue;
	queue->init();
	int data;
	for (int i = 0; i < n; i++)
	{
		cin >> data;
		push(queue, data);
	}
	return queue;
}

void printQueue(Queue*& queue)
{
	Node* curr = new Node;
	curr = queue->front;
	for (int i = 0; i < queue->size; i++)
	{
		cout << curr->data << ' ';
		curr = curr->next;
	}
	cout << endl;
}

int main()
{
	int size, data, pos, k, element;
	cout << "Enter list size: ";
	cin >> size;
	cout << "Enter elements of queue" << endl;
	Queue* queue = createQueue(size);
	cout << "Queue output" << endl;
	printQueue(queue);
	cout << "Element, which need to add: ";
	cin >> data;
	push(queue, data);
	cout << "Queue output" << endl;
	printQueue(queue);
	pop(queue);
	cout << "Queue output" << endl;
	printQueue(queue);
	cout << "Element and position, where need to add this element: ";
	cin >> data;
	cin >> pos;
	insert_element(queue, pos, data);
	cout << "Queue output" << endl;
	printQueue(queue);
	cout << "How many elements and position, where need to add them: ";
	cin >> k;
	cin >> pos;
	insert_elements(queue, pos, k);
	cout << "Queue output" << endl;
	printQueue(queue);
	cout << "Position, where need to delete element: ";
	cin >> pos;
	delete_element(queue, pos);
	cout << "Queue output" << endl;
	printQueue(queue);
	cout << "How many elements and position, where need to delete them: ";
	cin >> k;
	cin >> pos;
	delete_elements(queue, pos, k);
	cout << "Queue output" << endl;
	printQueue(queue);
	cout << "What element need to found: ";
	cin >> element;
	search_element(queue, element);
	return 0;
}
