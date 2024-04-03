package demo;

public class Diamond {
	public static void main(String[] args) {
		int row=5;
		int star = 1;
		int space = row-1;
		
		for(int i=0; i<row-1; i++) {
			for(int k=0; k<space; k++) {
				System.out.print(" ");
			}
			for(int j=0; j<star; j++) {
				if(i==4 || j==0 || j==star-1) {
					System.out.print("*");
				} else {
					System.out.print(" ");
				}
			}
			System.out.println();
			star+=2;
			space--;
		}
		for(int i=0; i<row; i++) {
			for(int k=0; k<space; k++) {
				System.out.print(" ");
			}
			for(int j=0; j<star; j++) {
				if(i==4 || j==0 ||j==star-1) {
					System.out.print("*");
				} else {
					System.out.print(" ");
				}
			}
			System.out.println();
			star-=2;
			space++;
		}
	}
}
