#include <iostream>
using namespace std;
 
class cpu
{
public:
	virtual void cpuyun() = 0;
};

class gpu
{
public:
	virtual void gpuyun() = 0;
};

class itelcpu :public cpu
{
public:
	virtual void cpuyun()
	{
		cout << "intel cpu 运行" << endl;

	}
};

class itelgpu :public gpu
{
public:
	virtual void gpuyun()
	{
		cout << "itel gpu 运行" << endl;
	}
};

class amdcpu :public cpu
{
public:
	void cpuyun()
	{
		cout << "amd cpu 运行" << endl;

	}
};

class amdgpu
{
public:
	void gpuyun()
	{
		cout << "amd gpu 运行" << endl;
	}
};

class diannao
{
public:
	diannao(cpu* i, gpu* j)
	{
		m_cpu = i;
		m_gpu = j;
	}
	void work()
	{
		m_cpu->cpuyun();
		m_gpu->gpuyun();
	}
	~diannao()
	{
		delete m_cpu;
		delete m_gpu;
		cout << "电脑清除" << endl;
	}
private:
	cpu* m_cpu;
	gpu* m_gpu;
};

void te()
{
	diannao p(new itelcpu, new itelgpu);
	p.work();
}


int main()
{
	te();
	return 0;
}