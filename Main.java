import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        //TIPE DATA & VARIABEL
        int nim;
        String nama;
        Scanner input = new Scanner(System.in);

        //INPUT
        System.out.println("===== INPUT =====");
        System.out.print("Masukkan nama Anda\t: ");
        nama = input.next();
        System.out.print("Masukkan NIM Anda\t: ");
        nim = input.nextInt();

        //OUTPUT
        System.out.println("\n===== OUTPUT =====");
        System.out.println("Nama\t= "+nama);
        System.out.println("NIM\t= "+nim);

        //FOR
        System.out.println("\n===== PERULANGAN FOR =====");
        for (int i=1; i<=5; i++)
        {
            System.out.println("Perulangan ke-"+i);
            System.out.println("\tNama = "+nama);
            System.out.println("\tNIM = "+nim);
        }

        //KONDISIONAL IF
        System.out.println("\n===== KONDISIONAL IF =====");
        int gender;
        System.out.println("1. Perempuan");
        System.out.println("2. Laki-laki");
        System.out.print("Gender Anda : ");
        gender = input.nextInt();
        if (gender == 1)
        {
            System.out.println("Gender\t= Perempuan");
        }
        else if (gender == 2)
        {
            System.out.println("Gender\t= Laki-laki");
        }
        else
        {
            System.out.println("Salah input ...");
        }

        //PERULANGAN WHILE
        System.out.println("\n===== PERULANGAN WHILE =====");
        int j=1;
        while (j <= 5)
        {
            System.out.println("Perulangan ke-"+j);
            System.out.println("\tNama = "+nama);
            j++;
        }

        //PERULANGAN DO WHILE
        System.out.println("\n===== PERULANGAN DO WHILE =====");
        int k=1;
        do
        {
            System.out.println("Perulangan ke-"+k);
            System.out.println("\tNIM = "+nim);
            k++;
        }
        while (k <= 5);

        //ARRAY 1D
        System.out.println("\n===== ARRAY 1 DIMENSI =====");
        int[] angka1={5,6,7,8,9};
        for (int h=0; h<5; h++)
        {
            System.out.println("Anggota array 1d ke-"+h+" = "+angka1[h]);
        }

        //ARRAY 2D
        System.out.println("\n===== ARRAY 2 DIMENSI =====");
        int[][] angka2={{2,4,6,8,10},{1,3,5,7,9}};
        for (int l=0; l<2; l++)
        {
            for (int m=0; m<5; m++)
            {
                System.out.println("Array["+l+"]["+m+"] = "+angka2[l][m]);
            }
        }
        System.out.println("Dalam bentuk matriks : ");
        for (int l=0; l<2; l++)
        {
            for (int m=0; m<5; m++)
            {
                System.out.print(angka2[l][m]+ "\t");
            }
            System.out.println();

        }

    }
}