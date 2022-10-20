#include <bits/stdc++.h>
using namespace std;

int main() {
 int n;
 cout << "Which Pattern do you want to print?" << endl;
 cout << "Choose any One" << endl;
 cout << "1. Rectangular Star Pattern" << endl;
 cout << "2. Numeric Pattern" << endl;
 cout << "3. Reverse Numeric Pattern" << endl;
 cout << "4. Incrementing Numeric Pattern" << endl;
 cout << "5. Reverse Incrementing Numeric Pattern" << endl;
 cout << "6. Triangular Star Pattern" << endl;
 cout << "7. Row Incrementing Triangular Pattern" << endl;
 cout << "8. Column Incrementing Triangular Pattern" << endl;
 cout << "9. Different Incrementing Triangular Pattern" << endl;
 cout << "10. Decrementing Triangular Pattern" << endl;
 cout << "11. Rectangular Character Pattern(Row)" << endl;
 cout << "12. Rectangular Character Pattern(Column) " << endl;
 cout << "13. Incrementing Rectangular Character Pattern" << endl;
 cout << "14. Different Rectangular Character Pattern" << endl;
 cout << "15. Triangular Character Pattern(Row)" << endl;
 cout << "16. Incrementing Triangular Character Pattern " << endl;
 cout << "17. Different Triangular Character Pattern" << endl;
 cout << "18. Decrementing Triangular Character Pattern" << endl;
 cout << "19. Opposite Faced Triangular Character Pattern" << endl;
 cout << "20. Inverted and Opposite Faced Triangular Character Pattern" << endl;
 cout << "21. Inverted Faced Triangular Character Pattern" << endl;
 cout << "22. Row Incrementing Inverted Triangular Pattern" << endl;
 cout << "23. Row Incrementing Opposite Faced Triangular Pattern" << endl;
 cout << "24. Incrementing Opposite Faced Triangular Pattern" << endl;
 cout << "25. Pyramid Shaped Pattern" << endl;
 cout << "26. Rectangular Shaped Pattern Consisting of Stars as well as Numbers" << endl;

 cin >> n;
 if(n == 1){
    int a;
    cout << "please tell the number of stars you want" << endl;
    cin >> a;
    int i = 1;
    while(i <= a){
        int j = 1;
        while(j <= a){
        cout << "*" << " ";
        j++;
    }
    cout << endl;
    i++;
 }
}
if(n == 2){
    int a;
    cout << "please tell the number of rows of pattern you want to print" << endl ;
    cin >> a;
    int i = 1;
    while(i <= a){
        int j = 1;
        while(j <= a){
            cout << j << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}
if(n == 3){
    int a;
    cout << "please tell the number of rows of pattern you want to print" << endl;
    cin >> a;
    int i = 1;
    while(i <= a){
        int j = 1;
        while(j <= a){
            cout << a-j+1 << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}
if(n == 4){
    int a;
    cout << "please tell the number of rows you want to print" << endl;
    cin >> a;
    int i = 1;
    int value = 1;
    while(i <= a){
        int j = 1;
        while(j <= a){
            cout << value << " ";
            value++;
            j++;
        }
        cout << endl;
        i++;
    }
}
if(n == 5){
    int a;
    cout << "please tell the number of rows you want to print" << endl;
    cin >> a;
    int i = 1;
    int value = a*a;
    while(i <= a){
        int j = 1;
        while(j <= a){
            cout << value << " ";
            value--;
            j++;
        }
        cout << endl;
        i++;
    }
}
if(n == 6){
    int a;
    cout << "please tell the number of rows you want to print" << endl;
    cin >> a;
    int i = 1;
    while(i <= a){
         int j = 1;
         while(j <= i){
            cout << "*";
            j++;
         }
         cout << endl;
         i++;
    }
    }
if(n == 7){
    int a;
    cout << "please tell the number of rows you want to print" << endl;
    cin >> a;
    int i = 1;
    int value = 1;
    while(i <= a){
        int j = 1;
        while(j <= i){
            cout << value;
            j++;
        }
        cout << endl;
        i++;
        value++;
    }
}
if(n == 8){
    int a;
    cout << "please tell the number of rows you want to print" << endl;
    cin >> a;
    int i = 1;
    int value = 1;
    while(i <= a){
        int j = 1;
        while(j <= i){
            cout << value;
            j++;
            value++;
        }
        cout << endl;
        i++;
    }
}
if(n == 9){
 int a;
 cout << "please tell the number of rows you want to print" << endl;
 cin >> a;
 int i = 1;
 int value = 1;
 while(i <= a){
    int j = 1;
    value = i;
    while(j <= i){
        cout << value << "" ;
        j++;
        value++;
    }
    cout << endl;
    i++;
 }
}
if(n == 10){
    int a;
    cout << "please tell the number of rows you want to print" << endl;
    cin >> a;
    int i = 1;
    int value = 1;
    while(i <= a){
        int j = 1;
        value = i;
        while(j <= i){
            cout << value << "";
            j++;
            value--;
        }
        cout << endl;
        i++;
    }
}
if(n == 11){
    int a;
    cout << "Please tell the number of rows you want to print" << endl;
    cin >> a;
    int i = 1;
    while(i <= a){
        int j = 1;
        while(j <= a){
            cout << (char)(65 + i - 1) << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}
if(n == 12){
    int a;
    cout << "Please tell the number of rows you want to print" << endl;
    cin >> a;
    int i = 1;
    while(i <= a){
        int j = 1;
        char ch = 'A';
        while(j <= a){
            cout << ch << " ";
            ch++;
            j++;
        }
        cout << endl;
        i++;
    }
}
if(n == 13){
    int a;
    cout << "Please tell the number of rows you want print" << endl;
    cin >> a;
    int i = 1;
    char ch = 'A';
    while(i <= a){
        int j = 1;
        while(j <= a){
            cout << ch << " ";
            j++;
            ch++;
        }
        cout << endl;
        i++;
}
}
if(n == 14){
    int a;
    cout << "Please tell the number of rows you want to print" << endl;
    cin >> a;
    int i = 1;
    while(i <= a){
         char ch = 'A' + i -1;
         int j = 1;
         while(j <= a){
            cout << ch << " ";
            j++;
            ch++;
         }
         cout << endl;
         i++;
    }
}

if(n == 15){
    int a;
    cout << "Please tell the number of rows you want to print" << endl;
    cin >> a;
    int i = 1;
    while(i <= a){
        int j = 1;
        char ch = 'A' + i - 1;
        while(j <= i){
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}
if(n == 16){
    int a;
    cout << "Please tell the number of rows you want to print" << endl;
    cin >> a;
    int i = 1;
    char ch = 'A';
    while(i <= a){
        int j = 1;
        while(j <= i){
            cout << ch << " ";
            j++;
            ch++;
        }
        cout << endl;
        i++;
    }
}
if(n == 17){
int a;
cout << "Please tell the number of rows you want to print" << endl;
cin >> a;
int i = 1;
while(i <= a){
    int j = 1;
    char ch = 'A' + i - 1;
    while(j <= i){
        cout << ch << " ";
        j++;
        ch++;
    }
    cout << endl;
    i++;
}
}
if(n == 18){
    int a;
    cout << "Please tell the number of rows you want to print" << endl;
    cin >> a;
    int i = 1;
    while(i <= a){
        int j = 1;
        char ch = 'A' + a - i;
        while(j <= i){
            cout << ch << " ";
            j++;
            ch++;
        }
        cout << endl;
        i++;
    }
}
if(n == 19){
    int a;
    cout << "Please tell the number of rows you want to print" << endl;
    cin >> a;
    int i = 1;
    while(i <= a){
        int space = 1;
        while(space <= a - i){
            cout << " ";
            space++;
        }
        int j = 1;
        while(j <= i){
            cout << "*";
            j++;
        }
        i++;
        cout << endl;
    }
}
if(n == 20){
    int a;
    cout << "Please tell the number of rows you want to print" << endl;
    cin >> a;
    int i = 1;
    while(i <= a){
        int j = 1;
        while(j <=a - i + 1){
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
}
if(n == 21){
    int a;
    cout << "Please tell the number of row you want to print" << endl;
    cin >> a;
    int i = 1;
    while(i <= a){
        int space = 1;
        while(space < i){
            cout << " ";
            space++;
        }
        int j = 1;
        while(j <= a - i + 1){
            cout << "*";
            j++;
        }
        i++;
        cout << endl;
    }
}
if(n == 22){
    int a;
    cout << "Please tell the number of rows you want to print" << endl;
    cin >> a;
    int i = 1;
    while(i <= a){
        int space = 1;
        while(space < i){
            cout << " ";
            space++;
        }
        int j = 1;
        while(j <=a - i + 1){
            cout << i;
            j++;
        }
        i++;
        cout << endl;
    }
}
if(n == 23){
    int a;
    cout << "Please tell the number of rows you want to print" << endl;
    cin >> a;
    int i = 1;
    while(i <= a){
        int space = 1;
        while(space <= a - i){
            cout << " ";
            space++;
        }
        int j = 1;
        while(j <= i){
            cout << i;
            j++;
        }
        i++;
        cout << endl;
    }
}
if(n == 24){
    int a;
    cout << "Please tell the number of rows you want to print" << endl;
    cin >> a;
    int i = 1;
    int value = 1;
    while(i <= a){
        int space = 1;
        while(space <= a - i){
            cout << "  ";
            space++;
        }
        int j = 1;
        while(j <= i){
            cout << value;
            j++;
            value++;
        }
        cout << endl;
        i++;
    }
}
if(n == 25){
    int a;
    cout << "Please tell the number of rows you want to print" << endl;
    cin >> a;
    int i = 1;
    while(i <= a){
        int j = 1, space = 1;
        while(space <= a - i){
            cout << "  ";
            space++;
        }
        while(j <= i){
            cout << j << " ";
            j++;
        }
        j = i - 1;
        while(j >= 1){
            cout << j << " ";
            j--;
        }
        i++;
        cout << endl;
    }
}
if(n == 26){
    cout << "Please tell the number of rows you want to print" << endl;
    int a;
    cin >> a;
    int i = 1;
    while(i <= a){
       int j = 1;
       while(j <= a - i + 1){
            cout << j << " ";
            j++;
    }
    j = 1;
    while(j <= 2*(i - 1)){
        cout << "* ";
        j++;
    }
    j = a - i + 1;
    while(j >= 1){
        cout << j << " ";
        j--;
    }
    i++;
    cout << endl;
}
}}
