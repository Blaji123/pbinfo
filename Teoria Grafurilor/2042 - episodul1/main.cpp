#include <vector>
#include <stdio.h>
#include <ctype.h>
using namespace std;
class InParser {
private:
	FILE *fin;
	char *buff;
	int sp;

	char read_ch() {
		++sp;
		if (sp == 4096) {
			sp = 0;
			fread(buff, 1, 4096, fin);
		}
		return buff[sp];
	}

public:
	InParser(const char* nume) {
		fin = fopen(nume, "r");
		buff = new char[4096]();
		sp = 4095;
	}

	InParser& operator >> (int &n) {
		char c;
		while (!isdigit(c = read_ch()) && c != '-');
		int sgn = 1;
		if (c == '-') {
			n = 0;
			sgn = -1;
		} else {
			n = c - '0';
		}
		while (isdigit(c = read_ch())) {
			n = 10 * n + c - '0';
		}
		n *= sgn;
		return *this;
	}

	InParser& operator >> (long long &n) {
		char c;
		n = 0;
		while (!isdigit(c = read_ch()) && c != '-');
		long long sgn = 1;
		if (c == '-') {
			n = 0;
			sgn = -1;
		} else {
			n = c - '0';
		}
		while (isdigit(c = read_ch())) {
			n = 10 * n + c - '0';
		}
		n *= sgn;
		return *this;
	}
};
class OutParser {
private:
    FILE *fout;
    char *buff;
    int sp;

    void write_ch(char ch) {
        if (sp == 50000) {
            fwrite(buff, 1, 50000, fout);
            sp = 0;
            buff[sp++] = ch;
        } else {
            buff[sp++] = ch;
        }
    }


public:
    OutParser(const char* name) {
        fout = fopen(name, "w");
        buff = new char[50000]();
        sp = 0;
    }
    ~OutParser() {
        fwrite(buff, 1, sp, fout);
        fclose(fout);
    }

    OutParser& operator << (int vu32) {
        if (vu32 <= 9) {
            write_ch(vu32 + '0');
        } else {
            (*this) << (vu32 / 10);
            write_ch(vu32 % 10 + '0');
        }
        return *this;
    }

    OutParser& operator << (long long vu64) {
        if (vu64 <= 9) {
            write_ch(vu64 + '0');
        } else {
            (*this) << (vu64 / 10);
            write_ch(vu64 % 10 + '0');
        }
        return *this;
    }

    OutParser& operator << (char ch) {
        write_ch(ch);
        return *this;
    }
    OutParser& operator << (const char *ch) {
        while (*ch) {
            write_ch(*ch);
            ++ch;
        }
        return *this;
    }
};
InParser cin("episodul1.in");
OutParser cout("episodul1.out");
vector<int> T(1000001);
vector<long long> C(1000001);
int radacina(int a){
   if(T[a]==a) return a;
   else return T[a]=radacina(T[a]);
}
void leaga(int a,int b,int c){
   if(T[a]>T[b])
    T[a]=T[b],C[b]=C[a]+C[b]+c;
   else
    T[b]=T[a],C[a]=C[a]+C[b]+c;
}
int main()
{
    int eveniment,n=0,x,y,c,M,r1,r2;
    cin>>M;
    for(int i=1;i<=M;i++){
        cin>>eveniment;
        if(eveniment==1)
            T[++n]=n;
        else if(eveniment==2){
            cin>>x>>y>>c;
            r1=radacina(x);
            r2=radacina(y);
            if(r1!=r2)
             leaga(r1,r2,c);
        }
       else if(eveniment==3){
            cin>>x;
            cout<<C[radacina(x)]<<'\n';
       }
    }
    return 0;
}
