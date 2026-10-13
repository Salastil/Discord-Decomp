package o4;

import android.graphics.PointF;
import l4.g0;
import lh.v;

/* loaded from: classes.dex */
public final class p extends e4.e {

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ v f15776v;

    /* renamed from: w, reason: collision with root package name */
    public final /* synthetic */ e4.e f15777w;

    /* renamed from: x, reason: collision with root package name */
    public final /* synthetic */ q4.b f15778x;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public p(v vVar, e4.e eVar, q4.b bVar) {
        super(27);
        this.f15776v = vVar;
        this.f15777w = eVar;
        this.f15778x = bVar;
    }

    @Override // e4.e
    public final Object s(v vVar) {
        float f2 = vVar.a;
        float f10 = vVar.f14041b;
        String str = ((q4.b) vVar.f14045f).a;
        String str2 = ((q4.b) vVar.f14046g).a;
        float f11 = vVar.f14042c;
        float f12 = vVar.f14043d;
        float f13 = vVar.f14044e;
        v vVar2 = this.f15776v;
        vVar2.a = f2;
        vVar2.f14041b = f10;
        vVar2.f14045f = str;
        vVar2.f14046g = str2;
        vVar2.f14042c = f11;
        vVar2.f14043d = f12;
        vVar2.f14044e = f13;
        String str3 = (String) ((g0) this.f15777w.f7944i);
        q4.b bVar = (q4.b) (vVar.f14043d == 1.0f ? vVar.f14046g : vVar.f14045f);
        String str4 = bVar.f16663b;
        float f14 = bVar.f16664c;
        int i5 = bVar.f16665d;
        int i6 = bVar.f16666e;
        float f15 = bVar.f16667f;
        float f16 = bVar.f16668g;
        int i10 = bVar.f16669h;
        int i11 = bVar.f16670i;
        float f17 = bVar.j;
        boolean z5 = bVar.k;
        PointF pointF = bVar.f16671l;
        PointF pointF2 = bVar.f16672m;
        q4.b bVar2 = this.f15778x;
        bVar2.a = str3;
        bVar2.f16663b = str4;
        bVar2.f16664c = f14;
        bVar2.f16665d = i5;
        bVar2.f16666e = i6;
        bVar2.f16667f = f15;
        bVar2.f16668g = f16;
        bVar2.f16669h = i10;
        bVar2.f16670i = i11;
        bVar2.j = f17;
        bVar2.k = z5;
        bVar2.f16671l = pointF;
        bVar2.f16672m = pointF2;
        return bVar2;
    }
}
