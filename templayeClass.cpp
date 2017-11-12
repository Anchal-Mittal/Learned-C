#include <iostream>

using namespace std;

template <class  T>
	class Calculation {
		public:
	    
		void add(T x, T y);
        void totalling( T total , T result); 		
	
	};
    template <class T>
	    void Calculation<T> :: add(T x , T y) {
		T result = x +y;
		T total= result;
		totalling(total ,result);
	}


	template <class T>
	void Calculation<T> :: totalling(T total , T result) {
	total +=result;
	cout << "TOTAL IS = " << result << endl;
	}


int main(){

Calculation<float > calculate;
calculate.add(4.5,98);
calculate.add(4,982);
calculate.add(43.5,94.8);

return 0;
}
