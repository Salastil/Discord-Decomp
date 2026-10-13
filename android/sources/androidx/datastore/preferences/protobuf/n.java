package androidx.datastore.preferences.protobuf;

/* loaded from: classes.dex */
public abstract class n {
    public static final m a = new m();

    /* renamed from: b, reason: collision with root package name */
    public static final m f1776b;

    static {
        m mVar = null;
        try {
            mVar = (m) Class.forName("androidx.datastore.preferences.protobuf.ExtensionSchemaFull").getDeclaredConstructor(null).newInstance(null);
        } catch (Exception unused) {
        }
        f1776b = mVar;
    }
}
