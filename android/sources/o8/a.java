package o8;

import java.io.Closeable;
import java.io.IOException;
import java.io.InputStream;
import java.util.logging.Level;
import java.util.logging.Logger;

/* loaded from: classes3.dex */
public abstract class a {
    public static final Logger a = Logger.getLogger(a.class.getName());

    public static void a(Closeable closeable) {
        if (closeable == null) {
            return;
        }
        try {
            closeable.close();
        } catch (IOException e9) {
            a.log(Level.WARNING, "IOException thrown while closing Closeable.", (Throwable) e9);
        }
    }

    public static void b(InputStream inputStream) {
        try {
            a(inputStream);
        } catch (IOException e9) {
            throw new AssertionError(e9);
        }
    }
}
