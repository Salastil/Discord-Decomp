package kt;

import android.content.Context;
import android.content.Intent;
import android.content.pm.ApplicationInfo;
import android.content.pm.ResolveInfo;
import android.os.Trace;
import android.util.Log;
import com.discord.key_commands.KeyCommandDescriptor;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.util.Iterator;

/* loaded from: classes.dex */
public abstract class f {
    public static g a;

    /* renamed from: b, reason: collision with root package name */
    public static String f13695b;

    /* renamed from: c, reason: collision with root package name */
    public static final Object f13696c = new Object();

    public static void a(b bVar, boolean z5) {
        Iterator it = bVar.f13691e.iterator();
        if (it.hasNext()) {
            if (it.next() != null) {
                throw new ClassCastException();
            }
            if (!z5) {
                throw null;
            }
            throw null;
        }
    }

    public static ApplicationInfo b(Context context) {
        ht.a.c("HttpFlagsLoader#getProviderApplicationInfo");
        try {
            ResolveInfo resolveService = context.getPackageManager().resolveService(new Intent("android.net.http.FLAGS_FILE_PROVIDER"), KeyCommandDescriptor.ModifierFlags.COMMAND);
            if (resolveService == null) {
                Log.i("HttpFlagsLoader", "Unable to resolve the HTTP flags file provider package. This is expected if the host system is not set up to provide HTTP flags.");
                Trace.endSection();
                return null;
            }
            ApplicationInfo applicationInfo = resolveService.serviceInfo.applicationInfo;
            Trace.endSection();
            return applicationInfo;
        } catch (Throwable th2) {
            try {
                Trace.endSection();
            } catch (Throwable th3) {
                th2.addSuppressed(th3);
            }
            throw th2;
        }
    }

    public static e c(Context context) {
        try {
            ApplicationInfo b10 = b(context);
            if (b10 != null) {
                Log.d("HttpFlagsLoader", "Found application exporting HTTP flags: " + b10.packageName);
                File file = new File(new File(new File(b10.deviceProtectedDataDir), "app_httpflags"), "flags.binarypb");
                Log.d("HttpFlagsLoader", "HTTP flags file path: " + file.getAbsolutePath());
                e d6 = d(file);
                if (d6 != null) {
                    Log.d("HttpFlagsLoader", "Successfully loaded HTTP flags: " + d6);
                    return d6;
                }
            }
            return null;
        } catch (RuntimeException e9) {
            Log.i("HttpFlagsLoader", "Unable to load HTTP flags file", e9);
            return null;
        }
    }

    public static e d(File file) {
        ht.a.c("HttpFlagsLoader#loadFlagsFile");
        try {
            try {
                FileInputStream fileInputStream = new FileInputStream(file);
                try {
                    e i5 = e.i(fileInputStream);
                    fileInputStream.close();
                    Trace.endSection();
                    return i5;
                } catch (Throwable th2) {
                    try {
                        fileInputStream.close();
                    } catch (Throwable th3) {
                        th2.addSuppressed(th3);
                    }
                    throw th2;
                }
            } catch (Throwable th4) {
                try {
                    Trace.endSection();
                } catch (Throwable th5) {
                    th4.addSuppressed(th5);
                }
                throw th4;
            }
        } catch (FileNotFoundException unused) {
            Log.i("HttpFlagsLoader", "HTTP flags file `" + file.getPath() + "` is missing. This is expected if HTTP flags functionality is currently disabled in the host system.");
            Trace.endSection();
            return null;
        } catch (IOException e9) {
            throw new RuntimeException("Unable to read HTTP flags file", e9);
        }
    }
}
