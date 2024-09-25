
#include "Catch.hpp"
#include "BubbleOptimization.h"

TEST_CASE() {
	int N = 5;
	int Array[5] = { 5, 4 , 8, 2, 32 };
	bool flag = 1;
	BubbleOptimization(N, Array);
	for (int i = 0; i < N - 1; i++) {
		if (Array[i] > Array[i + 1]) {
			flag = 0;
		}
	}
	REQUIRE(flag);


	int Array2[5] = {};
	flag = 1;
	BubbleOptimization(N, Array2);
	for (int i = 0; i < N - 1; i++) {
		if (Array2[i] > Array2[i + 1]) {
			flag = 0;
		}
	}
	REQUIRE(flag);


	double Array3[5] = { 2.5, -4, 3, 3, -7.5 };
	flag = 1;
	BubbleOptimization(N, Array3);
	for (int i = 0; i < N - 1; i++) {
		if (Array3[i] > Array3[i + 1]) {
			flag = 0;
		}
	}
	REQUIRE(flag);

}
