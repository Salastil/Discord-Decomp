package rr;

import kotlin.coroutines.Continuation;
import kotlinx.coroutines.Job;

/* loaded from: classes3.dex */
public final class h extends lo.c {

    /* renamed from: d, reason: collision with root package name */
    public i f17584d;

    /* renamed from: e, reason: collision with root package name */
    public Object f17585e;

    /* renamed from: i, reason: collision with root package name */
    public Job f17586i;

    /* renamed from: v, reason: collision with root package name */
    public /* synthetic */ Object f17587v;

    /* renamed from: w, reason: collision with root package name */
    public final /* synthetic */ i f17588w;

    /* renamed from: x, reason: collision with root package name */
    public int f17589x;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public h(i iVar, Continuation continuation) {
        super(continuation);
        this.f17588w = iVar;
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        this.f17587v = obj;
        this.f17589x |= Integer.MIN_VALUE;
        return this.f17588w.emit(null, this);
    }
}
