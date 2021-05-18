#include <iostream>
#include <vector>
using namespace std;

const int seq_size = 18;

bool next_seq = false;

vector<int> pell_seq( seq_size );

int elem_vals[ seq_size ] = {
        1, 2, 3,
        3, 4, 7,
        2, 5, 12,
        3, 6, 10,
        4, 9, 16,
        5, 12, 22
};

string seq_names[ max_seq ] = {
        ""
};

int usr_guess = 0;

char usr_rsp = 0;

vector<int> elem_seq( elem_vals, elem_vals+seq_size );

int main() {

//    pell_seq[ 0 ] = 1;
//    pell_seq[ 1 ] = 2;
//
//    for ( int ix = 2; ix < seq_size; ++ix )
//        pell_seq[ ix ] = pell_seq[ ix-2 ] + 2*pell_seq[ ix-1 ];
//    //get the Pell nums
//
//    cout << " The first " << elem_seq.size()
//         << " elements of the Pell Series:\n\t";
//
//    for ( int ix = 0; ix < elem_seq.size(); ++ix )
//        cout << pell_seq[ ix ] << ' ';
//

    int cur_tuple = 0;
    while (next_seq == true &&
           cur_tuple < seq_size )
    {
        cout << "The first two elements of the sequence are: "
             << elem_seq[ cur_tuple ] << ", "
             << elem_seq[ cur_tuple+1 ]
             << "\nWhat is the next element?";
        if ( usr_guess == elem_seq[ cur_tuple+2 ] )
            //correct!
        if ( usr_rsp == 'N' || usr_rsp == 'n')
            next_seq = false;
        else cur_tuple += 3;
    }

    return 0;
}
