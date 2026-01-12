
/**
 *   author:  josuerom
 *   created: 26/07/23 16:58:02
**/
import java.io.*;
import java.util.*;
import static java.lang.Math.*;

public class A_Historical_TV_Remote_Control {
   static FastReader io = new FastReader();

   public static void main(String[] authorJosuerom) {
      int n = io.nextInt();
      int[] cn = io.readArray(n);
      String channel = io.next();
      solve(n, cn, channel);
      io.close();
      System.exit(0);
   }

   public static void solve(int n, int cn[], String channel) {
      String[] digits = channel.split("");
      int dg = digits.length;
      int in1 = 0, in2 = 0, in3 = 0;
      if (dg == 1) {
         in1 = Arrays.binarySearch(cn, Integer.parseInt(digits[0]));
         if (in1 < 0) {
            io.println(0);
            return;
         }
      } else if (dg == 2) {
         in1 = Arrays.binarySearch(cn, Integer.parseInt(digits[0]));
         in2 = Arrays.binarySearch(cn, Integer.parseInt(digits[1]));
         if (in1 < 0 && in2 < 0) {
            io.println(0);
            return;
         }
      } else {
         in1 = Arrays.binarySearch(cn, Integer.parseInt(digits[0]));
         in2 = Arrays.binarySearch(cn, Integer.parseInt(digits[1]));
         in3 = Arrays.binarySearch(cn, Integer.parseInt(digits[2]));
         if (in1 < 0 && in2 < 0 && in3 < 0) {
            io.println(0);
            return;
         }
      }
      int[] ch_jumps = new int[820];
      for (int k = 1, l = 0; k <= 999; k++) {
         String[] m = String.valueOf(k).split("");
         Arrays.sort(m);
         dg = m.length;
         if (dg == 1) {
            in1 = Arrays.binarySearch(cn, k);
            if (in1 < 0) {
               ch_jumps[l] = k;
               l++;
            }
         } else if (dg == 2) {
            in1 = Arrays.binarySearch(cn, Integer.parseInt(m[0]));
            in2 = Arrays.binarySearch(cn, Integer.parseInt(m[1]));
            if (in1 < 0 && in2 < 0) {
               ch_jumps[l] = k;
               l++;
            }
         } else {
            in1 = Arrays.binarySearch(cn, Integer.parseInt(m[0]));
            in2 = Arrays.binarySearch(cn, Integer.parseInt(m[1]));
            in3 = Arrays.binarySearch(cn, Integer.parseInt(m[2]));
            if (in1 < 0 && in2 < 0 && in3 < 0) {
               ch_jumps[l] = k;
               l++;
            }
         }
      }
      int destination = Integer.parseInt(channel), ans = 999;
      for (int i = 0; i < 819; i++) {
         if (i > 1 && ch_jumps[i] == 0)
            break;
         ans = min(ans, abs(destination - ch_jumps[i]));
      }
      // io.println(Arrays.toString(ch_jumps));
      io.println(ans);
   }

   static class FastReader extends PrintWriter {
      private BufferedReader br;
      private StringTokenizer st;

      public FastReader() {
         this(System.in, System.out);
      }

      public FastReader(InputStream i, OutputStream o) {
         super(o);
         br = new BufferedReader(new InputStreamReader(i));
      }

      public FastReader(String problemName) throws IOException {
         super(problemName + ".out");
         br = new BufferedReader(new FileReader(problemName + ".in"));
      }

      public String next() {
         try {
            while (st == null || !st.hasMoreTokens())
               st = new StringTokenizer(br.readLine());
            return st.nextToken();
         } catch (Exception e) {
            e.printStackTrace();
         }
         return null;
      }

      public String nextLine() {
         String line = null;
         try {
            line = br.readLine();
         } catch (IOException e) {
            e.printStackTrace();
         }
         return line;
      }

      public int nextInt() {
         return Integer.parseInt(next());
      }

      public long nextLong() {
         return Long.parseLong(next());
      }

      public double nextDouble() {
         return Double.parseDouble(next());
      }

      public int[] readArray(int n) {
         int[] a = new int[n];
         for (int i = 0; i < n; i++) {
            a[i] = io.nextInt();
         }
         return a;
      }
   }
}