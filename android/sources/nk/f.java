package nk;

import android.graphics.Paint;
import e4.p;
import gk.k;
import java.util.ArrayList;
import java.util.Calendar;
import m3.n;

/* loaded from: classes3.dex */
public final class f extends e {

    /* renamed from: f, reason: collision with root package name */
    public int f15540f;

    /* renamed from: g, reason: collision with root package name */
    public int f15541g;

    @Override // nk.e
    public final String a() {
        return n.K(((kk.b) this.a.f7989d).f13406b, k.f9339i);
    }

    @Override // nk.e
    public final Paint.Align d() {
        return Paint.Align.RIGHT;
    }

    @Override // nk.e
    public final ArrayList f() {
        ArrayList arrayList = new ArrayList();
        Calendar calendar = Calendar.getInstance();
        p pVar = this.a;
        kk.a aVar = (kk.a) pVar.f7992g;
        kk.a aVar2 = (kk.a) pVar.f7993h;
        int i5 = pVar.a(aVar) == null ? this.f15540f : pVar.a((kk.a) pVar.f7992g).get(1);
        int i6 = (pVar.a(aVar2) == null ? this.f15541g : pVar.a(aVar2).get(1)) - i5;
        calendar.set(1, i5);
        for (int i10 = 0; i10 <= i6; i10++) {
            arrayList.add(c(calendar));
            calendar.add(1, 1);
        }
        return arrayList;
    }

    @Override // nk.e
    public final boolean h() {
        return this.a.g() == ik.b.f10937d;
    }

    @Override // nk.e
    public final boolean i() {
        return false;
    }
}
