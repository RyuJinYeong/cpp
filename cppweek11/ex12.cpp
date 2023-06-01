#include <iostream>
#include <string>

using namespace std;

class ArrayUtil {
public:
 //s1�� s2�� ������ ���ο� �迭�� ���� �����Ͽ� ����
 static int* concat(int s1[], int size1, int s2[], int size2, int&retSize);
 //s1���� s2�� �ִ� ���ڸ� ��� ������ ���ο� �迭�� ���� �����Ͽ� ����
 static int* remove(int s1[], int size1, int s2[], int size2, int&retSize);
};

//concat() �����մϴ�.
int* ArrayUtil::concat(int s1[], int size1, int s2[], int size2, int&retSize)
{
    retSize = size1 + size2;
    int *p = new int[retSize]; // �����Ҵ�
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

//remove() �����մϴ�.
int* ArrayUtil::remove(int s1[], int size1, int s2[], int size2, int &retSize)
{
    int *p = new int[size1]; // �����Ҵ�
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
    cout << "20185237 ������" << endl;
    int xcount = 0, ycount = 0;
    int *x, *y;
    //x�迭�� ������ ����(1~5)�� �Է� �޴´�.
        
    cout << "x �迭�� ����(1~5)�� �� �� ?" << endl;
    cin >> xcount;
    
    //�Է� ���� ����ŭ x�迭�� ���� �����Ѵ�.
    
    x = new int[xcount];
    
    //������ �Է� �޾� x�迭�� �����Ѵ�.
    cout << "x�迭�� ������ ���� �Է�: ";
    for(int i = 0; i< xcount; i++)
    {
        cin >> x[i];
    }
    
    //y�迭�� ������ ����(1~5)�� �Է� �޴´�. 
    cout << "y �迭�� ����(1~5)�� �� �� ?" << endl;
    cin >> ycount;

    //�Է� ���� ����ŭ y�迭�� ���� �����Ѵ�.

    y = new int[ycount];

    //������ �Է� �޾� y�迭�� �����Ѵ�.
    cout << "y�迭�� ������ ���� �Է�: ";
    for(int i = 0; i< ycount; i++)
    {
        cin >> y[i];
    }


    int retsize = 0;
    //concat() �Լ��� ȣ���Ѵ�.
    cout << "\nx�迭�� y�迭�� ������ �迭�� ";
    int *conarr = ArrayUtil::concat(x,xcount,y,ycount,retsize);

    for(int i = 0; i < retsize; i++) cout << conarr[i] << ' ';
    cout << endl;

    //remove() �Լ��� ȣ���Ѵ�.
    int *remarr = ArrayUtil::remove(x,xcount,y,ycount,retsize);
    cout << "\nx�迭���� y�迭�� ���Ҹ� ������ ���, x�迭�� ������ " << retsize << "��, ";
    for (int i = 0; i < retsize; i++) cout << remarr[i] << ' ';
    cout << endl;
    //���� �Ҵ�� ��� ������ ���� �Ѵ�. 
    delete(x);
    delete(y);
    delete(conarr);
    delete(remarr);
}