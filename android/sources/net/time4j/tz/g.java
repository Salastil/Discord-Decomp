package net.time4j.tz;

import java.lang.ref.ReferenceQueue;
import java.lang.ref.SoftReference;

/* loaded from: classes3.dex */
public final class g extends SoftReference {
    public final String a;

    public g(i iVar, ReferenceQueue referenceQueue) {
        super(iVar, referenceQueue);
        this.a = iVar.a().a();
    }
}
