package nr;

import java.util.concurrent.CancellationException;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.Job;

/* loaded from: classes3.dex */
public final class w0 extends CancellationException {

    /* renamed from: d, reason: collision with root package name */
    public final transient Job f15673d;

    public w0(String str, Throwable th2, e1 e1Var) {
        super(str);
        this.f15673d = e1Var;
        if (th2 != null) {
            initCause(th2);
        }
    }

    public final boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (!(obj instanceof w0)) {
            return false;
        }
        w0 w0Var = (w0) obj;
        if (!Intrinsics.areEqual(w0Var.getMessage(), getMessage())) {
            return false;
        }
        Object obj2 = w0Var.f15673d;
        if (obj2 == null) {
            obj2 = h1.f15623e;
        }
        Object obj3 = this.f15673d;
        if (obj3 == null) {
            obj3 = h1.f15623e;
        }
        return Intrinsics.areEqual(obj2, obj3) && Intrinsics.areEqual(w0Var.getCause(), getCause());
    }

    @Override // java.lang.Throwable
    public final Throwable fillInStackTrace() {
        setStackTrace(new StackTraceElement[0]);
        return this;
    }

    public final int hashCode() {
        String message = getMessage();
        Intrinsics.checkNotNull(message);
        int hashCode = message.hashCode() * 31;
        Object obj = this.f15673d;
        if (obj == null) {
            obj = h1.f15623e;
        }
        int hashCode2 = (hashCode + (obj != null ? obj.hashCode() : 0)) * 31;
        Throwable cause = getCause();
        return hashCode2 + (cause != null ? cause.hashCode() : 0);
    }

    @Override // java.lang.Throwable
    public final String toString() {
        StringBuilder sb2 = new StringBuilder();
        sb2.append(super.toString());
        sb2.append("; job=");
        Object obj = this.f15673d;
        if (obj == null) {
            obj = h1.f15623e;
        }
        sb2.append(obj);
        return sb2.toString();
    }
}
