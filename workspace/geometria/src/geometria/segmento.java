package geometria;

public class segmento {
	private punto p1;
	private punto p2;
	public segmento(punto p1, punto p2) {
		this.p1 = p1;
		this.p2 = p2;
	}
	public punto getP1() {
		return p1;
	}
	public void setP1(punto p1) {
		this.p1 = p1;
	}
	public punto getP2() {
		return p2;
	}
	public void setP2(punto p2) {
		this.p2 = p2;
	}

}
public double getDistance(){
	double distance;
	double c1,c2;
	c1=p2.getX()-p1.getX();
	c2=p2.getY()-p1 getY();
	distance=Math.sqrt(Math.pow(c1,2)+Math.pow(c2,2));
	
	return distance;
}