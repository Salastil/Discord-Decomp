package qr;

/* loaded from: classes3.dex */
public final class e0 extends lo.c {

    /* renamed from: d, reason: collision with root package name */
    public f0 f16968d;

    /* renamed from: e, reason: collision with root package name */
    public rr.v f16969e;

    /* renamed from: i, reason: collision with root package name */
    public /* synthetic */ Object f16970i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ f0 f16971v;

    /* renamed from: w, reason: collision with root package name */
    public int f16972w;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public e0(f0 f0Var, lo.c cVar) {
        super(cVar);
        this.f16971v = f0Var;
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        this.f16970i = obj;
        this.f16972w |= Integer.MIN_VALUE;
        return this.f16971v.b(this);
    }
}
