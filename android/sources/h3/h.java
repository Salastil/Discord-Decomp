package h3;

import a3.q;
import android.content.Context;
import fo.h0;
import fo.l;
import fo.u;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class h implements g3.c {

    /* renamed from: d, reason: collision with root package name */
    public final Context f9505d;

    /* renamed from: e, reason: collision with root package name */
    public final String f9506e;

    /* renamed from: i, reason: collision with root package name */
    public final a1.d f9507i;

    /* renamed from: v, reason: collision with root package name */
    public final boolean f9508v;

    /* renamed from: w, reason: collision with root package name */
    public final boolean f9509w;

    /* renamed from: x, reason: collision with root package name */
    public final u f9510x;

    /* renamed from: y, reason: collision with root package name */
    public boolean f9511y;

    public h(Context context, String str, a1.d callback, boolean z5, boolean z6) {
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(callback, "callback");
        this.f9505d = context;
        this.f9506e = str;
        this.f9507i = callback;
        this.f9508v = z5;
        this.f9509w = z6;
        this.f9510x = l.a(new q(6, this));
    }

    @Override // g3.c
    public final c D() {
        return ((g) this.f9510x.getValue()).c(true);
    }

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        if (this.f9510x.f8838e != h0.a) {
            ((g) this.f9510x.getValue()).close();
        }
    }

    @Override // g3.c
    public final void setWriteAheadLoggingEnabled(boolean z5) {
        if (this.f9510x.f8838e != h0.a) {
            g sQLiteOpenHelper = (g) this.f9510x.getValue();
            Intrinsics.checkNotNullParameter(sQLiteOpenHelper, "sQLiteOpenHelper");
            sQLiteOpenHelper.setWriteAheadLoggingEnabled(z5);
        }
        this.f9511y = z5;
    }
}
