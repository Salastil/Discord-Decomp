package qr;

import kotlinx.coroutines.channels.ProducerScope;

/* loaded from: classes3.dex */
public final class b extends lo.c {

    /* renamed from: d, reason: collision with root package name */
    public ProducerScope f16948d;

    /* renamed from: e, reason: collision with root package name */
    public /* synthetic */ Object f16949e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ c f16950i;

    /* renamed from: v, reason: collision with root package name */
    public int f16951v;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public b(c cVar, lo.c cVar2) {
        super(cVar2);
        this.f16950i = cVar;
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        this.f16949e = obj;
        this.f16951v |= Integer.MIN_VALUE;
        return this.f16950i.c(null, this);
    }
}
