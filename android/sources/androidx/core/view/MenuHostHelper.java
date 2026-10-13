package androidx.core.view;

import java.util.HashMap;
import java.util.concurrent.CopyOnWriteArrayList;

/* loaded from: classes.dex */
public final class MenuHostHelper {
    public final Runnable a;

    /* renamed from: b, reason: collision with root package name */
    public final CopyOnWriteArrayList f1540b = new CopyOnWriteArrayList();

    /* renamed from: c, reason: collision with root package name */
    public final HashMap f1541c = new HashMap();

    public MenuHostHelper(Runnable runnable) {
        this.a = runnable;
    }

    public final void a(MenuProvider menuProvider) {
        this.f1540b.remove(menuProvider);
        n nVar = (n) this.f1541c.remove(menuProvider);
        if (nVar != null) {
            nVar.a.c(nVar.f1617b);
            nVar.f1617b = null;
        }
        this.a.run();
    }
}
