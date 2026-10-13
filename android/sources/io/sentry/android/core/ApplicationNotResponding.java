package io.sentry.android.core;

/* loaded from: classes3.dex */
final class ApplicationNotResponding extends RuntimeException {

    /* renamed from: d, reason: collision with root package name */
    public final Thread f11044d;

    public ApplicationNotResponding(String str, Thread thread) {
        super(str);
        d9.a.L(thread, "Thread must be provided.");
        this.f11044d = thread;
        setStackTrace(thread.getStackTrace());
    }
}
