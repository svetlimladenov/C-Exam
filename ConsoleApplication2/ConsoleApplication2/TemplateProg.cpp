template<typename T>
class TemplateProg {
private:
	int n;
	T x;
	T inc;
	T sum;
public:
	TemplateProg(T xValue, int nValue, T incValue) {
		x = xValue;
		n = nValue;
		inc = incValue;
		sum = 0;
	};

	~TemplateProg() {

	};

	void setN(int value) {
		n = value;
	}

	int getN() {
		return n;
	}

	void setX(T value) {
		x = value;
	}

	T getX() {
		return x;
	}

	void setInc(T value) {
		inc = value;
	}

	T getInc() {
		return inc;
	}

	// Za da raboti sus nash class, tozi class trqbva da predifinira slednite operacii:
	// subirane - naprimer  Box operator+()

	T operator()() {
		for (T i = x; i <= n; i += inc)
		{
			sum += i;
		}
		return sum;
	}
};