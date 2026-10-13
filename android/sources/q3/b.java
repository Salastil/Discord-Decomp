package q3;

import android.content.Context;
import java.io.File;
import java.io.IOException;
import k2.m;

/* loaded from: classes.dex */
public final class b {

    /* renamed from: c, reason: collision with root package name */
    public static final String[] f16656c = {"app_webview/", "databases/", "lib/", "shared_prefs/", "code_cache/"};
    public final /* synthetic */ int a;

    /* renamed from: b, reason: collision with root package name */
    public Object f16657b;

    public boolean a(Context context) {
        String c6 = m.c((File) this.f16657b);
        String c8 = m.c(context.getCacheDir());
        String c10 = m.c(context.getDataDir());
        if ((!c6.startsWith(c8) && !c6.startsWith(c10)) || c6.equals(c8) || c6.equals(c10)) {
            return false;
        }
        for (int i5 = 0; i5 < 5; i5++) {
            if (c6.startsWith(c10 + f16656c[i5])) {
                return false;
            }
        }
        return true;
    }

    public b(Context context, File file) {
        this.a = 2;
        try {
            this.f16657b = new File(m.c(file));
            if (a(context)) {
                return;
            }
            throw new IllegalArgumentException("The given directory \"" + file + "\" doesn't exist under an allowed app internal storage directory");
        } catch (IOException e9) {
            throw new IllegalArgumentException("Failed to resolve the canonical path for the given directory: " + file.getPath(), e9);
        }
    }
}
