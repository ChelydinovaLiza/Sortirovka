template<typename type>void Exchange(int N, type* Array) {

    type time;

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if (Array[i] > Array[j]) {
                time = Array[i];
                Array[i] = Array[j];
                Array[j] = time;
            }
        }
    }
}