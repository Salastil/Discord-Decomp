package lo;

import kotlin.coroutines.Continuation;
import kotlin.jvm.internal.FunctionBase;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Reflection;

/* loaded from: classes3.dex */
public abstract class g extends f implements FunctionBase {

    /* renamed from: d, reason: collision with root package name */
    private final int f14120d;

    public g(int i5, Continuation continuation) {
        super(continuation);
        this.f14120d = i5;
    }

    @Override // kotlin.jvm.internal.FunctionBase
    public final int getArity() {
        return this.f14120d;
    }

    @Override // lo.a
    public final String toString() {
        if (getCompletion() != null) {
            return super.toString();
        }
        String renderLambdaToString = Reflection.renderLambdaToString(this);
        Intrinsics.checkNotNullExpressionValue(renderLambdaToString, "renderLambdaToString(...)");
        return renderLambdaToString;
    }
}
