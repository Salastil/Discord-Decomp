package nk;

import android.graphics.Paint;
import e4.p;
import java.util.ArrayList;
import java.util.Calendar;
import s4.h;

/* loaded from: classes3.dex */
public final class d extends e {

    /* renamed from: f, reason: collision with root package name */
    public final r8.c f15535f;

    public d(jk.e eVar, p pVar) {
        super(eVar, pVar);
        this.f15535f = new r8.c(7);
    }

    @Override // nk.e
    public final String a() {
        return ((gj.c) this.a.f7997n).V() ? "h" : "HH";
    }

    @Override // nk.e
    public final Paint.Align d() {
        return Paint.Align.RIGHT;
    }

    @Override // nk.e
    public final ArrayList f() {
        Calendar calendar = Calendar.getInstance();
        calendar.set(2000, 0, 0, 0, 0, 0);
        ArrayList arrayList = new ArrayList();
        int i5 = ((gj.c) this.a.f7997n).V() ? 12 : 24;
        for (int i6 = 0; i6 < i5; i6++) {
            arrayList.add(this.f15539e.format(calendar.getTime()));
            calendar.add(11, 1);
        }
        return arrayList;
    }

    @Override // nk.e
    public final String g(String str) {
        this.f15535f.getClass();
        return str.length() != 1 ? str : h.f(" ", str, " ");
    }

    @Override // nk.e
    public final boolean h() {
        return this.a.g() != ik.b.f10937d;
    }

    @Override // nk.e
    public final boolean i() {
        return true;
    }
}
