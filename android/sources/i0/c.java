package i0;

import java.util.HashSet;

/* loaded from: classes.dex */
public final class c extends z.e implements g0, j {

    /* renamed from: i, reason: collision with root package name */
    public z.d f10381i;
    public HashSet j;

    @Override // z.e
    public final void a() {
        if (!this.f21122h) {
            throw new IllegalStateException("Check failed.");
        }
        if ((this.f21116b & 8) == 0) {
            return;
        }
        k.c(this);
        throw null;
    }

    public final String toString() {
        return this.f10381i.toString();
    }
}
