class Prog {
private:
	int n;
	int x;
	int inc;
	int sum;
public:
	Prog(int xValue, int nValue, int incValue) {
		x = xValue;
		n = nValue;
		inc = incValue;
		sum = 0;
	};

	~Prog() {

	};

	void setN(int value) {
		n = value;
	}

	int getN() {
		return n;
	}

	void setX(int value) {
		x = value;
	}

	int getX() {
		return x;
	}

	void setInc(int value) {
		inc = value;
	}

	int getInc() {
		return inc;
	}

	int operator()() {
		for (int i = x; i <= n; i+=inc)
		{
			sum += i;
		}
		return sum;
	}
};