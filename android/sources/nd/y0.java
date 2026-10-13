package nd;

import android.net.Uri;
import com.google.android.exoplayer2.Format;
import com.google.android.exoplayer2.MediaItem;
import com.google.android.exoplayer2.MediaMetadata;
import com.google.android.exoplayer2.upstream.DataSource;
import java.util.Collections;
import java.util.List;
import java.util.Map;

/* loaded from: classes3.dex */
public final class y0 extends a {
    public final ie.p E;
    public final DataSource.Factory F;
    public final Format G;
    public final p9.d I;
    public final u0 K;
    public final MediaItem L;
    public ie.u0 M;
    public final long H = -9223372036854775807L;
    public final boolean J = true;

    public y0(hc.t0 t0Var, DataSource.Factory factory, p9.d dVar) {
        hc.p0 p0Var;
        this.F = factory;
        this.I = dVar;
        boolean z5 = true;
        hc.j0 j0Var = new hc.j0();
        hc.m0 m0Var = new hc.m0();
        m0Var.f9786c = fi.w0.f8728y;
        fi.c0 c0Var = fi.e0.f8656e;
        m0Var.f9790g = fi.r0.f8704w;
        List list = Collections.EMPTY_LIST;
        hc.q0 q0Var = hc.q0.f9843i;
        Uri uri = Uri.EMPTY;
        Uri uri2 = t0Var.f9878d;
        String uri3 = uri2.toString();
        uri3.getClass();
        fi.e0 k = fi.e0.k(fi.e0.s(t0Var));
        if (m0Var.f9785b != null && m0Var.a == null) {
            z5 = false;
        }
        ke.b.k(z5);
        if (uri != null) {
            p0Var = new hc.p0(uri, null, m0Var.a != null ? new hc.n0(m0Var) : null, null, list, null, k);
        } else {
            p0Var = null;
        }
        MediaItem mediaItem = new MediaItem(uri3, new hc.l0(j0Var), p0Var, new hc.o0(-9223372036854775807L, -9223372036854775807L, -9223372036854775807L, -3.4028235E38f, -3.4028235E38f), MediaMetadata.f5241f0, q0Var);
        this.L = mediaItem;
        hc.f0 f0Var = new hc.f0();
        String str = t0Var.f9879e;
        f0Var.k = str == null ? "text/x-unknown" : str;
        f0Var.f9671c = t0Var.f9880i;
        f0Var.f9672d = t0Var.f9881v;
        f0Var.f9673e = t0Var.f9882w;
        f0Var.f9670b = t0Var.f9883x;
        String str2 = t0Var.f9884y;
        f0Var.a = str2 != null ? str2 : null;
        this.G = new Format(f0Var);
        Map map = Collections.EMPTY_MAP;
        ke.b.m(uri2, "The uri must be set.");
        this.E = new ie.p(uri2, 0L, 1, null, map, 0L, -1L, null, 1);
        this.K = new u0(-9223372036854775807L, true, false, mediaItem);
    }

    @Override // nd.a
    public final q b(s sVar, ie.q qVar, long j) {
        return new x0(this.E, this.F, this.M, this.G, this.H, this.I, a(sVar), this.J);
    }

    @Override // nd.a
    public final MediaItem h() {
        return this.L;
    }

    @Override // nd.a
    public final void m(ie.u0 u0Var) {
        this.M = u0Var;
        n(this.K);
    }

    @Override // nd.a
    public final void o(q qVar) {
        ((x0) qVar).F.e(null);
    }

    @Override // nd.a
    public final void j() {
    }

    @Override // nd.a
    public final void q() {
    }
}
