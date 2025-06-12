

        // cek apakah antrian penuh
        if ((FRONT == 0 && REAR == max - 1) || (FRONT == REAR + 1)) {
            cout << "\nQueue overflow\n";
            return;
        }

        //cek apakah antrian kosong
        if (FRONT == -1) {
            FRONT = 0;
            REAR = 0
            
        }

        
}