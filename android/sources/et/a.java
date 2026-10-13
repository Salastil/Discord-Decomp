package et;

import android.os.Process;
import kotlin.Unit;

/* loaded from: classes.dex */
public final class a extends Thread {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f8228d = 0;

    public /* synthetic */ a(String str) {
        super(str);
    }

    @Override // java.lang.Thread, java.lang.Runnable
    public final void run() {
        okio.a b10;
        switch (this.f8228d) {
            case 0:
                break;
            default:
                Process.setThreadPriority(19);
                synchronized (this) {
                    while (true) {
                        try {
                            wait();
                        } catch (InterruptedException unused) {
                            return;
                        }
                    }
                }
        }
        while (true) {
            try {
                synchronized (okio.a.class) {
                    okio.a aVar = okio.a.j;
                    b10 = y.b();
                    if (b10 == okio.a.j) {
                        okio.a.j = null;
                        return;
                    }
                    Unit unit = Unit.a;
                }
                if (b10 != null) {
                    b10.k();
                }
            } catch (InterruptedException unused2) {
            }
        }
    }

    public /* synthetic */ a(ThreadGroup threadGroup, String str) {
        super(threadGroup, str);
    }
}
