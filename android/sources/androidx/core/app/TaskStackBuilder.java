package androidx.core.app;

import i.h;
import java.util.ArrayList;
import java.util.Iterator;

/* loaded from: classes.dex */
public final class TaskStackBuilder implements Iterable {

    /* renamed from: d, reason: collision with root package name */
    public final ArrayList f1497d = new ArrayList();

    /* renamed from: e, reason: collision with root package name */
    public final h f1498e;

    public TaskStackBuilder(h hVar) {
        this.f1498e = hVar;
    }

    @Override // java.lang.Iterable
    public final Iterator iterator() {
        return this.f1497d.iterator();
    }
}
