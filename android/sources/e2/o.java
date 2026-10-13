package e2;

import com.margelo.nitro.rive.f1;
import kotlin.coroutines.Continuation;

/* loaded from: classes.dex */
public final class o extends lo.c {

    /* renamed from: d, reason: collision with root package name */
    public /* synthetic */ Object f7864d;

    /* renamed from: e, reason: collision with root package name */
    public int f7865e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ f1 f7866i;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public o(f1 f1Var, Continuation continuation) {
        super(continuation);
        this.f7866i = f1Var;
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        this.f7864d = obj;
        this.f7865e |= Integer.MIN_VALUE;
        return this.f7866i.emit(null, this);
    }
}
