package qr;

import kotlin.coroutines.Continuation;
import kotlinx.coroutines.Job;
import kotlinx.coroutines.flow.FlowCollector;

/* loaded from: classes3.dex */
public final class b0 extends lo.c {
    public int E;

    /* renamed from: d, reason: collision with root package name */
    public c0 f16952d;

    /* renamed from: e, reason: collision with root package name */
    public FlowCollector f16953e;

    /* renamed from: i, reason: collision with root package name */
    public d0 f16954i;

    /* renamed from: v, reason: collision with root package name */
    public Job f16955v;

    /* renamed from: w, reason: collision with root package name */
    public Object f16956w;

    /* renamed from: x, reason: collision with root package name */
    public /* synthetic */ Object f16957x;

    /* renamed from: y, reason: collision with root package name */
    public final /* synthetic */ c0 f16958y;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public b0(c0 c0Var, Continuation continuation) {
        super(continuation);
        this.f16958y = c0Var;
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        this.f16957x = obj;
        this.E |= Integer.MIN_VALUE;
        this.f16958y.collect(null, this);
        return ko.a.f13464d;
    }
}
