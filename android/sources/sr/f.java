package sr;

import kotlin.coroutines.CoroutineContext;

/* loaded from: classes3.dex */
public final class f extends RuntimeException {

    /* renamed from: d, reason: collision with root package name */
    public final transient CoroutineContext f18104d;

    public f(CoroutineContext coroutineContext) {
        this.f18104d = coroutineContext;
    }

    @Override // java.lang.Throwable
    public final Throwable fillInStackTrace() {
        setStackTrace(new StackTraceElement[0]);
        return this;
    }

    @Override // java.lang.Throwable
    public final String getLocalizedMessage() {
        return String.valueOf(this.f18104d);
    }
}
