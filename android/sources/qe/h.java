package qe;

import android.os.Process;

/* loaded from: classes3.dex */
public final class h extends Thread {
    @Override // java.lang.Thread, java.lang.Runnable
    public final void run() {
        Process.setThreadPriority(10);
        super.run();
    }
}
