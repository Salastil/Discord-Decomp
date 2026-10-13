package androidx.emoji2.text;

import android.content.Context;
import androidx.lifecycle.Lifecycle;
import androidx.lifecycle.LifecycleOwner;
import androidx.lifecycle.ProcessLifecycleInitializer;
import j3.a;
import j3.b;
import java.util.Collections;
import java.util.HashSet;
import java.util.List;
import k2.j;
import k2.k;
import k2.m;
import k2.t;

/* loaded from: classes.dex */
public class EmojiCompatInitializer implements b {
    @Override // j3.b
    public final Object create(Context context) {
        Object obj;
        t tVar = new t(new m(context, 0));
        tVar.a = 1;
        if (j.k == null) {
            synchronized (j.j) {
                try {
                    if (j.k == null) {
                        j.k = new j(tVar);
                    }
                } finally {
                }
            }
        }
        a c6 = a.c(context);
        c6.getClass();
        synchronized (a.f12405e) {
            try {
                obj = c6.a.get(ProcessLifecycleInitializer.class);
                if (obj == null) {
                    obj = c6.b(ProcessLifecycleInitializer.class, new HashSet());
                }
            } finally {
            }
        }
        Lifecycle lifecycle = ((LifecycleOwner) obj).getLifecycle();
        lifecycle.a(new k(this, lifecycle));
        return Boolean.TRUE;
    }

    @Override // j3.b
    public final List dependencies() {
        return Collections.singletonList(ProcessLifecycleInitializer.class);
    }
}
