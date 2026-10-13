package ke;

import android.os.Handler;
import java.util.ArrayList;

/* loaded from: classes3.dex */
public final class a0 {

    /* renamed from: b, reason: collision with root package name */
    public static final ArrayList f13275b = new ArrayList(50);
    public final Handler a;

    public a0(Handler handler) {
        this.a = handler;
    }

    public static z b() {
        z zVar;
        ArrayList arrayList = f13275b;
        synchronized (arrayList) {
            try {
                zVar = arrayList.isEmpty() ? new z() : (z) arrayList.remove(arrayList.size() - 1);
            } catch (Throwable th2) {
                throw th2;
            }
        }
        return zVar;
    }

    public final z a(int i5, Object obj) {
        z b10 = b();
        b10.a = this.a.obtainMessage(i5, obj);
        return b10;
    }

    public final boolean c(Runnable runnable) {
        return this.a.post(runnable);
    }

    public final boolean d(int i5) {
        return this.a.sendEmptyMessage(i5);
    }
}
