package bs;

/* loaded from: classes3.dex */
public abstract class m {
    public static final boolean a;

    static {
        boolean z5;
        try {
            Class.forName("java.lang.ClassValue");
            z5 = true;
        } catch (Throwable unused) {
            z5 = false;
        }
        a = z5;
    }
}
