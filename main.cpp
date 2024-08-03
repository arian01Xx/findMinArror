#include "solution.hpp"
#include "solutioOne.hpp"

using namespace std;

int main(){

	Solution solution;
	vector<vector<int>> points={{10,16},{2,8},{1,6},{7,12}};
	int exitOne=solution.findMinArrowShots(points);
	cout<<"answer one= "<<exitOne<<endl;

	Main main;
	int outut=main.main(2);
	int outputTwo=main.main(1);

	return 0;
}
