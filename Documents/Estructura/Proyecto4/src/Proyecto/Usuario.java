package Proyecto;

/**
 *
 * @author CESAR
 */
public class Usuario {
    protected String username;
    protected String password;
    protected boolean isAdmin;
    protected String nombre;

    public Usuario(String username, String password, boolean isAdmin, String nombre) {
        this.username = username;
        this.password = password;
        this.isAdmin = isAdmin;
        this.nombre = nombre;
    }

    public String getUsername() {
        return username;
    }

    public void setUsername(String username) {
        this.username = username;
    }

    public String getPassword() {
        return password;
    }

    public void setPassword(String password) {
        this.password = password;
    }

    public boolean isIsAdmin() {
        return isAdmin;
    }

    public void setIsAdmin(boolean isAdmin) {
        this.isAdmin = isAdmin;
    }

    public String getNombre() {
        return nombre;
    }

    public void setNombre(String nombre) {
        this.nombre = nombre;
    }

    @Override
    public String toString() {
        return "Usuario{" + "username=" + username + ", isAdmin=" + isAdmin + ", nombre=" + nombre + '}';
    }
    
    
    
    
    
}
