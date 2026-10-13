package t2;

import androidx.lifecycle.viewmodel.CreationExtras;
import java.util.LinkedHashMap;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class c extends CreationExtras {
    public c(CreationExtras initialExtras) {
        Intrinsics.checkNotNullParameter(initialExtras, "initialExtras");
        LinkedHashMap initialExtras2 = initialExtras.a;
        Intrinsics.checkNotNullParameter(initialExtras2, "initialExtras");
        this.a.putAll(initialExtras2);
    }

    public final Object a(b key) {
        Intrinsics.checkNotNullParameter(key, "key");
        return this.a.get(key);
    }

    public final void b(b key, Object obj) {
        Intrinsics.checkNotNullParameter(key, "key");
        this.a.put(key, obj);
    }

    public /* synthetic */ c(int i5) {
        this(a.f18168b);
    }
}
