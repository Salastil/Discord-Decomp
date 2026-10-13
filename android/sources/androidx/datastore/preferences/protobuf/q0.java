package androidx.datastore.preferences.protobuf;

/* loaded from: classes.dex */
public abstract class q0 {
    public static final p0 a;

    /* renamed from: b, reason: collision with root package name */
    public static final p0 f1808b;

    static {
        p0 p0Var = null;
        try {
            p0Var = (p0) Class.forName("androidx.datastore.preferences.protobuf.NewInstanceSchemaFull").getDeclaredConstructor(null).newInstance(null);
        } catch (Exception unused) {
        }
        a = p0Var;
        f1808b = new p0();
    }
}
