#include <condition_variable>
#include <mutex>
#include <future>
#include <iostream>
bool readyFlag;
std::mutex readyMutex;
std::condition_variable readyCondVar;

void thread1(){
	//do something thread2 needs as preparation
	std::cout << "<return>" << std::endl;
	std::cin.get();

	//signal that thread1 has prepared a condition
	{
		std::lock_guard<std::mutex> lg(readyMutex);
		readyFlag = true;
	}	//release lock
	readyCondVar.notify_one();
}

void thread2(){
	//wait until thread1 is ready (readyFlag is true)
	{
		std::unique_lock<std::mutex> ul(readyMutex);
		readyCondVar.wait(ul, []{return readyFlag;});
	}	//realease lock

	//do whatever shall happen after thread1 has prepared things
	std::cout << "done" << std::endl;
}

int main(){
	auto f1 = std::async(std::launch::async, thread1);
	auto f2 = std::async(std::launch::async, thread2);
	return 0;	
}










