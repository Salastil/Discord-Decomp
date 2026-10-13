package lo;

import androidx.appcompat.widget.b3;
import com.facebook.react.devsupport.StackTraceHelper;
import fo.q;
import java.io.Serializable;
import java.lang.reflect.Field;
import java.lang.reflect.Method;
import kotlin.Result;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.jvm.internal.CoroutineStackFrame;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes3.dex */
public abstract class a implements Continuation, CoroutineStackFrame, Serializable {
    private final Continuation completion;

    public a(Continuation continuation) {
        this.completion = continuation;
    }

    @NotNull
    public Continuation create(@NotNull Continuation completion) {
        Intrinsics.checkNotNullParameter(completion, "completion");
        throw new UnsupportedOperationException("create(Continuation) has not been overridden");
    }

    @Override // kotlin.coroutines.jvm.internal.CoroutineStackFrame
    public CoroutineStackFrame getCallerFrame() {
        Continuation continuation = this.completion;
        if (continuation instanceof CoroutineStackFrame) {
            return (CoroutineStackFrame) continuation;
        }
        return null;
    }

    public final Continuation getCompletion() {
        return this.completion;
    }

    public StackTraceElement getStackTraceElement() {
        int i5;
        String str;
        Method method;
        Object invoke;
        Method method2;
        Object invoke2;
        Intrinsics.checkNotNullParameter(this, "<this>");
        d dVar = (d) getClass().getAnnotation(d.class);
        String str2 = null;
        if (dVar == null) {
            return null;
        }
        int v5 = dVar.v();
        if (v5 > 1) {
            throw new IllegalStateException(("Debug metadata version mismatch. Expected: 1, got " + v5 + ". Please update the Kotlin standard library.").toString());
        }
        try {
            Field declaredField = getClass().getDeclaredField("label");
            declaredField.setAccessible(true);
            Object obj = declaredField.get(this);
            Integer num = obj instanceof Integer ? (Integer) obj : null;
            i5 = (num != null ? num.intValue() : 0) - 1;
        } catch (Exception unused) {
            i5 = -1;
        }
        int i6 = i5 >= 0 ? dVar.l()[i5] : -1;
        e.a.getClass();
        Intrinsics.checkNotNullParameter(this, "continuation");
        b3 b3Var = e.f14119c;
        b3 b3Var2 = e.f14118b;
        if (b3Var == null) {
            try {
                b3 b3Var3 = new b3(Class.class.getDeclaredMethod("getModule", null), getClass().getClassLoader().loadClass("java.lang.Module").getDeclaredMethod("getDescriptor", null), getClass().getClassLoader().loadClass("java.lang.module.ModuleDescriptor").getDeclaredMethod(StackTraceHelper.NAME_KEY, null));
                e.f14119c = b3Var3;
                b3Var = b3Var3;
            } catch (Exception unused2) {
                e.f14119c = b3Var2;
                b3Var = b3Var2;
            }
        }
        if (b3Var != b3Var2 && (method = b3Var.a) != null && (invoke = method.invoke(getClass(), null)) != null && (method2 = b3Var.f925b) != null && (invoke2 = method2.invoke(invoke, null)) != null) {
            Method method3 = b3Var.f926c;
            Object invoke3 = method3 != null ? method3.invoke(invoke2, null) : null;
            if (invoke3 instanceof String) {
                str2 = (String) invoke3;
            }
        }
        if (str2 == null) {
            str = dVar.c();
        } else {
            str = str2 + '/' + dVar.c();
        }
        return new StackTraceElement(str, dVar.m(), dVar.f(), i6);
    }

    public abstract Object invokeSuspend(Object obj);

    @Override // kotlin.coroutines.Continuation
    public final void resumeWith(@NotNull Object obj) {
        Continuation frame = this;
        while (true) {
            Intrinsics.checkNotNullParameter(frame, "frame");
            a aVar = (a) frame;
            Continuation continuation = aVar.completion;
            Intrinsics.checkNotNull(continuation);
            try {
                obj = aVar.invokeSuspend(obj);
            } catch (Throwable th2) {
                q qVar = Result.f13476e;
                obj = ki.b.i(th2);
            }
            if (obj == ko.a.f13464d) {
                return;
            }
            q qVar2 = Result.f13476e;
            aVar.releaseIntercepted();
            if (!(continuation instanceof a)) {
                continuation.resumeWith(obj);
                return;
            }
            frame = continuation;
        }
    }

    @NotNull
    public String toString() {
        StringBuilder sb2 = new StringBuilder("Continuation at ");
        Object stackTraceElement = getStackTraceElement();
        if (stackTraceElement == null) {
            stackTraceElement = getClass().getName();
        }
        sb2.append(stackTraceElement);
        return sb2.toString();
    }

    @NotNull
    public Continuation create(Object obj, @NotNull Continuation completion) {
        Intrinsics.checkNotNullParameter(completion, "completion");
        throw new UnsupportedOperationException("create(Any?;Continuation) has not been overridden");
    }

    public void releaseIntercepted() {
    }
}
