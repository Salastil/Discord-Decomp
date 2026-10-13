package qr;

import kotlin.coroutines.Continuation;
import kotlinx.coroutines.Job;
import kotlinx.coroutines.flow.FlowCollector;

/* loaded from: classes3.dex */
public final class w extends lo.c {

    /* renamed from: d, reason: collision with root package name */
    public x f17037d;

    /* renamed from: e, reason: collision with root package name */
    public FlowCollector f17038e;

    /* renamed from: i, reason: collision with root package name */
    public z f17039i;

    /* renamed from: v, reason: collision with root package name */
    public Job f17040v;

    /* renamed from: w, reason: collision with root package name */
    public /* synthetic */ Object f17041w;

    /* renamed from: x, reason: collision with root package name */
    public final /* synthetic */ x f17042x;

    /* renamed from: y, reason: collision with root package name */
    public int f17043y;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public w(x xVar, Continuation continuation) {
        super(continuation);
        this.f17042x = xVar;
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        this.f17041w = obj;
        this.f17043y |= Integer.MIN_VALUE;
        x.k(this.f17042x, null, this);
        return ko.a.f13464d;
    }
}
