package hc;

import java.util.HashSet;

/* loaded from: classes3.dex */
public abstract class e0 {
    public static final HashSet a = new HashSet();

    /* renamed from: b, reason: collision with root package name */
    public static String f9665b = "goog.exo.core";

    public static synchronized void a(String str) {
        synchronized (e0.class) {
            if (a.add(str)) {
                f9665b += ", " + str;
            }
        }
    }
}
