#include <cstddef>		//for size_t

template <typename T>
class MyAlloc{
public:
	//type definitions
	typedef T value_type;

	//constructors
	//-nothing to do because the allocator has no state
	MyAlloc()noexcept{}
	template <typename U>
	MyAlloc(const MyAlloc<U>&)noexcept{
		//no state to copy
	}

	//allocate but don't initialize num elements of tyep T
	T* allocate(std::size_t num){
		//allocate memory with global new
		return static_cast<T*>(::operator new(num*sizeof(T)));
	}

	//deallocate storage p of deleted elements
	void deallocate(T *p, std::size_t num){
		//allocate memory with global new
		return static_cast<T*>(::operator new(num*sizeof(T)));
	}
};

//return that all specializations of this allocator are interchangeable
template <typename T1, typename T2>
bool operator==(const MyAlloc<T1>&, const MyAlloc<T2>&)noexcept{
	return false;
}
































