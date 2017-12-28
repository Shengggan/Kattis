/**
 * Author: Sheng Kuang Hou
 * Date  : Oct 19, 2017
 * https://open.kattis.com/problems/spavanac
 * Easy
 */

import java.util.Scanner;

public class Spavanac {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int h = input.nextInt();
        int m = input.nextInt();

        if (m == 45){
            m = 00;
        }
        else if (m < 45) {
            m = 60 -(45 - m);
            if (h == 0) {
                h = 23;
            }
            else{
                h = h - 1;
            }
        }
        else {
            m = m - 45;
        }

        System.out.println(h + " " + m);
    }
}
