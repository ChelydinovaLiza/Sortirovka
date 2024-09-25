template<typename type>void BubbleOptimization(int N, type* Array) {

    type time;
    bool flag = 1;

    while (flag == 1)
    {
        flag = 0;
        for (int i = N - 1; i > 0; i--) {
            for (int j = 0; j <= i - 1; ++j) {
                if (Array[j] > Array[j + 1]) {
                    time = Array[j];
                    Array[j] = Array[j + 1];
                    Array[j + 1] = time;
                    flag = 1;
                }
            }
        }

    }
}