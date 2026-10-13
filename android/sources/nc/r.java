package nc;

import android.os.Looper;
import com.google.android.exoplayer2.Format;

/* loaded from: classes3.dex */
public interface r {
    public static final p a = new p();

    int b(Format format);

    void c(Looper looper, ic.c0 c0Var);

    k d(n nVar, Format format);

    default q e(n nVar, Format format) {
        return q.f15048p;
    }

    default void a() {
    }

    default void release() {
    }
}
