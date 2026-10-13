package td;

import android.net.Uri;
import android.os.Handler;
import android.os.SystemClock;
import com.google.android.exoplayer2.Format;
import com.google.android.exoplayer2.source.LoadEventInfo;
import hc.g1;
import ie.a0;
import ie.f0;
import ie.h0;
import ie.j0;
import ie.k0;
import ie.n0;
import ie.s0;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.util.Collections;
import java.util.HashMap;
import java.util.List;
import java.util.concurrent.CopyOnWriteArrayList;
import ke.d0;

/* loaded from: classes3.dex */
public final class c implements f0 {
    public static final n1.k L = new n1.k(28);
    public Handler E;
    public sd.o F;
    public l G;
    public Uri H;
    public i I;
    public boolean J;

    /* renamed from: d, reason: collision with root package name */
    public final sd.c f18275d;

    /* renamed from: e, reason: collision with root package name */
    public final p f18276e;

    /* renamed from: i, reason: collision with root package name */
    public final p9.d f18277i;

    /* renamed from: x, reason: collision with root package name */
    public a1.d f18280x;

    /* renamed from: y, reason: collision with root package name */
    public k0 f18281y;

    /* renamed from: w, reason: collision with root package name */
    public final CopyOnWriteArrayList f18279w = new CopyOnWriteArrayList();

    /* renamed from: v, reason: collision with root package name */
    public final HashMap f18278v = new HashMap();
    public long K = -9223372036854775807L;

    public c(sd.c cVar, p9.d dVar, p pVar) {
        this.f18275d = cVar;
        this.f18276e = pVar;
        this.f18277i = dVar;
    }

    public final i a(boolean z5, Uri uri) {
        HashMap hashMap = this.f18278v;
        i iVar = ((b) hashMap.get(uri)).f18271v;
        if (iVar != null && z5 && !uri.equals(this.H)) {
            List list = this.G.f18321e;
            int i5 = 0;
            while (true) {
                if (i5 >= list.size()) {
                    break;
                }
                if (uri.equals(((k) list.get(i5)).a)) {
                    i iVar2 = this.I;
                    if (iVar2 == null || !iVar2.f18304o) {
                        this.H = uri;
                        b bVar = (b) hashMap.get(uri);
                        i iVar3 = bVar.f18271v;
                        if (iVar3 == null || !iVar3.f18304o) {
                            bVar.c(b(uri));
                            return iVar;
                        }
                        this.I = iVar3;
                        this.F.u(iVar3);
                        return iVar;
                    }
                } else {
                    i5++;
                }
            }
        }
        return iVar;
    }

    public final Uri b(Uri uri) {
        e eVar;
        i iVar = this.I;
        if (iVar == null || !iVar.f18311v.f18294e || (eVar = (e) iVar.f18309t.get(uri)) == null) {
            return uri;
        }
        Uri.Builder buildUpon = uri.buildUpon();
        buildUpon.appendQueryParameter("_HLS_msn", String.valueOf(eVar.f18282b));
        int i5 = eVar.f18283c;
        if (i5 != -1) {
            buildUpon.appendQueryParameter("_HLS_part", String.valueOf(i5));
        }
        return buildUpon.build();
    }

    public final boolean c(Uri uri) {
        int i5;
        b bVar = (b) this.f18278v.get(uri);
        if (bVar.f18271v == null) {
            return false;
        }
        long elapsedRealtime = SystemClock.elapsedRealtime();
        long max = Math.max(30000L, d0.U(bVar.f18271v.f18310u));
        i iVar = bVar.f18271v;
        return iVar.f18304o || (i5 = iVar.f18295d) == 2 || i5 == 1 || bVar.f18272w + max > elapsedRealtime;
    }

    /* JADX WARN: Removed duplicated region for block: B:23:0x0058  */
    /* JADX WARN: Removed duplicated region for block: B:26:0x0060  */
    /* JADX WARN: Removed duplicated region for block: B:29:0x0063  */
    @Override // ie.f0
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final bd.f l(h0 h0Var, long j, long j5, IOException iOException, int i5) {
        long j7;
        n0 n0Var = (n0) h0Var;
        long j10 = n0Var.f10697d;
        s0 s0Var = n0Var.f10700v;
        Uri uri = s0Var.f10756i;
        LoadEventInfo loadEventInfo = new LoadEventInfo(s0Var.f10755e, s0Var.f10757v);
        int i6 = n0Var.f10699i;
        this.f18277i.getClass();
        if (!(iOException instanceof g1) && !(iOException instanceof FileNotFoundException) && !(iOException instanceof a0) && !(iOException instanceof j0)) {
            int i10 = ie.m.f10690e;
            for (Throwable th2 = iOException; th2 != null; th2 = th2.getCause()) {
                if (!(th2 instanceof ie.m) || ((ie.m) th2).f10691d != 2008) {
                }
            }
            j7 = Math.min((i5 - 1) * 1000, 5000);
            boolean z5 = j7 == -9223372036854775807L;
            this.f18280x.p(loadEventInfo, i6, iOException, z5);
            return !z5 ? k0.f10683x : new bd.f(0, j7, false);
        }
        j7 = -9223372036854775807L;
        if (j7 == -9223372036854775807L) {
        }
        this.f18280x.p(loadEventInfo, i6, iOException, z5);
        if (!z5) {
        }
    }

    @Override // ie.f0
    public final void v(h0 h0Var, long j, long j5) {
        l lVar;
        n0 n0Var = (n0) h0Var;
        m mVar = (m) n0Var.f10702x;
        boolean z5 = mVar instanceof i;
        if (z5) {
            String str = mVar.a;
            l lVar2 = l.f18319n;
            Uri parse = Uri.parse(str);
            hc.f0 f0Var = new hc.f0();
            f0Var.a = "0";
            f0Var.j = "application/x-mpegURL";
            List singletonList = Collections.singletonList(new k(parse, new Format(f0Var), null, null, null, null));
            List list = Collections.EMPTY_LIST;
            lVar = new l("", list, singletonList, list, list, list, list, null, null, false, Collections.EMPTY_MAP, list);
        } else {
            lVar = (l) mVar;
        }
        this.G = lVar;
        this.H = ((k) lVar.f18321e.get(0)).a;
        this.f18279w.add(new a(this));
        List list2 = lVar.f18320d;
        int size = list2.size();
        for (int i5 = 0; i5 < size; i5++) {
            Uri uri = (Uri) list2.get(i5);
            this.f18278v.put(uri, new b(this, uri));
        }
        s0 s0Var = n0Var.f10700v;
        Uri uri2 = s0Var.f10756i;
        LoadEventInfo loadEventInfo = new LoadEventInfo(s0Var.f10755e, s0Var.f10757v);
        b bVar = (b) this.f18278v.get(this.H);
        if (z5) {
            bVar.d((i) mVar);
        } else {
            bVar.c(bVar.f18268d);
        }
        this.f18277i.getClass();
        this.f18280x.l(loadEventInfo, 4);
    }

    @Override // ie.f0
    public final void z(h0 h0Var, long j, long j5, boolean z5) {
        n0 n0Var = (n0) h0Var;
        long j7 = n0Var.f10697d;
        s0 s0Var = n0Var.f10700v;
        Uri uri = s0Var.f10756i;
        LoadEventInfo loadEventInfo = new LoadEventInfo(s0Var.f10755e, s0Var.f10757v);
        this.f18277i.getClass();
        this.f18280x.j(loadEventInfo, 4, -1, null, 0, null, -9223372036854775807L, -9223372036854775807L);
    }
}
