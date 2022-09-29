public class Tower {
        static void TowerOfHanoi(int n,char S,char H,char D){
            if(n==1){
                System.out.println("Disk "+n+" from "+S+" "+"is moving to"+" "+H);
                return;
            }
            else{
                TowerOfHanoi(n-1, S, D, H);
                System.out.println("Disk "+n+" from "+S+" "+"is moving to"+" "+H);
                TowerOfHanoi(n-1, D, H, S);
            }
        }
public static void main(String[] args) {
        TowerOfHanoi(5, 'S', 'H', 'D');
        }
    }
    
