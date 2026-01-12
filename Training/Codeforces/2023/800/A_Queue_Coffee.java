
/**
 *   author:  josuerom
 *   created: 04/08/23 18:51:29
**/
import java.io.*;
import java.util.*;
import static java.lang.Math.*;

public class A_Queue_Coffee {
   static FastReader io = new FastReader();
   static Queue<String> a = new LinkedList<String>();
   static Queue<String> b = new LinkedList<String>();

   public static void main(String[] authorJosuerom) {
      int tt = io.nextInt();
      while (tt-- > 0) {
         String[] s = io.nextLine().split(" ");
         solve(s);
      }
      io.close();
      System.exit(0);
   }

   public static void solve(String s[]) {
      if (s[0].equals("LLEGA")) {
         if (s[1].equals("ALUMNO"))
            a.add(s[2]);
         else
            b.add(s[2]);
      } else {
         if (!b.isEmpty())
            io.println(b.remove());
         else
            io.println(a.remove());
      }
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