package lo;

import kotlin.coroutines.Continuation;
import kotlin.jvm.internal.FunctionBase;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Reflection;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes3.dex */
public abstract class h extends c implements FunctionBase {
    private final int arity;

    public h(int i5, Continuation continuation) {
        super(continuation);
        this.arity = i5;
    }

    @Override // kotlin.jvm.internal.FunctionBase
    public int getArity() {
        return this.arity;
    }

    @Override // lo.a
    @NotNull
    public String toString() {
        if (getCompletion() != null) {
            return super.toString();
        }
        String renderLambdaToString = Reflection.renderLambdaToString(this);
        Intrinsics.checkNotNullExpressionValue(renderLambdaToString, "renderLambdaToString(...)");
        return renderLambdaToString;
    }
}
