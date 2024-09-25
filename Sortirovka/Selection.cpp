
template<typename type>void Selection(int N, type* Array) {

    int minimum = 0;


    for (int i = 0; i < N; i++) {
        minimum = i;


        for (int j = i + 1; j < N; j++) {
            if (Array[j] < Array[minimum]) {
                minimum = j;
            }
        }


        if (minimum != i) {
            int time = Array[i];
            Array[i] = Array[minimum];
            Array[minimum] = time;
        }
    }

}








