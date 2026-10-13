package com.google.android.play.core.integrity;

import android.content.Context;
import androidx.annotation.NonNull;
import di.n;

/* loaded from: classes3.dex */
public class IntegrityManagerFactory {
    @NonNull
    public static IntegrityManager create(Context context) {
        qd.f fVar;
        synchronized (xh.c.class) {
            try {
                if (xh.c.a == null) {
                    Context applicationContext = context.getApplicationContext();
                    if (applicationContext != null) {
                        context = applicationContext;
                    }
                    xh.c.a = new qd.f(context);
                }
                fVar = xh.c.a;
            } catch (Throwable th2) {
                throw th2;
            }
        }
        return (IntegrityManager) ((n) fVar.f16831e).a();
    }
}
