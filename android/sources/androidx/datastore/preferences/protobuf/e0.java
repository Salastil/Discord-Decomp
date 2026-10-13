package androidx.datastore.preferences.protobuf;

/* loaded from: classes.dex */
public final class e0 implements l0 {
    public l0[] a;

    @Override // androidx.datastore.preferences.protobuf.l0
    public final v0 a(Class cls) {
        for (l0 l0Var : this.a) {
            if (l0Var.b(cls)) {
                return l0Var.a(cls);
            }
        }
        throw new UnsupportedOperationException("No factory is available for message type: ".concat(cls.getName()));
    }

    @Override // androidx.datastore.preferences.protobuf.l0
    public final boolean b(Class cls) {
        for (l0 l0Var : this.a) {
            if (l0Var.b(cls)) {
                return true;
            }
        }
        return false;
    }
}
