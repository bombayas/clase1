package geometria;

public class punto {
	private int x;
	private int y;
	public punto(int x, int y, char letra) {
		this.x = x;
		this.y = y;
		this.letra = letra;
	}
	private char letra;
	public int getX() {
		return x;
	}
	public void setX(int x) {
		this.x = x;
	}
	public int getY() {
		return y;
	}
	public void setY(int y) {
		this.y = y;
	}
	public char getLetra() {
		return letra;
	}
	public void setLetra(char letra) {
		this.letra = letra;
	}

}
