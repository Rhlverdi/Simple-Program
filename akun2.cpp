#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;


// Fungsi Masking password login 
string passwordBintang(){

    char enter;
    string password2;

    while(enter != '\r'){
        enter = getch();
        if(enter == '\b'){
            if(password2.size() != 0){
            password2.erase(password2.size() - 1);
            cout << "\b \b";
            }
            continue;
        }else if(enter >= '0' && enter <= '9' || enter >= 'a' && enter <= 'z' || enter >= 'A' && enter <= 'Z'){
            password2 += enter;
            cout << "*";
        }else{
            continue;
        }
    }
    return password2;
}


main() {
    
    string pilih, akun, email2, password2, password3;
    int jumlah;
    char enter;
    char nama[5][15] = {0,0,0,0,0};
    char email[5][25] = {0,0,0,0,0};
    char password[5][10] = {0,0,0,0,0};

    system("cls");
    cout << "Program Membuat Akun" << endl;
    cout << "=========================" << endl;
    cout << "Apakah anda ingin membuat akun? " << endl;
    cout << "Ya/Tidak: ";
    cin >> pilih;
    cout << "=============================" << endl;
    if (toupper(pilih == "ya" ))
    {
        system("cls");
        cout << "Registrasi Akun" << endl;
        cout << "=========================" << endl;
        cout << "Masukkan Nama Anda : ";
        cin >> nama[0];
        cout << "Masukkan Email Anda : ";
        cin >> email[0];
        cout << "Masukkan Password Anda : ";
        cin >> password[0];
        cout << "=============================" << endl;
        cout << "Akun Anda Telah Tersimpan" << endl;
        cout << "=============================" << endl;
        cout << "Ingin Menambahkan Akun Lainnya?" << endl;
        cout << "Ya/Tidak: ";
        cin >> pilih;
        cout << "=============================" << endl;
        if (toupper(pilih == "ya")){
            goto register2;
        }else{
            goto menu;
        }

    register2:
    // Mendaftarkan Akun ke-2
        cout << " " << endl;
        system("cls");
        cout << "Registrasi Akun ke-2" << endl;
        cout << "=========================" << endl;
        cout << "Masukkan Nama Anda : ";
        cin >> nama[1];
        cout << "Masukkan Email Anda : ";
        cin >> email[1];
        cout << "Masukkan Password Anda : ";
        cin >> password[1];
        cout << "=============================" << endl;
        cout << "Akun Anda Telah Tersimpan" << endl;
        cout << "=============================" << endl;
        cout << "Ingin Menambahkan Akun Lainnya?" << endl;
        cout << "Ya/Tidak: ";
        cin >> pilih;
        cout << "=============================" << endl;
        if (toupper(pilih == "ya")){
            goto register3;
        }else{
            goto menu;
        }

    register3:
    // Mendaftarkan Akun ke-3
        cout << " " << endl;
        system("cls");
        cout << "Registrasi Akun ke-3" << endl;
        cout << "=========================" << endl;
        cout << "Masukkan Nama Anda : ";
        cin >> nama[2];
        cout << "Masukkan Email Anda : ";
        cin >> email[2];
        cout << "Masukkan Password Anda : ";
        cin >> password[2];
        cout << "=============================" << endl;
        cout << "Akun Anda Telah Tersimpan" << endl;
        cout << "=============================" << endl;
        cout << "Ingin Menambahkan Akun Lainnya?" << endl;
        cout << "Ya/Tidak: ";
        cin >> pilih;
        cout << "=============================" << endl;
        if (toupper(pilih == "ya")){
            goto register4;
        }else{
            goto menu;
        }

    register4:
    // Mendaftarkan Akun ke-4
        cout << " " << endl;
        system("cls");
        cout << "Registrasi Akun ke-4" << endl;
        cout << "=========================" << endl;
        cout << "Masukkan Nama Anda : ";
        cin >> nama[3];
        cout << "Masukkan Email Anda : ";
        cin >> email[3];
        cout << "Masukkan Password Anda : ";
        cin >> password[3];
        cout << "=============================" << endl;
        cout << "Akun Anda Telah Tersimpan" << endl;
        cout << "=============================" << endl;
        cout << "Ingin Menambahkan Akun Lainnya?" << endl;
        cout << "Ya/Tidak: ";
        cin >> pilih;
        cout << "=============================" << endl;
        if (toupper(pilih == "ya")){
            goto register5;
        }else{
            goto menu;
        }

    register5:
    // Mendaftarkan Akun ke-5
        cout << " " << endl;
        system("cls");
        cout << "Registrasi Akun ke-5" << endl;
        cout << "=========================" << endl;
        cout << "Masukkan Nama Anda : ";
        cin >> nama[4];
        cout << "Masukkan Email Anda : ";
        cin >> email[4];
        cout << "Masukkan Password Anda : ";
        cin >> password[4];
        cout << "=============================" << endl;
        cout << "Akun Anda Telah Tersimpan" << endl;
        cout << "=============================" << endl;
        cout << "Jumlah Akun Yang Anda Masukkan Telah mencapai Batas" << endl;
        cout << "Pergi Ke Menu?" << endl;
        cout << "Ya/Tidak: ";
        cin >> pilih;
        cout << "=============================" << endl;
        if (toupper(pilih == "ya")){
            goto menu;
        }else{
            goto exit;
        }

    menu:
    // Menu utama
        system("cls");
        cout << "=============================" << endl;
        cout << "Selamat Datang Di Menu Utama" << endl;
        cout << "=============================" << endl;
        cout << "1. Tampilkan Akun Terdaftar" << endl;
        cout << "2. Daftarkan Akun Lain" << endl;
        cout << "3. Login" << endl;
        cout << "4. Exit" << endl;
        cout << "Masukkan Pilihan: ";
        cin >> pilih;
        cout << "=============================" << endl;

        if (pilih == "1"){
            goto teregister;
        }else if (pilih == "2"){
            cout << "Berapa Banyak Akun Yang Telah Anda Daftarkan?" << endl;
            cout << "(1-5): ";
            cin >> akun;
            if (akun == "1"){
                goto register2;
            }else if (akun == "2"){
                goto register3;
            }else if (akun == "3"){
                goto register4;
            }else if (akun == "4"){
                goto register5;
            }else {
                cout << "Maksimal Hanya 5 Akun Terdaftar" << endl;
                cout << "================================" << endl;
                cout << "Ingin Kembali Ke Menu?" << endl;
                cout << "Ya/Tidak: ";
                cin >> pilih;
                if (toupper(pilih == "ya")){
                    goto menu;
                }else{
                    goto exit;
                }
            }
        }else if (pilih == "3"){
            goto login;
        }else {
            goto exit;
        }

    teregister:
    // Cek Akun Terdaftar
        cout << "Berapa Banyak Akun Yang Telah Anda Daftarkan?" << endl;
        cout << "Banyak Akun Terdaftar: ";
        cin >>jumlah;
        cout << " " << endl;

        for (int i = 0; i < jumlah ; i++) {
            cout << "=======================" << endl;
            cout << "Akun Ke-" << i + 1 << endl;
            cout << "=======================" << endl;
            cout << "Nama: " << nama[i] << endl;
            cout << "Email: " << email[i] << endl;
            cout << "Password: " << password[i] << " \n" <<endl;
        }
        cout << "Ingin Kembali Ke Menu?" << endl;
        cout << "Ya/Tidak: ";
        cin >> pilih;
        if (toupper(pilih == "ya")){
            goto menu;
        }else{
            goto exit;
        }

    login:
    // Proses Login
        system("cls");
        cout << "=====================================" << endl;
        cout << "Selamat Datang Di Program Sederhana" << endl;
        cout << "=====================================" << endl;
        cout << "Email : ";
        cin >> email2;
        cout << "Password : ";
        password2 = passwordBintang();
        cout << " " << endl;

        if (email2 == email[0] && password2 == password[0] 
            || email2 == email[1] && password2 == password[1] 
            || email2 == email[2] && password2 == password[2]
            || email2 == email[3] && password2 == password[3] 
            || email2 == email[4] && password2 == password[4])
        {
            system("cls");
            goto menu2;
        }else if (email2 != email[0] || password2 != password[0] 
                || email2 != email[1] || password2 != password[1] 
                || email2 != email[2] || password2 != password[2]
                || email2 != email[3] || password2 != password[3] 
                || email2 != email[4] || password2 != password[4])
        {
            cout << "================================" << endl;
            cout << "Anda Memasukkan Data Yang Salah" << endl;
            cout << "Ingin Mencoba Lagi?" << endl;
            cout << "Ya/Tidak: ";
            cin >> pilih;
            if (toupper(pilih == "ya")){
                goto login;
                system("cls");
            }else if (toupper(pilih == "tidak")){
                cout << "================================" << endl;
                cout << "Kembali Ke Menu?" << endl;
                cout << "Ya/Tidak: ";
                cin >> pilih;
                if (toupper(pilih == "ya")){
                    goto menu;
                }else{
                    goto exit;
                }
            }
        }
    }else{
        goto exit;
    }

    menu2:
    // Menu Setelah Login
        cout << "================================" << endl;
        cout << "  Selamat Anda Berhasil Login" << endl;
        cout << "================================" << endl;
        cout << "1. Kerjakan Soal Pilihan Ganda" << endl;
        cout << "2. Ganti Password Akun" << endl;
        cout << "3.Logout" << endl;
        cout << "4.exit" << endl;
        cout << "Masukkan Pilihan Anda: ";
        cin >> pilih;
        if (pilih == "1"){
            goto soal;
        }else if (pilih == "2"){
            system("cls");
            cout << "Akun Keberapa Yang Anda Gunakan?" << endl;
            cout << "(1 - 5) : ";
            cin >> pilih;
            cout << " " << endl;
            if (pilih == "1"){
                goto ganti;
            }else if (pilih == "2"){
                goto ganti2;
            }else if (pilih == "3"){
                goto ganti3;
            }else if (pilih == "4"){
                goto ganti4;
            }else if (pilih == "5"){
                goto ganti5;
            }
        }else if (pilih == "3"){
            goto menu;
        }else{
            goto exit;
        }

    ganti:
    // Ganti Password Akun Ke-1
        cout << "Masukkan Password Lama: ";
        cin >> password3;
         if (password3 != password[0]){
            
            cout << "Password Lama Anda Salah" << endl;
            goto ganti;
        }else if (password3 == password[0]){
            
            cout << "Masukkan Password Baru: ";
            cin >> password[0];
            cout << "================================" << endl;
            cout << "Password Anda Telah Diperbarui" << endl;
            cout << "================================" << endl;
            cout << "Kembali Ke Menu?" << endl;
            cout << "Ya/Tidak: ";
            cin >> pilih;
            if (toupper(pilih == "ya")){
                system("cls");
                goto menu2;
            }else{
                goto exit;
            }
        }

    ganti2:
    // Ganti Password Akun Ke-2
        cout << "Masukkan Password Lama: ";
        cin >> password3;
         if (password3 != password[1]){
            
            cout << "Password Lama Anda Salah" << endl;
            goto ganti2;
        }else if (password3 == password[1]){
            
            cout << "Masukkan Password Baru: ";
            cin >> password[1];
            cout << "================================" << endl;
            cout << "Password Anda Telah Diperbarui" << endl;
            cout << "================================" << endl;
            cout << "Kembali Ke Menu?" << endl;
            cout << "Ya/Tidak: ";
            cin >> pilih;
            if (toupper(pilih == "ya")){
                goto menu2;
                system("cls");
            }else{
                goto exit;
            }
        }

    ganti3:
    // Ganti Password Akun Ke-3
        cout << "Masukkan Password Lama: ";
        cin >> password3;
         if (password3 != password[2]){
            
            cout << "Password Lama Anda Salah" << endl;
            goto ganti3;
        }else if (password3 == password[2]){
            
            cout << "Masukkan Password Baru: ";
            cin >> password[2];
            cout << "================================" << endl;
            cout << "Password Anda Telah Diperbarui" << endl;
            cout << "================================" << endl;
            cout << "Kembali Ke Menu?" << endl;
            cout << "Ya/Tidak: ";
            cin >> pilih;
            if (toupper(pilih == "ya")){
                goto menu2;
                system("cls");
            }else{
                goto exit;
            }
        }

    ganti4:
    // Ganti Password Akun Ke-4
        cout << "Masukkan Password Lama: ";
        cin >> password3;
         if (password3 != password[3]){
            
            cout << "Password Lama Anda Salah" << endl;
            goto ganti4;
        }else if (password3 == password[3]){
            
            cout << "Masukkan Password Baru: ";
            cin >> password[3];
            cout << "================================" << endl;
            cout << "Password Anda Telah Diperbarui" << endl;
            cout << "================================" << endl;
            cout << "Kembali Ke Menu?" << endl;
            cout << "Ya/Tidak: ";
            cin >> pilih;
            if (toupper(pilih == "ya")){
                goto menu2;
                system("cls");
            }else{
                goto exit;
            }
        }

    ganti5:
    // Ganti Password Akun Ke-5
        cout << "Masukkan Password Lama: ";
        cin >> password3;
         if (password3 != password[4]){
            
            cout << "Password Lama Anda Salah" << endl;
            goto ganti5;
        }else if (password3 == password[4]){
            
            cout << "Masukkan Password Baru: ";
            cin >> password[4];
            cout << "================================" << endl;
            cout << "Password Anda Telah Diperbarui" << endl;
            cout << "================================" << endl;
            cout << "Kembali Ke Menu?" << endl;
            cout << "Ya/Tidak: ";
            cin >> pilih;
            if (toupper(pilih == "ya")){
                goto menu2;
                system("cls");
            }else{
                goto exit;
            }
        }   

    exit:
        system("cls");
        cout << "======================================" << endl;
        cout << "            Terimakasih!" << endl;
        cout << "======================================" << endl;
        return 0;

    soal:

        char jawab[10] = {0,0,0,0,0,0,0,0,0,0};
        char key[10] = {'A','A','C','B','D','D','B','C','A','C'};
        int benar [1] = {0};
        int salah [1] = {0};

        system("cls");

        // Soal
        cout << " " << endl;
        cout << "======================================" << endl;
        cout << "PROGRRAM MENJAWAB SOAL PILIHAN GANDA" << endl;
        cout << "======================================" << endl;
        cout << " " << endl;
        cout << "1. Dalam ekspresi Boolean yang harus diuji adalah nilai...."<< endl;
        cout << " A. True/False \n B. Up/Down \n C. Right/Left \n D. On/Off" << endl;
        cout << "Masukkan Pilihan Jawaban Anda : ";
        cin >> jawab[0];
        cout << " " << endl;
        cout << "2. Urutan langkah-langkah logis untuk menyelesaikan masalah yang disusun secara sistematis disebut..." << endl;
        cout << " A. Algoritma \n B. Flowchart \n C. Pseudocode \n D. Variabel" << endl;
        cout << "Masukkan Pilihan Jawaban Anda : ";
        cin >> jawab[1];
        cout << " " << endl;
        cout << "3. Penulisan algoritma yang menggunakan sintaks (cara penulisan) yang menyerupai bahasa pemrograman disebut..." << endl;
        cout << " A. Coding \n B. Flowchart \n C. Pseudocode \n D. Variabel" << endl;
        cout << "Masukkan Pilihan Jawaban Anda : ";
        cin >> jawab[2];
        cout << " " << endl;
        cout << "4. Tipe data yang memungkinkan sebuah variabel mengandung banyak nilai dalam satu waktu dan bersifat homogen adalah..." << endl;
        cout << " A. Variabel \n B. Array \n C. Konstanta \n D. String" << endl;
        cout << "Masukkan Pilihan Jawaban Anda : ";
        cin >> jawab[3];
        cout << " " << endl;
        cout << "5. Merupakan algoritma yang dinyatakan dalam diagram dengan bentuk-bentuk tertentu, adalah pengertian dari..." << endl;
        cout << " A. Pseudocode \n B. Algoritma \n C. Konstanta \n D. Flowchart" << endl;
        cout << "Masukkan Pilihan Jawaban Anda : ";
        cin >> jawab[4];
        cout << " " << endl;
        cout << "6. Berfungsi untuk memberi nilai awal, nilai akhir, penambahan/pengurangan suatu variabel counter, adalah...." << endl;
        cout << " A. Terminator \n B. Decision \n C. Process \n D. Preparation" << endl;
        cout << "Masukkan Pilihan Jawaban Anda : ";
        cin >> jawab[5];
        cout << " " << endl;
        cout << "7. Bentuk belah ketupat pada diagram flowchart diberi nama..." << endl;
        cout << " A. Terminator \n B. Decision \n C. Process \n D. Preparation" << endl;
        cout << "Masukkan Pilihan Jawaban Anda : ";
        cin >> jawab[6];
        cout << " " << endl;
        cout << "8. Merupakan tempat menampung dan menyimpan satu atau lebih nilai, adalah pengertian dari..." << endl;
        cout << " A.  Konstanta\n B. Array \n C. Variabel \n D. String" << endl;
        cout << "Masukkan Pilihan Jawaban Anda : ";
        cin >> jawab[7];
        cout << " " << endl;
        cout << "9. Tipe data yang cocok untuk menjelaskan data nama_siswa adalah menggunakan tipe data..." << endl;
        cout << " A.  Varchar \n B. Char \n C. Numeric \n D. Integer" << endl;
        cout << "Masukkan Pilihan Jawaban Anda : ";
        cin >> jawab[8];
        cout << " " << endl;
        cout << "10. Algoritma harus dapat dijangkau oleh akal fikiran kita. Hal ini menyatakan bahwa algoritma harus mamiliki sifat..." << endl;
        cout << " A.  Rumit \n B. Realistis \n C. Logis \n D. Berurutan" << endl;
        cout << "Masukkan Pilihan Jawaban Anda : ";
        cin >> jawab[9];
        cout << " " << endl;


        // Menghitung Benar Salah
        for (int i = 0; i < 10; i++){
            if (key[i] == toupper(jawab[i])){
                benar [0] = benar [0] + 1;
                salah [0] = salah [0] + 0;
            }else{
                benar [0] = benar [0] + 0;
                salah [0] = salah [0] + 1;
            }
        }
            cout << "-----------------------------------" << endl;
            cout << "Jumlah Jawaban Anda Yang Benar: " << benar[0] << endl;
            cout << "Jumlah Jawaban Anda Yang Salah: " << salah[0] << endl;
            cout << "Nilai Anda: " << benar[0] * 10 << endl;
            cout << "-----------------------------------" << endl;

        // Menampilkan Jawaban
        cout <<"Apakah Anda Ingin Melihat Hasil Kerja Anda?" << endl;
        cout << "Ya/Tidak: ";
        cin >> pilih;

        if (toupper(pilih == "ya")){
            for (int i = 0 ; i < 10 ; i++){
                cout << "-------------------" << endl;
                cout << i + 1 << ". " << jawab[i] << endl;
                cout << "Jawaban Benar: " << key[i] << endl;
            }
            cout << "======================================" << endl;
            cout << "Terimakasih Telah Mengerjakan Soalnya" << endl;
            cout << "======================================" << endl;
        }else{
            cout << "======================================" << endl;
            cout << "Terimakasih Telah Mengerjakan Soalnya" << endl;
            cout << "======================================" << endl;
        }
        cout << "Kembali Ke Menu?" << endl;
        cout << "Ya/Tidak: ";
        cin >> pilih;
        if (toupper(pilih == "ya")){
            system("cls");
            goto menu2;
        }else{
            goto exit;
        }
}