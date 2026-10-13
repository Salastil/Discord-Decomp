package nc;

import android.os.Looper;
import com.google.android.exoplayer2.Format;

/* loaded from: classes3.dex */
public final class p implements r {
    @Override // nc.r
    public final int b(Format format) {
        return format.L != null ? 1 : 0;
    }

    @Override // nc.r
    public final k d(n nVar, Format format) {
        if (format.L == null) {
            return null;
        }
        return new v(new j(6001, new h0()));
    }

    @Override // nc.r
    public final void c(Looper looper, ic.c0 c0Var) {
    }
}
