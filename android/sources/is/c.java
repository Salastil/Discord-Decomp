package is;

import java.io.FileNotFoundException;
import java.io.InputStream;
import java.net.URI;
import java.net.URL;
import java.net.URLConnection;

/* loaded from: classes3.dex */
public abstract class c {
    public static final boolean a;

    /* renamed from: b, reason: collision with root package name */
    public static final c f12272b;

    /* renamed from: c, reason: collision with root package name */
    public static final boolean f12273c;

    static {
        boolean equalsIgnoreCase = "Dalvik".equalsIgnoreCase(System.getProperty("java.vm.name"));
        a = equalsIgnoreCase;
        f12273c = !equalsIgnoreCase && Boolean.getBoolean("net.time4j.base.useClassloaderOnly");
        String property = System.getProperty("net.time4j.base.ResourceLoader");
        if (property == null) {
            b bVar = new b();
            if (equalsIgnoreCase) {
                throw new IllegalStateException("The module time4j-android is not active. Check your configuration.");
            }
            f12272b = bVar;
            return;
        }
        try {
            f12272b = (c) Class.forName(property).newInstance();
        } catch (Exception e9) {
            throw new AssertionError("Wrong configuration of external resource loader: " + e9.getMessage());
        }
    }

    public static InputStream a(Class cls, String str) {
        if (a) {
            throw new FileNotFoundException(str);
        }
        URL resource = cls.getClassLoader().getResource(str);
        if (resource == null) {
            throw new FileNotFoundException(str);
        }
        URLConnection openConnection = resource.openConnection();
        openConnection.setUseCaches(false);
        openConnection.connect();
        return openConnection.getInputStream();
    }

    public abstract InputStream b(URI uri);

    public abstract URI c(String str, String str2, Class cls);

    public abstract Iterable d(Class cls);
}
