#include <iostream>
#include <string>

using namespace std;

class ArrayUtil {
public:
 //s1과 s2를 연결한 새로운 배열을 동적 생성하여 리턴
 static int* concat(int s1[], int size1, int s2[], int size2, int&retSize);
 //s1에서 s2에 있는 숫자를 모두 삭제한 새로운 배열을 동적 생성하여 리턴
 static int* remove(int s1[], int size1, int s2[], int size2, int&retSize);
};

//concat() 구현합니다.
int* ArrayUtil::concat(int s1[], int size1, int s2[], int size2, int&retSize)
{
    retSize = size1 + size2;
    int *p = new int[retSize]; // 동적할당
    if(!p) return nullptr;

    for(int i = 0; i<size1; i++)
    {
        *(p+i) = s1[i];
    }

    for(int i = 0; i<size2; i++)
    {
        *(p+i+size1) = s2[i];
    }
    
    return p;
}

//remove() 구현합니다.
int* ArrayUtil::remove(int s1[], int size1, int s2[], int size2, int &retSize)
{
    int *p = new int[size1]; // 동적할당
    if(!p)
    { 
        retSize = 0;
        return nullptr;        
    }
    int len = 0, j;
        
    for(int i = 0; i<size1; i++)
    {
        for(j = 0; j<size2; j++)
        {
            if(s1[i] == s2[j])
                break;
        }

        if(j == size2)
        {
            p[len] = s1[i];
            len++;
        }
    }
    retSize = len;

    int *n = new int[retSize];

    for(int i = 0; i<retSize; i++)
    {
        n[i] = p[i];
    }    
    delete(p);    
    return n;
}

int main() {
    cout << "20185237 류진영" << endl;
    int xcount = 0, ycount = 0;
    int *x, *y;
    //x배열의 원소의 개수(1~5)를 입력 받는다.
        
    cout << "x 배열의 원소(1~5)는 몇 개 ?" << endl;
    cin >> xcount;
    
    //입력 받은 수만큼 x배열을 동적 생성한다.
    
    x = new int[xcount];
    
    //정수를 입력 받아 x배열에 저장한다.
    cout << "x배열에 저장할 정수 입력: ";
    for(int i = 0; i< xcount; i++)
    {
        cin >> x[i];
    }
    
    //y배열의 원소의 개수(1~5)를 입력 받는다. 
    cout << "y 배열의 원소(1~5)는 몇 개 ?" << endl;
    cin >> ycount;

    //입력 받은 수만큼 y배열을 동적 생성한다.

    y = new int[ycount];

    //정수를 입력 받아 y배열에 저장한다.
    cout << "y배열에 저장할 정수 입력: ";
    for(int i = 0; i< ycount; i++)
    {
        cin >> y[i];
    }


    int retsize = 0;
    //concat() 함수를 호출한다.
    cout << "\nx배열과 y배열을 연결한 배열은 ";
    int *conarr = ArrayUtil::concat(x,xcount,y,ycount,retsize);

    for(int i = 0; i < retsize; i++) cout << conarr[i] << ' ';
    cout << endl;

    //remove() 함수를 호출한다.
    int *remarr = ArrayUtil::remove(x,xcount,y,ycount,retsize);
    cout << "\nx배열에서 y배열의 원소를 삭제한 결과, x배열의 개수는 " << retsize << "개, ";
    for (int i = 0; i < retsize; i++) cout << remarr[i] << ' ';
    cout << endl;
    //동적 할당된 모든 변수를 해제 한다. 
    delete(x);
    delete(y);
    delete(conarr);
    delete(remarr);
}