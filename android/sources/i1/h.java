package i1;

import android.os.Process;

/* loaded from: classes.dex */
public final class h extends Thread {

    /* renamed from: d, reason: collision with root package name */
    public final int f10458d;

    public h(Runnable runnable) {
        super(runnable, "fonts-androidx");
        this.f10458d = 10;
    }

    @Override // java.lang.Thread, java.lang.Runnable
    public final void run() {
        Process.setThreadPriority(this.f10458d);
        super.run();
    }
}
