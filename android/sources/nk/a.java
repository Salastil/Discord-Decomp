package nk;

import android.graphics.Paint;
import e4.p;
import java.util.ArrayList;
import java.util.Calendar;

/* loaded from: classes3.dex */
public final class a extends e {

    /* renamed from: f, reason: collision with root package name */
    public final /* synthetic */ int f15532f;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ a(jk.e eVar, p pVar, int i5) {
        super(eVar, pVar);
        this.f15532f = i5;
    }

    @Override // nk.e
    public final String a() {
        switch (this.f15532f) {
            case 0:
                return ((gj.c) this.a.f7997n).V() ? " a " : "";
            case 1:
                return "mm";
            default:
                return "LLLL";
        }
    }

    @Override // nk.e
    public final Paint.Align d() {
        switch (this.f15532f) {
            case 0:
                return Paint.Align.RIGHT;
            case 1:
                gj.c cVar = (gj.c) this.a.f7997n;
                return (((p) cVar.f9329e).g() != ik.b.f10938e || cVar.V()) ? Paint.Align.RIGHT : Paint.Align.LEFT;
            default:
                return Paint.Align.LEFT;
        }
    }

    @Override // nk.e
    public final ArrayList f() {
        switch (this.f15532f) {
            case 0:
                Calendar calendar = Calendar.getInstance();
                calendar.set(2000, 0, 0, 0, 0, 0);
                ArrayList arrayList = new ArrayList();
                calendar.set(11, 0);
                arrayList.add(this.f15539e.format(calendar.getTime()));
                calendar.add(11, 12);
                arrayList.add(this.f15539e.format(calendar.getTime()));
                return arrayList;
            case 1:
                Calendar calendar2 = Calendar.getInstance();
                ArrayList arrayList2 = new ArrayList();
                int i5 = 0;
                calendar2.set(12, 0);
                while (i5 < 60) {
                    arrayList2.add(this.f15539e.format(calendar2.getTime()));
                    p pVar = this.a;
                    calendar2.add(12, ((Integer) ((kk.a) pVar.f7991f).a).intValue());
                    i5 += ((Integer) ((kk.a) pVar.f7991f).a).intValue();
                }
                return arrayList2;
            default:
                ArrayList arrayList3 = new ArrayList();
                Calendar calendar3 = Calendar.getInstance();
                calendar3.set(2, 0);
                for (int i6 = 0; i6 <= 11; i6++) {
                    arrayList3.add(c(calendar3));
                    calendar3.add(2, 1);
                }
                return arrayList3;
        }
    }

    @Override // nk.e
    public final boolean h() {
        switch (this.f15532f) {
            case 0:
                p pVar = this.a;
                if (!((gj.c) pVar.f7997n).V() || pVar.g() == ik.b.f10937d) {
                }
                break;
            case 1:
                if (this.a.g() != ik.b.f10937d) {
                }
                break;
            default:
                if (this.a.g() == ik.b.f10937d) {
                }
                break;
        }
        return false;
    }

    @Override // nk.e
    public final boolean i() {
        switch (this.f15532f) {
        }
        return true;
    }
}
