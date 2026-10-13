package io.sentry.featureflags;

import io.sentry.protocol.h;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.concurrent.CopyOnWriteArrayList;

/* loaded from: classes3.dex */
public final class a implements b {

    /* renamed from: d, reason: collision with root package name */
    public volatile CopyOnWriteArrayList f11552d;

    @Override // io.sentry.featureflags.b
    public final h h() {
        ArrayList arrayList = new ArrayList();
        Iterator it = this.f11552d.iterator();
        if (it.hasNext()) {
            throw s4.h.b(it);
        }
        return new h(arrayList);
    }

    @Override // io.sentry.featureflags.b
    /* renamed from: clone, reason: merged with bridge method [inline-methods] */
    public final b m1291clone() {
        a aVar = new a();
        new io.sentry.util.a();
        aVar.f11552d = new CopyOnWriteArrayList(this.f11552d);
        return aVar;
    }
}
