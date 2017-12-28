/**
 * Author: Sheng Kuang Hou
 * Date  : Oct 30, 2017
 * https://open.kattis.com/problems/timeloop
 * Easy
 */

import java.util.Scanner;

public class StuckInATimeLoop {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int num = input.nextInt();
        int count = 1;

        while(count <= num) {
            System.out.println(count + " Abracadabra");
            count++;
        }
    }
}
