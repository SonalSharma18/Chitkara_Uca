
import java.io.*;

import java.util.*;


class HeapC {

    int a[] = new int[100];
    int n = 0;

    public void insert(int i) {
        a[++n] = i;
        swim(n);

    }

    private void swim(int i) {
        if (i <= 1) {
            return;
        }
        if (a[i] > a[i / 2]) {
            swap(i, i / 2);
             swim(i / 2);
        }
       
    }

    private void swap(int n1, int n2) {
        int temp = a[n1];
        a[n1] = a[n2];
        a[n2] = temp;
    }

    public int getMax() {
        int t = a[1];
        swap(1, n);
        n--;
        sink(1);
        return t;
    }

    private void sink(int i) {
        int max = i, l = 2 * i, r = (2 * i) + 1;
        if (l <= n && a[l] > a[max]) {
            max = l;
        }
        if (r <= n && a[r] > a[max]) {
            max = r;
        }
        if (max != i) {
            swap(i, max);
            sink(max);
        }
    }

    public void hsort() {

       // int len = arr.length;
        int j = 0;
      /*  for (int i = 0; i < arr.length; i++) {
            a[++j] = arr[i];
        }
*/
        n = a.length;
        for (int i = n / 2; i >= 1; i--) {
            sink(i);
        }
        while (n > 1) {
            getMax();
        }

    }

    public void printing() {

        int i = 1;
        while (a[i] != '\0') {
            System.out.print(a[i] + " ");
            i++;
        }
    }
    }

public class Heap {

    public static void main(String[] args) {
        //int arr[] = {4, 6, 5, 1, 8, 2, 9};
        HeapC hc = new HeapC();
        hc.insert(4);
        hc.insert(6);
        hc.insert(5);
        hc.insert(1);
        hc.insert(8);
        hc.insert(2);
        hc.insert(9);
       //hc.hsort();
        int m=hc.getMax();
         System.out.println(m);
        hc.printing();
    }
}
