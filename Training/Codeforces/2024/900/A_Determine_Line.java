/**
   ░░█ █▀█ █▀ █░█ █▀▀ █▀█ █▀█ █▀▄▀█
   █▄█ █▄█ ▄█ █▄█ ██▄ █▀▄ █▄█ █░▀░█
   created: 23/04/24 11:30:14
**/
import java.io.*;
import java.util.*;
import static java.lang.Math.*;

public class A_Determine_Line {
   public static void main(String[] args) {
      try (FastReader io = new FastReader()) {
         int tt = 1;
         // tt = io.nextInt();
         while (tt-- > 0) solve(io);
      }
      System.exit(0);
   }

   public static void solve(FastReader io) {
      int n = io.nextInt(), _min = 105, _max = 0;
      boolean[][] dp = new boolean[n][105];
      for (int i = 0; i < n; i++) {
         Arrays.fill(dp[i], false);
      }
      for (int i = 0; i < n; i++) {
         String s[] = io.nextLine().split(" ");
         for (int j = 1; j < s.length; j++) {
            int in = Integer.parseInt(s[j]);
            dp[i][in] = true;
            _min = min(_min, in);
            _max = max(_max, in);
         }
      }
      String ans = "";
      for (int i = _min; i <= _max; i++) {
         boolean flag = true;
         for (int k = 0; k < n; k++) {
            if (!dp[k][i]) {
               flag = false;
               break;
            }
         }
         if (flag) ans += i + " ";
      }
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

      public FastReader(String idFile) throws IOException {
         super("samples/output.out");
         br = new BufferedReader(new FileReader("samples/" + idFile));
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
            a[i] = nextInt();
         }
         return a;
      }
   }
}