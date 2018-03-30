void func(int x, int y);

auto l = [](int x, int y){

};

class C{
public:
	void operator()(int x, int y)const;
	void memfunc(int x, int y)const;
};

int main(){
	C c;
	std::shared_ptr<C> sp(new C);

	//bind() uses callable objects to bind arguments:
	std::bind(func, 77, 33)();
	std::bind(1, 77, 33)();
	std::bind(C(), 77, 33)();
	std::bind(&C::memfunc, c, 77, 33)();
	std::bind(&C::memfunc, sp, 77, 33)();

	//async() uses callable objects to start (background) tasks:
	std::async(func, 42, 77);
	std::async(1, 42, 77);
	std::async(c, 42, 77);
	std::async(&C::memfunc, c, 42, 77);
	std::async(&C::memfunc, sp, 42, 77);

	return 0;
}
