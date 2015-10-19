public class Progress
{
	public static void main(String []a) throws Exception
	{
		progress(50);
	}
	public static void progress(int interval) throws Exception
	{
		int cSize=0;
		int mod=0;
		char p_ch[]={'-','\\','|','/'};
		System.out.println("\n");
		for (int i=1;i<=100;i++){
			mod=i%4;
			for(int j=0;j<4;j++){
				Thread.sleep(Long.valueOf(70));
				System.out.printf("\b%c",p_ch[j]);
			}
			
			//if(mod==0){
			System.out.printf("\b=");
			System.out.printf(" (%d%c)",i,'%');
			if(i<10)
				System.out.printf("\b\b\b\b");
			else
				System.out.printf("\b\b\b\b\b");
			//}
			Thread.sleep(Long.valueOf(interval));
		}
	}
}
