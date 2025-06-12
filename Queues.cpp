
else {
    //jika FRONT_position > REAR_position, iterasi dari FRONT hingga akhir array
    while (FRONT_position <= max - 1) {
        cout << queue_array[FRONT_position] << "  ";
        FRONT_position++;
    }
}