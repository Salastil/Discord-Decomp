package vr;

/* loaded from: classes3.dex */
public final class d extends lo.c {

    /* renamed from: d, reason: collision with root package name */
    public e f19552d;

    /* renamed from: e, reason: collision with root package name */
    public /* synthetic */ Object f19553e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ e f19554i;

    /* renamed from: v, reason: collision with root package name */
    public int f19555v;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public d(e eVar, lo.c cVar) {
        super(cVar);
        this.f19554i = eVar;
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        this.f19553e = obj;
        this.f19555v |= Integer.MIN_VALUE;
        return this.f19554i.d(this);
    }
}
