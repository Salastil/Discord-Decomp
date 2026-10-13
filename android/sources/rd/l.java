package rd;

import android.net.Uri;
import com.google.android.exoplayer2.Format;
import fi.e0;
import java.util.ArrayList;
import java.util.List;

/* loaded from: classes3.dex */
public final class l extends m {
    public final j E;
    public final u F;

    public l(Format format, e0 e0Var, r rVar, ArrayList arrayList, List list, List list2) {
        super(format, e0Var, rVar, arrayList, list, list2);
        Uri.parse(((b) e0Var.get(0)).a);
        long j = rVar.f17267e;
        j jVar = j <= 0 ? null : new j(rVar.f17266d, j, null);
        this.E = jVar;
        this.F = jVar == null ? new u(0, new j(0L, -1L, null)) : null;
    }

    @Override // rd.m
    public final String a() {
        return null;
    }

    @Override // rd.m
    public final qd.i c() {
        return this.F;
    }

    @Override // rd.m
    public final j d() {
        return this.E;
    }
}
