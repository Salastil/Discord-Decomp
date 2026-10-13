package nk;

import android.graphics.Paint;
import gk.k;
import java.util.ArrayList;
import java.util.Calendar;
import m3.n;

/* loaded from: classes3.dex */
public final class b extends e {
    @Override // nk.e
    public final String a() {
        return n.K(((kk.b) this.a.f7989d).f13406b, k.f9338e);
    }

    @Override // nk.e
    public final Paint.Align d() {
        return Paint.Align.RIGHT;
    }

    @Override // nk.e
    public final ArrayList f() {
        Calendar calendar = Calendar.getInstance();
        ArrayList arrayList = new ArrayList();
        calendar.set(2, 0);
        calendar.set(5, 1);
        for (int i5 = 1; i5 <= 31; i5++) {
            arrayList.add(c(calendar));
            calendar.add(5, 1);
        }
        return arrayList;
    }

    @Override // nk.e
    public final boolean h() {
        return this.a.g() == ik.b.f10937d;
    }

    @Override // nk.e
    public final boolean i() {
        return true;
    }
}
