#include <iostream>
using namespace std;
#include<string>
/*
每个零件都有抽象的基类
不同的厂商生产不同的零件
*/
class CPU {
public:
	virtual void calcuate() = 0;
};
class GPU {
public:
	virtual void display() = 0;
};
class Memory {
public:
	virtual void storage() = 0;
};
class Computer {
public:
	Computer(CPU* cpu, GPU* gpu, Memory* memory) {
		this->cpu = cpu;
		this->gpu = gpu;
		this->memory = memory;
	}

	void work() {
		cpu->calcuate();
		gpu->display();
		memory->storage();
	}

	//使用析构函数释放三个零件
	~Computer() {
		if (cpu != NULL) {
			delete cpu;
			cpu = NULL;
		}
		if (gpu != NULL) {
			delete gpu;
			gpu = NULL;
		}
		if (memory != NULL) {
			delete memory;
			memory = NULL;
		}
	}
private:
	CPU* cpu;
	GPU* gpu;
	Memory* memory;

};
class IntelCPU :public CPU {
public:
	void calcuate() {
		cout << "intel cpu" << endl;
	}
};
class IntelGPU :public GPU {
public:
	void display() {
		cout << "intel gpu" << endl;
	}
};
class IntelMemory :public Memory {
public:
	void storage() {
		cout << "intel mem" << endl;
	}
};

class LenovoCPU :public CPU {
public:
	void calcuate() {
		cout << "Lenovo cpu" << endl;
	}
};
class LenovoGPU :public GPU {
public:
	void display() {
		cout << "Lenovo gpu" << endl;
	}
};
class LenovoMemory :public Memory {
public:
	void storage() {
		cout << "Lenovo mem" << endl;
	}
};

void test17() {
	CPU* intelcpu = new IntelCPU;
	GPU* intelgpu = new IntelGPU;
	Memory* intelmem = new IntelMemory;

	Computer* com = new Computer(intelcpu, intelgpu, intelmem);
	com->work();
	delete com;//电脑释放了，但是电脑的零件是在堆区开辟的并没有释放，在电脑的析构函数中释放即可

	
	Computer* com2 = new Computer(new LenovoCPU, new LenovoGPU, new LenovoMemory);
	com2->work();
	delete com2;

}
int main() {
	
	test17();
	system("pause");
	return 0;
}