#include <fstream>
using namespace std;

int main()
{
	string start[] = { "Cr","Cur","Kr","Ker","Khr","Kur","Qr","Qer","Qhr" };
	string middle[] = { "aai","aay","ae","aei","aey","ai","aie","aiy","ay","e","ei","eiy","ey" };
	string end[] = { "g","ge","gg","ggh","gh","ghe","gu","hg","hgg" };

	int i, j, k,
		s1 = 9, s2 = 13, s3 = 8;

	ofstream fout("craig.csv");
	for (j = 0; j < s2; j++)
	{
		for (k = 0; k < s3; k++)
		{
			for (i = 0; i < s1; i++)
			{
				fout << start[i] << middle[j] << end[k] << ",";
			}
			fout << endl;
		}
	}
	fout << (s1 * s2 * s3) << endl;
}
