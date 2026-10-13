package app.rive.core;

import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.FunctionReferenceImpl;

@Metadata(k = 3, mv = {1, 9, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class RenderContextGL$cppPointer$1 extends FunctionReferenceImpl implements Function1<Long, Unit> {
    public RenderContextGL$cppPointer$1(Object obj) {
        super(1, obj, RenderContextGL.class, "dispose", "dispose(J)V", 0);
    }

    @Override // kotlin.jvm.functions.Function1
    public /* bridge */ /* synthetic */ Object invoke(Object obj) {
        invoke(((Number) obj).longValue());
        return Unit.a;
    }

    public final void invoke(long j) {
        ((RenderContextGL) this.receiver).dispose(j);
    }
}
