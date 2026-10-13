package o4;

import l4.g0;
import lh.v;

/* loaded from: classes.dex */
public final class g extends e4.e {

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ e4.e f15753v;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public g(e4.e eVar) {
        super(27);
        this.f15753v = eVar;
    }

    @Override // e4.e
    public final Object s(v vVar) {
        Float f2 = (Float) ((g0) this.f15753v.f7944i);
        if (f2 == null) {
            return null;
        }
        return Float.valueOf(f2.floatValue() * 2.55f);
    }
}
