import java.util.*;
public class five {

	public static void main(String[] args) {
		
		Scanner scn=new Scanner(System.in);
		int arr[][]=new int[5][6];
		int max[]=new int[5];
		int sp[]=new int[5];
		for(int i=0;i<=4;i++){
			for(int j=0;j<5;j++){
				
				if(j!=5&&i!=4){
				arr[i][j]=scn.nextInt();
				arr[i][5]=arr[i][5]+arr[i][j];
				arr[4][j]=arr[4][j]+arr[i][j];
				}
				else if(j<4)
					arr[i][5]=arr[i][5]+arr[j][5];
			}
		}
		
		//arr[4][5]=arr[0][5]+arr[1][5]+arr[2][5]+arr[3][5];
		
		System.out.println("\t\tProduct_1\tProduct_2\tProduct_3\tproduct_4\tProduct_5");
		for(int i=0;i<5;i++){
			if(i==4)
				System.out.print("TOTALS\t\t");
			else
				System.out.print("Product#"+(i+1)+"\t");
			
			for(int j=0;j<6;j++){
				System.out.print("\t"+arr[i][j]+"\t");
			}
			System.out.println();
		}
		
		
		for(int i=0;i<5;i++){
			for(int j=0;j<4;j++){
				if(max[i]<arr[j][i]){
					max[i]=arr[j][i];
					sp[i]=j+1;
				}
			}
		}
		System.out.println("\t  max unit\tSalesperson");
		for(int i=0;i<5;i++){
				System.out.println("PRODUCT#"+i+"\t"+max[i]+"\t\t"+sp[i]);
			}
		
	}

}
