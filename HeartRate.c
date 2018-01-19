/* Author: Sheng Kuang Hou
 * Date  : Jan 19, 2018
 * https://open.kattis.com/problems/heartrate
 * Easy
 */


#include <stdio.h>
#include <stdlib.h>

struct heartInfo {
    double minABPM;
    double bpm;
    double maxABPM;
};

int main() {

    int i, n, ip;
    double fp;

    scanf("%d", &n);
    struct heartInfo record[n];

    for(i=0; i<n; i++) {
        scanf("%d %lf", &ip, &fp);
        double bpm = ((60 * ip) / fp);
        double minABPM = bpm - (60.0/ fp);
        double maxABPM = bpm + (60.0/ fp);

        record[i].minABPM = minABPM;
        record[i].bpm = bpm;
        record[i].maxABPM = maxABPM;
    }

    for(i=0; i<n; i++) {
        printf("%.4f %.4f %.4f\n", record[i].minABPM, record[i].bpm,
               record[i].maxABPM);
    }


	return 0;
}
