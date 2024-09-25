template<typename type>void Bubble(int N, type* Array) {

    type time;
    for (int i = 0; i < N - 1; ++i) {
        for (int j = 0; j < N - i - 1; ++j) {
            if (Array[j] > Array[j + 1]) {
                time = Array[j];
                Array[j] = Array[j + 1];
                Array[j + 1] = time;
            }
        }
    }
}