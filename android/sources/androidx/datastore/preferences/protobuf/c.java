package androidx.datastore.preferences.protobuf;

/* loaded from: classes.dex */
public abstract class c {
    public static final Class a;

    /* renamed from: b, reason: collision with root package name */
    public static final boolean f1723b;

    static {
        Class<?> cls;
        Class<?> cls2 = null;
        try {
            cls = Class.forName("libcore.io.Memory");
        } catch (Throwable unused) {
            cls = null;
        }
        a = cls;
        try {
            cls2 = Class.forName("org.robolectric.Robolectric");
        } catch (Throwable unused2) {
        }
        f1723b = cls2 != null;
    }

    public static boolean a() {
        return (a == null || f1723b) ? false : true;
    }
}
