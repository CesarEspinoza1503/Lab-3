package Proyecto;
/**
 *
 * @author CESAR
 */
public class Cliente extends Usuario{
    String direccion;//Dirrecion de residencia del usuario
    int Frecuencia;//Contador para cuantas veces el cliente ha comprado
    int num_contacto;//Numero telefonico o de movil

    public Cliente(String direccion, int Frecuencia, int num_contacto, String username, String password, boolean isAdmin, String nombre) {
        super(username, password, isAdmin, nombre);
        this.direccion = direccion;
        this.Frecuencia = Frecuencia;
        this.num_contacto = num_contacto;
    }

    public String getDireccion() {
        return direccion;
    }

    public void setDireccion(String direccion) {
        this.direccion = direccion;
    }

    public int getFrecuencia() {
        return Frecuencia;
    }

    public void setFrecuencia(int Frecuencia) {
        this.Frecuencia = Frecuencia;
    }

    public int getNum_contacto() {
        return num_contacto;
    }

    public void setNum_contacto(int num_contacto) {
        this.num_contacto = num_contacto;
    }

    @Override
    public String toString() {
        return "Cliente{" + "direccion=" + direccion + ", Frecuencia=" + Frecuencia + ", num_contacto=" + num_contacto + '}';
    } 
    
}
