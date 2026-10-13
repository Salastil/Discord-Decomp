package androidx.core.view;

/* loaded from: classes.dex */
public final class j2 extends i2 {
    @Override // androidx.core.view.i2, zk.a
    public final void J() {
        this.j.setSystemBarsBehavior(2);
    }

    @Override // androidx.core.view.i2, zk.a
    public final boolean v() {
        return (this.j.getSystemBarsAppearance() & 8) != 0;
    }
}
