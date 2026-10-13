package ie;

import android.net.Uri;
import com.google.android.exoplayer2.source.LoadEventInfo;
import com.google.android.exoplayer2.upstream.DataSource;
import java.util.Collections;
import java.util.Map;

/* loaded from: classes3.dex */
public final class n0 implements h0 {

    /* renamed from: d, reason: collision with root package name */
    public final long f10697d;

    /* renamed from: e, reason: collision with root package name */
    public final p f10698e;

    /* renamed from: i, reason: collision with root package name */
    public final int f10699i;

    /* renamed from: v, reason: collision with root package name */
    public final s0 f10700v;

    /* renamed from: w, reason: collision with root package name */
    public final m0 f10701w;

    /* renamed from: x, reason: collision with root package name */
    public volatile Object f10702x;

    public n0(DataSource dataSource, Uri uri, int i5, m0 m0Var) {
        Map map = Collections.EMPTY_MAP;
        ke.b.m(uri, "The uri must be set.");
        p pVar = new p(uri, 0L, 1, null, map, 0L, -1L, null, 1);
        this.f10700v = new s0(dataSource);
        this.f10698e = pVar;
        this.f10699i = i5;
        this.f10701w = m0Var;
        this.f10697d = LoadEventInfo.f5429c.getAndIncrement();
    }

    @Override // ie.h0
    public final void n() {
        this.f10700v.f10755e = 0L;
        n nVar = new n(this.f10700v, this.f10698e);
        try {
            nVar.c();
            Uri x5 = this.f10700v.f10754d.x();
            x5.getClass();
            this.f10702x = this.f10701w.f(x5, nVar);
        } finally {
            ke.d0.g(nVar);
        }
    }

    @Override // ie.h0
    public final void z() {
    }
}
