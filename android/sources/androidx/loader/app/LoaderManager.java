package androidx.loader.app;

import androidx.lifecycle.LifecycleOwner;
import androidx.lifecycle.d1;
import r3.g;
import v2.c;
import ve.d;

/* loaded from: classes.dex */
public abstract class LoaderManager {
    public static c a(LifecycleOwner lifecycleOwner) {
        return new c(lifecycleOwner, ((d1) lifecycleOwner).getViewModelStore());
    }

    public abstract d b(g gVar);
}
