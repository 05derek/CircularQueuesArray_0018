

//jika FRONT_position <= REAR_position, iterasi dari FRONT hingga REAR
if (FRONT_position <= REAR_position) {
    while (FRONT_position <= REAR_position) {
        cout << queue_array[FRONT_position] << "  ";
        FRONT_position++;
    }
    cout << endl;
}