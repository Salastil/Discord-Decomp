package ht;

import android.os.Trace;
import k0.d;

/* loaded from: classes.dex */
public abstract class a implements AutoCloseable {
    public static void c(String str) {
        if (str.length() > 127) {
            str = d.k(str.substring(0, 124), "...");
        }
        Trace.beginSection(str);
    }
}
