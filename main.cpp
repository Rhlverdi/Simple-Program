//https://youtu.be/d-MKNuVn0zE?t=140
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Mahasiswa{
    public:
    string nama;
    string nim;
    string jurusan;

    //cunstructor
    Mahasiswa(string nama, string nim, string jurusan){
        Mahasiswa::nama = nama;
        Mahasiswa::nim = nim;
        Mahasiswa::jurusan = jurusan;
    }

    string stringify(){
        return "\n" + nama + " " + nim + " " + jurusan;
    }
};

class DBase{
    public:
    ifstream in;
    ofstream out;
    string fileName;

    DBase(const char* fileName){
        DBase::fileName = fileName;
    }

    void save(Mahasiswa data){
        cout << endl;
        cout << data.nama << " ";
        cout << data.nim << " ";
        cout << data.jurusan << " \n" << endl;

        //membuka database
        DBase::out.open(DBase::fileName,ios::app);

        //megeluarkan isi dari data.txt
        DBase::out << data.stringify();

        //menutup daabase
        DBase::out.close();
    }

    void showAll(){
        
        //melihat isi data database
        DBase::in.open(DBase::fileName,ios::in);
        string nama,nim,jurusan;\

        //urutan database dimulai 1
        int index = 1;

        while(!DBase::in.eof()){

            DBase::in >> nama;
            DBase::in >> nim;
            DBase::in >> jurusan;

            cout << index++;
            cout << ".\t";
            cout << nama << "\t\t";
            cout << nim << "\t";
            cout << jurusan << endl;
        }

        DBase::in.close();

    }

};

int main(){

    string nim,nama,jurusan;

    //input user
    cout << "MASUKKAN BIODATA MAHASISWA" << endl;
    cout <<"Nama    : ";
    cin >> nama;
    cout << "NIM     : ";
    cin >> nim;
    cout <<"Jurusan : ";
    cin >> jurusan;

    //membuat object untuk menerima hasil input user
    Mahasiswa dataMhs = Mahasiswa(nama,nim,jurusan);
    DBase database = DBase("Data.txt");

    //memasukkan lalu menyimpan data ke database
    database.save(dataMhs);

    //melihat semua isi data dalam database
    database.showAll();

return 0; 
}