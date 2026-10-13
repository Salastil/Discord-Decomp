package is;

import java.io.IOException;
import java.io.InputStream;
import java.net.URI;
import java.net.URISyntaxException;
import java.net.URLConnection;
import java.security.CodeSource;
import java.security.ProtectionDomain;
import java.util.ServiceLoader;

/* loaded from: classes3.dex */
public final class b extends c {
    @Override // is.c
    public final InputStream b(URI uri) {
        if (uri == null || c.f12273c) {
            return null;
        }
        try {
            URLConnection openConnection = uri.toURL().openConnection();
            openConnection.setUseCaches(false);
            openConnection.connect();
            return openConnection.getInputStream();
        } catch (IOException e9) {
            if (!uri.toString().contains(".repository")) {
                return null;
            }
            System.err.println("Warning: Loading of resource " + uri + " failed (" + e9.getMessage() + "). Consider setting the system property \"net.time4j.base.useClassloaderOnly\" for reducing overhead.");
            e9.printStackTrace(System.err);
            return null;
        }
    }

    @Override // is.c
    public final URI c(String str, String str2, Class cls) {
        String str3;
        try {
            try {
                ProtectionDomain protectionDomain = cls.getProtectionDomain();
                CodeSource codeSource = protectionDomain == null ? null : protectionDomain.getCodeSource();
                if (codeSource != null) {
                    str3 = codeSource.getLocation().toExternalForm();
                    try {
                        if (str3.endsWith(".jar")) {
                            str3 = "jar:" + str3 + "!/";
                        }
                        str3 = str3 + str2;
                        return new URI(str3);
                    } catch (URISyntaxException unused) {
                        System.err.println("Warning: malformed resource path = " + str3);
                        return null;
                    }
                }
            } catch (URISyntaxException unused2) {
                str3 = null;
            }
        } catch (SecurityException unused3) {
        }
        return null;
    }

    @Override // is.c
    public final Iterable d(Class cls) {
        return ServiceLoader.load(cls, cls.getClassLoader());
    }
}
