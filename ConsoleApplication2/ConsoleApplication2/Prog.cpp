class Prog {
private:
	int n;
	int x;
	int inc;

public:
	Prog(int nValue, int xValue, int incValue) {
		n = nValue;
		x = xValue;
		inc = incValue;
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
		return n + x + inc;
	}
};