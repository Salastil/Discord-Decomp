package sd;

import android.os.SystemClock;
import java.util.List;

/* loaded from: classes3.dex */
public final class h extends ge.c {

    /* renamed from: g, reason: collision with root package name */
    public int f17868g;

    @Override // ge.p
    public final void c(long j, long j5, long j7, List list, pd.m[] mVarArr) {
        long elapsedRealtime = SystemClock.elapsedRealtime();
        if (a(this.f17868g, elapsedRealtime)) {
            for (int i5 = this.f9170b - 1; i5 >= 0; i5--) {
                if (!a(i5, elapsedRealtime)) {
                    this.f17868g = i5;
                    return;
                }
            }
            throw new IllegalStateException();
        }
    }

    @Override // ge.p
    public final int d() {
        return this.f17868g;
    }

    @Override // ge.p
    public final int m() {
        return 0;
    }

    @Override // ge.p
    public final Object p() {
        return null;
    }
}
