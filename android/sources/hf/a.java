package hf;

import android.os.Process;

/* loaded from: classes3.dex */
public final class a implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f10018d;

    /* renamed from: e, reason: collision with root package name */
    public final Runnable f10019e;

    public /* synthetic */ a(int i5, Runnable runnable) {
        this.f10018d = i5;
        this.f10019e = runnable;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f10018d) {
            case 0:
                Process.setThreadPriority(0);
                this.f10019e.run();
                break;
            case 1:
                this.f10019e.run();
                break;
            default:
                try {
                    this.f10019e.run();
                    break;
                } catch (Exception e9) {
                    io.sentry.config.a.m("Executor", "Background execution failure.", e9);
                    return;
                }
        }
    }

    public String toString() {
        switch (this.f10018d) {
            case 1:
                return this.f10019e.toString();
            default:
                return super.toString();
        }
    }
}
