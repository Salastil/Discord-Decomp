package androidx.datastore.preferences.protobuf;

/* loaded from: classes.dex */
public abstract class a {
    protected int memoizedHashCode;

    public abstract int a();

    public final int b(w0 w0Var) {
        t tVar = (t) this;
        int i5 = tVar.memoizedSerializedSize;
        if (i5 != -1) {
            return i5;
        }
        int e9 = w0Var.e(this);
        tVar.memoizedSerializedSize = e9;
        return e9;
    }

    public abstract void c(j jVar);
}
