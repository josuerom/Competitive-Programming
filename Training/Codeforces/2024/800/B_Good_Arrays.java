
/**
 *   author:  josuerom
 *   created: 31/08/23 16:25:55
**/
import java.io.*;
import java.util.*;
import static java.lang.Math.*;

public class B_Good_Arrays {
   public static void main(String[] authorJosuerom) throws IOException {
      FastReader io = new FastReader("B_Good_Arrays");
      int tt = io.nextInt();
      while (tt-- > 0) {
         int n = io.nextInt();
         int[] a = io.readArray(n);
         solve(io, n, a);
      }
      io.close();
      System.exit(0);
   }

   public static void solve(FastReader io, int n, int a[]) {
      if (n == 1) {
         io.println("NO");
         return;
      }
      int[] b = Arrays.copyOf(a, n);
      Arrays.sort(b);
      int different = 1, sum = 0;
      for (int i = 0; i < n - 1; i++) {
         sum += b[i];
         if (b[i] != b[i + 1])
            ++different;
      }
      sum += b[n - 1];
      int r = sum / n;
      if (different == 1 && r * n != sum) {
         io.println("NO");
         return;
      }
      if (different == n) {
         io.println("YES");
         return;
      }
      int indx = Arrays.binarySearch(b, r);
      if (indx < 0 && r * n == sum) {
         io.println("YES");
         return;
      }
      io.println("YES");
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
            a[i] = Integer.parseInt(next());
         }
         return a;
      }
   }
}