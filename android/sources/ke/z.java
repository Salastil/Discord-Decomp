package ke;

import android.os.Message;
import java.util.ArrayList;

/* loaded from: classes3.dex */
public final class z {
    public Message a;

    public final void a() {
        this.a = null;
        ArrayList arrayList = a0.f13275b;
        synchronized (arrayList) {
            try {
                if (arrayList.size() < 50) {
                    arrayList.add(this);
                }
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    public final void b() {
        Message message = this.a;
        message.getClass();
        message.sendToTarget();
        a();
    }
}
