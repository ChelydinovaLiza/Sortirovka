template<typename type>void Insertion(int N, type* Array) {


    for (int i = 1; i < N; i++) {
        int key = Array[i];
        int j = i - 1;

        while (j >= 0 && Array[j] > key) {
            Array[j + 1] = Array[j];
            j = j - 1;
        }
        Array[j + 1] = key;
    }
}