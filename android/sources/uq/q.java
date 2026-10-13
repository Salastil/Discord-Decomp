package uq;

import java.util.List;
import kotlin.collections.CollectionsKt;
import kotlin.collections.m0;
import kotlin.jvm.functions.Function0;

/* loaded from: classes3.dex */
public final class q implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f19049d;

    /* renamed from: e, reason: collision with root package name */
    public final t f19050e;

    /* renamed from: i, reason: collision with root package name */
    public final iq.a f19051i;

    /* renamed from: v, reason: collision with root package name */
    public final a f19052v;

    public /* synthetic */ q(t tVar, iq.a aVar, a aVar2, int i5) {
        this.f19049d = i5;
        this.f19050e = tVar;
        this.f19051i = aVar;
        this.f19052v = aVar2;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        switch (this.f19049d) {
            case 0:
                t tVar = this.f19050e;
                cc.k kVar = tVar.a;
                a3.r a = tVar.a((ip.l) kVar.f3400v);
                List i02 = a != null ? CollectionsKt.i0(((j) kVar.f3398e).f19019e.g(a, this.f19051i, this.f19052v)) : null;
                if (i02 == null) {
                    break;
                }
                break;
            default:
                t tVar2 = this.f19050e;
                cc.k kVar2 = tVar2.a;
                a3.r a10 = tVar2.a((ip.l) kVar2.f3400v);
                List m5 = a10 != null ? ((j) kVar2.f3398e).f19019e.m(a10, this.f19051i, this.f19052v) : null;
                if (m5 == null) {
                    break;
                }
                break;
        }
        return m0.f13512d;
    }
}
