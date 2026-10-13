package e2;

import kotlin.jvm.internal.Ref;

/* loaded from: classes.dex */
public final class r extends lo.c {
    public int E;

    /* renamed from: d, reason: collision with root package name */
    public Object f7880d;

    /* renamed from: e, reason: collision with root package name */
    public Object f7881e;

    /* renamed from: i, reason: collision with root package name */
    public Object f7882i;

    /* renamed from: v, reason: collision with root package name */
    public Ref.ObjectRef f7883v;

    /* renamed from: w, reason: collision with root package name */
    public z f7884w;

    /* renamed from: x, reason: collision with root package name */
    public /* synthetic */ Object f7885x;

    /* renamed from: y, reason: collision with root package name */
    public final /* synthetic */ s f7886y;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public r(s sVar, lo.c cVar) {
        super(cVar);
        this.f7886y = sVar;
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        this.f7885x = obj;
        this.E |= Integer.MIN_VALUE;
        return this.f7886y.a(null, this);
    }
}
