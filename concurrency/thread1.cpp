#include <thread>
#include <chrono>
#include <random>
#include <iostream>
#include <exception>
using namespace std;

void doSomething(int num, char c){
	try{
		//random-number generator (use c as seed to get different sequences)
		default_random_engine dre(42*c);
		uniform_int_distribution<int> id(10, 1000);
		for(int i=0;i<num;++i){
			this_thread::sleep_for(chrono::milliseconds(id(dre)));
			cout.put(c).flush();
		}
	}catch(...){
		cerr << "THREAD-EXCEPTION (thread "
			 << this_thread::get_id() << ")" << endl;
	}
}

int main(){
	try{
		thread t1(doSomething, 5, '.');		//print five dots in separate thread
		cout << "- started fg thread " << t1.get_id() << endl;

		//print other characters in order background threads
		for(int i=0;i<5;++i){
			thread t(doSomething, 10, 'a'+i);	//print 10 chars in separate thread
			cout << "- detach started bg thread " << t.get_id() << endl;
			t.detach();		//detach thread into the background
		}
		cin.get();		//wait for any input(return)
		cout << "- join fg thread " << t1.get_id() << endl;
		t1.join();		//wait for t1 to finish
	}catch(const exception& e){
		cerr << "EXCEPTION:	" << e.what() << endl;
	}
	return 0;
}













