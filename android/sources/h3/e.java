package h3;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class e extends RuntimeException {

    /* renamed from: d, reason: collision with root package name */
    public final f f9490d;

    /* renamed from: e, reason: collision with root package name */
    public final Throwable f9491e;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public e(f callbackName, Throwable cause) {
        super(cause);
        Intrinsics.checkNotNullParameter(callbackName, "callbackName");
        Intrinsics.checkNotNullParameter(cause, "cause");
        this.f9490d = callbackName;
        this.f9491e = cause;
    }

    @Override // java.lang.Throwable
    public final Throwable getCause() {
        return this.f9491e;
    }
}
