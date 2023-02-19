/**
 *  author:  Daneyis Ramos
 *  created: 09/02/23 19:49:54
**/
package rpc11_solutions;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;

public class LanzamientoDado {
   public static void main(String[] args) {
      pc2Read();
   }

   public static void pc2Read() {
      int lanzamiento = 1, numero;

      BufferedReader buffer = new BufferedReader(new InputStreamReader(System.in));

      try {
         System.out.print("Ingrese 1 para lanzar el dado: ");
         lanzamiento = Integer.valueOf(buffer.readLine());
         while (lanzamiento == 1) {
            numero = (int) (Math.random() * 6 ) + 1;
            System.out.printf("%d", numero);
            System.out.print("\nPresione 1 para lanzar nuevamente o cualquier numero para salir: ");
            lanzamiento = Integer.valueOf(buffer.readLine());
         }
         buffer.close();
      } catch (NullPointerException e) {
         e.printStackTrace();
      } catch (IOException e) {
         e.printStackTrace();
      }
   }
}