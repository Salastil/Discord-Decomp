package o4;

import android.graphics.PointF;
import java.util.ArrayList;
import java.util.Collections;

/* loaded from: classes.dex */
public final class o extends e {

    /* renamed from: i, reason: collision with root package name */
    public final PointF f15772i;
    public final PointF j;
    public final i k;

    /* renamed from: l, reason: collision with root package name */
    public final i f15773l;

    /* renamed from: m, reason: collision with root package name */
    public e4.e f15774m;

    /* renamed from: n, reason: collision with root package name */
    public e4.e f15775n;

    public o(i iVar, i iVar2) {
        super(Collections.EMPTY_LIST);
        this.f15772i = new PointF();
        this.j = new PointF();
        this.k = iVar;
        this.f15773l = iVar2;
        i(this.f15747d);
    }

    @Override // o4.e
    public final Object e() {
        return k();
    }

    @Override // o4.e
    public final /* bridge */ /* synthetic */ Object f(y4.a aVar, float f2) {
        return k();
    }

    @Override // o4.e
    public final void i(float f2) {
        i iVar = this.k;
        iVar.i(f2);
        i iVar2 = this.f15773l;
        iVar2.i(f2);
        this.f15772i.set(((Float) iVar.e()).floatValue(), ((Float) iVar2.e()).floatValue());
        int i5 = 0;
        while (true) {
            ArrayList arrayList = this.a;
            if (i5 >= arrayList.size()) {
                return;
            }
            ((a) arrayList.get(i5)).a();
            i5++;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:11:0x003e  */
    /* JADX WARN: Removed duplicated region for block: B:20:0x0078  */
    /* JADX WARN: Removed duplicated region for block: B:22:0x0087  */
    /* JADX WARN: Removed duplicated region for block: B:25:0x008f  */
    /* JADX WARN: Removed duplicated region for block: B:27:0x007e  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final PointF k() {
        Float f2;
        Float f10 = null;
        if (this.f15774m != null) {
            i iVar = this.k;
            y4.a h6 = iVar.f15746c.h();
            if (h6 != null) {
                Float f11 = h6.f20657h;
                e4.e eVar = this.f15774m;
                float f12 = h6.f20656g;
                f2 = (Float) eVar.t(f12, f11 == null ? f12 : f11.floatValue(), (Float) h6.f20651b, (Float) h6.f20652c, iVar.c(), iVar.d(), iVar.f15747d);
                if (this.f15775n != null) {
                    i iVar2 = this.f15773l;
                    y4.a h7 = iVar2.f15746c.h();
                    if (h7 != null) {
                        Float f13 = h7.f20657h;
                        e4.e eVar2 = this.f15775n;
                        float f14 = h7.f20656g;
                        f10 = (Float) eVar2.t(f14, f13 == null ? f14 : f13.floatValue(), (Float) h7.f20651b, (Float) h7.f20652c, iVar2.c(), iVar2.d(), iVar2.f15747d);
                    }
                }
                PointF pointF = this.f15772i;
                PointF pointF2 = this.j;
                if (f2 != null) {
                    pointF2.set(pointF.x, 0.0f);
                } else {
                    pointF2.set(f2.floatValue(), 0.0f);
                }
                if (f10 != null) {
                    pointF2.set(pointF2.x, pointF.y);
                    return pointF2;
                }
                pointF2.set(pointF2.x, f10.floatValue());
                return pointF2;
            }
        }
        f2 = null;
        if (this.f15775n != null) {
        }
        PointF pointF3 = this.f15772i;
        PointF pointF22 = this.j;
        if (f2 != null) {
        }
        if (f10 != null) {
        }
    }
}
