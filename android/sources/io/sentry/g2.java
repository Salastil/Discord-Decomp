package io.sentry;

import com.facebook.react.views.textinput.ReactEditTextInputConnectionWrapper;
import java.io.PrintStream;
import java.io.PrintWriter;
import java.io.StringWriter;
import java.util.List;
import java.util.concurrent.Future;
import java.util.concurrent.FutureTask;

/* loaded from: classes3.dex */
public final class g2 implements o0, j3, a1, g1, h1, ILogger {

    /* renamed from: e, reason: collision with root package name */
    public static final g2 f11555e = new g2(0);

    /* renamed from: i, reason: collision with root package name */
    public static final g2 f11556i = new g2(1);

    /* renamed from: v, reason: collision with root package name */
    public static final g2 f11557v = new g2(2);

    /* renamed from: w, reason: collision with root package name */
    public static final g2 f11558w = new g2(3);

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f11559d;

    public /* synthetic */ g2(int i5) {
        this.f11559d = i5;
    }

    @Override // io.sentry.g1
    public g3 c(d6 d6Var, List list, v5 v5Var) {
        return null;
    }

    @Override // io.sentry.h1
    public io.sentry.transport.g d(v5 v5Var, e4.e eVar) {
        return new io.sentry.transport.c(v5Var, new io.sentry.transport.p(v5Var), v5Var.getTransportGate(), eVar);
    }

    @Override // io.sentry.j3
    /* renamed from: getBreadcrumbConverter */
    public i3 getReplayBreadcrumbConverter() {
        return l2.a;
    }

    @Override // io.sentry.ILogger
    public void i(SentryLevel sentryLevel, Throwable th2, String str, Object... objArr) {
        PrintStream printStream = System.out;
        String format = String.format(str, objArr);
        String th3 = th2.toString();
        StringWriter stringWriter = new StringWriter();
        th2.printStackTrace(new PrintWriter(stringWriter));
        printStream.println(sentryLevel + ": " + format + " \n " + th3 + ReactEditTextInputConnectionWrapper.NEWLINE_RAW_VALUE + stringWriter.toString());
    }

    @Override // io.sentry.a1
    public boolean isClosed() {
        return false;
    }

    @Override // io.sentry.j3
    /* renamed from: isDebugMaskingOverlayEnabled */
    public boolean getDebugMaskingEnabled() {
        return false;
    }

    @Override // io.sentry.g1
    public boolean isRunning() {
        return false;
    }

    @Override // io.sentry.ILogger
    public void k(SentryLevel sentryLevel, String str, Throwable th2) {
        if (th2 == null) {
            u(sentryLevel, str, new Object[0]);
            return;
        }
        PrintStream printStream = System.out;
        String format = String.format(str, th2.toString());
        StringWriter stringWriter = new StringWriter();
        th2.printStackTrace(new PrintWriter(stringWriter));
        printStream.println(sentryLevel + ": " + format + ReactEditTextInputConnectionWrapper.NEWLINE_RAW_VALUE + stringWriter.toString());
    }

    @Override // io.sentry.a1
    public Future l(Runnable runnable, long j) {
        return new FutureTask(new g0(1));
    }

    @Override // io.sentry.j3
    public void start() {
        int i5 = this.f11559d;
    }

    @Override // io.sentry.a1
    public Future submit(Runnable runnable) {
        return new FutureTask(new g0(1));
    }

    @Override // io.sentry.ILogger
    public void u(SentryLevel sentryLevel, String str, Object... objArr) {
        System.out.println(sentryLevel + ": " + String.format(str, objArr));
    }

    @Override // io.sentry.ILogger
    public boolean w(SentryLevel sentryLevel) {
        return true;
    }

    private final void f() {
    }

    private final void g() {
    }

    @Override // io.sentry.g1
    public void close() {
    }

    @Override // io.sentry.a1
    public void e() {
    }

    @Override // io.sentry.j3
    public void pause() {
    }

    @Override // io.sentry.j3
    public void resume() {
    }

    @Override // io.sentry.j3
    public void stop() {
    }

    @Override // io.sentry.a1
    public void a(long j) {
    }

    @Override // io.sentry.g1
    public void b(f1 f1Var) {
    }

    @Override // io.sentry.j3
    public void captureReplay(Boolean bool) {
    }

    @Override // io.sentry.j3
    public void setBreadcrumbConverter(i3 i3Var) {
    }
}
