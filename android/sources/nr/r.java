package nr;

import kotlin.coroutines.Continuation;
import kotlin.coroutines.CoroutineContext;
import kotlin.coroutines.jvm.internal.CoroutineStackFrame;
import kotlin.jvm.internal.Ref;
import kotlinx.coroutines.CoroutineScope;

/* loaded from: classes3.dex */
public abstract class r {
    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r4v4, types: [T, java.lang.Object] */
    public static final CoroutineContext a(CoroutineContext coroutineContext, CoroutineContext coroutineContext2, boolean z5) {
        Boolean bool = Boolean.FALSE;
        boolean booleanValue = ((Boolean) coroutineContext.b0(bool, new com.discord.c(22))).booleanValue();
        boolean booleanValue2 = ((Boolean) coroutineContext2.b0(bool, new com.discord.c(22))).booleanValue();
        if (!booleanValue && !booleanValue2) {
            return coroutineContext.r(coroutineContext2);
        }
        Ref.ObjectRef objectRef = new Ref.ObjectRef();
        objectRef.element = coroutineContext2;
        kotlin.coroutines.g gVar = kotlin.coroutines.g.f13538d;
        CoroutineContext coroutineContext3 = (CoroutineContext) coroutineContext.b0(gVar, new com.discord.c(23));
        if (booleanValue2) {
            objectRef.element = ((CoroutineContext) objectRef.element).b0(gVar, new com.discord.c(24));
        }
        return coroutineContext3.r((CoroutineContext) objectRef.element);
    }

    public static final CoroutineContext b(CoroutineScope coroutineScope, CoroutineContext coroutineContext) {
        CoroutineContext a = a(coroutineScope.getCoroutineContext(), coroutineContext, true);
        ur.e eVar = g0.a;
        return (a == eVar || a.o(kotlin.coroutines.d.f13537h) != null) ? a : a.r(eVar);
    }

    public static final t1 c(Continuation continuation, CoroutineContext coroutineContext, Object obj) {
        t1 t1Var = null;
        if ((continuation instanceof CoroutineStackFrame) && coroutineContext.o(u1.f15663d) != null) {
            CoroutineStackFrame coroutineStackFrame = (CoroutineStackFrame) continuation;
            while (true) {
                if ((coroutineStackFrame instanceof d0) || (coroutineStackFrame = coroutineStackFrame.getCallerFrame()) == null) {
                    break;
                }
                if (coroutineStackFrame instanceof t1) {
                    t1Var = (t1) coroutineStackFrame;
                    break;
                }
            }
            if (t1Var != null) {
                t1Var.r0(coroutineContext, obj);
            }
        }
        return t1Var;
    }
}
