package sr;

import kotlin.Result;

/* loaded from: classes3.dex */
public abstract class v {
    public static final /* synthetic */ int a = 0;

    static {
        Object i5;
        Object i6;
        Exception exc = new Exception();
        String simpleName = m3.n.class.getSimpleName();
        StackTraceElement stackTraceElement = exc.getStackTrace()[0];
        new StackTraceElement("_COROUTINE.".concat(simpleName), "_", stackTraceElement.getFileName(), stackTraceElement.getLineNumber());
        try {
            fo.q qVar = Result.f13476e;
            i5 = lo.a.class.getCanonicalName();
        } catch (Throwable th2) {
            fo.q qVar2 = Result.f13476e;
            i5 = ki.b.i(th2);
        }
        if (Result.a(i5) != null) {
            i5 = "kotlin.coroutines.jvm.internal.BaseContinuationImpl";
        }
        try {
            i6 = v.class.getCanonicalName();
        } catch (Throwable th3) {
            fo.q qVar3 = Result.f13476e;
            i6 = ki.b.i(th3);
        }
        if (Result.a(i6) != null) {
            i6 = "kotlinx.coroutines.internal.StackTraceRecoveryKt";
        }
    }
}
