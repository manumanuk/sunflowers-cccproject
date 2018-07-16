#include <iostream>

using namespace std;

int main () {
    int horzCheck = 0;
    int horzNCheck = 0;
    bool horizontal = false;

    int vertCheck = 0;
    int vertNCheck = 0;
    bool vertical = false;

    int N;
    cin >> N;

    int data [N][N];

    for (int i = 0; i < N; ++i) {
        for (int a = 0; a < N; ++a) {
            cin >> data[i][a];
        }
    }

    //CHECK FOR 360 DEGREE ROTATION
    //horizontal order
    for (int i = 0; i < N; ++i) {
        for (int a = 0; a < N; ++a) {
            if (data[i][a] < data[i][a+1]) {
                horzCheck++;
                if (horzCheck == (N-1)) {
                    horzNCheck++;
                }
            }
        }
        horzCheck = 0;
    }

    if (horzNCheck == N) {
        horizontal = true;
    } else {
        horizontal = false;
    }

    //vertical order
    for (int i = 0; i < N; ++i) {
        for (int a = 0; a < N; ++a) {
            if (data[a][i] < data [a+1][i]) {
                vertCheck++;
                if (vertCheck == (N-1)) {
                    vertNCheck++;
                }
            }
        }
        vertCheck = 0;
    }

    if (vertNCheck == N) {
        vertical = true;
    } else {
        vertical = false;
    }

    if (horizontal == true && vertical == true) {
        for (int i = 0; i < N; ++i) {
            for (int a = 0; a < N; ++a) {
                cout << data[i][a] << " ";
            }
            cout << endl;
        }
		goto here;
    }

    //VARIABLE RESET
    horzCheck = 0;
    horzNCheck = 0;
    horizontal = false;

    vertCheck = 0;
    vertNCheck = 0;
    vertical = false;

    //CHECK FOR 90 CW ROTATION
    //horizontal order
    for (int i = 0; i < N; ++i) {
        for (int a = (N-1); a > 0; --a) {
            if (data[i][a] < data[i][a-1]) {
                horzCheck++;
                if (horzCheck == (N-1)) {
                    horzNCheck++;
                }
            }
        }
        horzCheck = 0;
    }

    if (horzNCheck == N) {
        horizontal = true;
    } else {
        horizontal = false;
    }

    //vertical order
    for (int i = 0; i < N; ++i) {
        for (int a = 0; a < N; ++a) {
            if (data[a][i] < data [a+1][i]) {
                vertCheck++;
                if (vertCheck == (N-1)) {
                    vertNCheck++;
                }
            }
        }
        vertCheck = 0;
    }

    if (vertNCheck == N) {
        vertical = true;
    } else {
        vertical = false;
    }

    if (horizontal == true && vertical == true) {
        for (int i = (N-1); i >= 0; --i) {
            for (int a = 0; a < N; ++a) {
                cout << data[a][i] << " ";
            }
            cout << endl;
        }
		goto here;
    }

    //VARIABLE RESET
    horzCheck = 0;
    horzNCheck = 0;
    horizontal = false;

    vertCheck = 0;
    vertNCheck = 0;
    vertical = false;

    //CHECK FOR 90 CCW ROTATION
    //horizontal order
    for (int i = 0; i < N; ++i) {
        for (int a = 0; a < N; ++a) {
            if (data[i][a] < data[i][a+1]) {
                horzCheck++;
                if (horzCheck == (N-1)) {
                    horzNCheck++;
                }
            }
        }
        horzCheck = 0;
    }

    if (horzNCheck == N) {
        horizontal = true;
    } else {
        horizontal = false;
    }

    //vertical order
    for (int i = 0; i < N; ++i) {
        for (int a = (N-1); a > 0; --a) {
            if (data[a][i] < data[a-1][i]) {
                vertCheck++;
                if (vertCheck == (N-1)) {
                    vertNCheck++;
                }
            }
        }
        vertCheck = 0;
    }

    if (vertNCheck == N) {
        vertical = true;
    } else {
        vertical = false;
    }

     if (horizontal == true && vertical == true) {
        for (int i = 0; i < N; ++i) {
            for (int a  = (N-1); a >= 0; --a) {
                cout << data[a][i] << " ";
            }
            cout << endl;
        }
		goto here;
    }

	//VARIABLE RESET
    horzCheck = 0;
    horzNCheck = 0;
    horizontal = false;

    vertCheck = 0;
    vertNCheck = 0;
    vertical = false;
	
    //CHECK FOR 180 DEGREE ROTATION
    for (int i = 0; i < N; ++i) {
        for (int a = (N-1); a > 0; --a) {
            if (data[a][i] < data[a-1][i]) {
                vertCheck++;
                if (vertCheck == (N-1)) {
                    vertNCheck++;
                }
            }
        }
        vertCheck = 0;
    }

    if (vertNCheck == N) {
        vertical = true;
    } else {
        vertical = false;
    }

	//horizontal check
    for (int i = 0; i < N; ++i) {
        for (int a = (N-1); a > 0; --a) {
            if (data[i][a] < data[i][a-1]) {
                horzCheck++;
                if (horzCheck == (N-1)) {
                    horzNCheck++;
                }
            }
        }
        horzCheck = 0;
    }

    if (horzNCheck == N) {
        horizontal = true;
    } else {
        horizontal = false;
    }

    if (horizontal == true && vertical == true) {
        for (int i = (N-1); i >= 0; --i) {
            for (int a  = (N-1); a >= 0; --a) {
                cout << data[a][i] << " ";
            }
            cout << endl;
        }
		goto here;
    }

	here:return 0;
}
