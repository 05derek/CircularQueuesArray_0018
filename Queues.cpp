
        else {
            //jika REAR berada di posisi terakhir array, kembali ke awal array
            if (REAR == max - 1)
            REAR = 0;
            else
            REAR = REAR + 1;
        }
        queue_array[REAR] = num;
}