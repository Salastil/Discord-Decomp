package td;

import a5.a0;
import android.net.Uri;
import android.os.SystemClock;
import ch.u;
import java.util.HashMap;
import java.util.List;
import ke.d0;

/* loaded from: classes3.dex */
public final class a implements q {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ c f18267d;

    public a(c cVar) {
        this.f18267d = cVar;
    }

    @Override // td.q
    public final void b() {
        this.f18267d.f18279w.remove(this);
    }

    @Override // td.q
    public final boolean c(Uri uri, a0 a0Var, boolean z5) {
        b bVar;
        c cVar = this.f18267d;
        HashMap hashMap = cVar.f18278v;
        if (cVar.I == null) {
            long elapsedRealtime = SystemClock.elapsedRealtime();
            l lVar = cVar.G;
            int i5 = d0.a;
            List list = lVar.f18321e;
            int i6 = 0;
            for (int i10 = 0; i10 < list.size(); i10++) {
                b bVar2 = (b) hashMap.get(((k) list.get(i10)).a);
                if (bVar2 != null && elapsedRealtime < bVar2.E) {
                    i6++;
                }
            }
            u uVar = new u(1, 0, cVar.G.f18321e.size(), i6);
            cVar.f18277i.getClass();
            bd.f i11 = p9.d.i(uVar, a0Var);
            if (i11 != null && i11.a == 2 && (bVar = (b) hashMap.get(uri)) != null) {
                b.a(bVar, i11.f2806b);
            }
        }
        return false;
    }
}
