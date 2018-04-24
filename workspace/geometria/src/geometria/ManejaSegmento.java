package geometria;

public class ManejaSegmento {
	public static void main(String[] args) {
		punto a,b;
		segmento ab;
		a=new punto(2,3,'A');
		b=new punto(3,1,'B');
		ab=new segmento(a,b);
		Sistem.out.printl("El segmento tiene una longitud de "+ab.getDistance());
	}
}
