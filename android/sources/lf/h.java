package lf;

import android.content.Context;
import ze.i;

/* loaded from: classes3.dex */
public final class h extends i {
    public static int k = 1;

    public synchronized int c() {
        int i5;
        try {
            i5 = k;
            if (i5 == 1) {
                Context context = this.a;
                ye.e eVar = ye.e.f20918d;
                int b10 = eVar.b(context, 12451000);
                if (b10 == 0) {
                    i5 = 4;
                    k = 4;
                } else if (eVar.a(context, null, b10) != null || nf.d.a(context, "com.google.android.gms.auth.api.fallback") == 0) {
                    i5 = 2;
                    k = 2;
                } else {
                    i5 = 3;
                    k = 3;
                }
            }
        } catch (Throwable th2) {
            throw th2;
        }
        return i5;
    }
}
