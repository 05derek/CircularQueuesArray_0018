
    else {
        //jika elemen yang dihapus berada di posisi terakhir array, kembali ke awal array
        if (FRONT == max - 1)
            FRONT = 0;
            else
            FRONT = FRONT + 1;
    }
}