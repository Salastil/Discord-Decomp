package y;

import kotlin.Unit;

/* loaded from: classes.dex */
public final class a extends b {
    @Override // y.c
    public final void a() {
        synchronized (f.f20582b) {
            int i5 = this.f20570c;
            if (i5 >= 0) {
                f.g(i5);
                this.f20570c = -1;
            }
            Unit unit = Unit.a;
        }
    }
}
