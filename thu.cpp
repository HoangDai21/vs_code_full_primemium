  #include<iostream>
  using namespace std;
	
  int timsochan(int n){
    if ( n <= 1)
    return 0;
    else if(n %2 != 0){
        return -(n - timsochan(n - 1));
    }
    else {
        return -(n + timsochan(n - 1));
    }
  }