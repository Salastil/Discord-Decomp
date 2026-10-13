package org.chromium.net;

import java.util.Comparator;
import org.chromium.net.CronetEngine;

/* loaded from: classes.dex */
public final class b implements Comparator {
    @Override // java.util.Comparator
    public final int compare(Object obj, Object obj2) {
        c cVar = (c) obj;
        c cVar2 = (c) obj2;
        if (CronetProvider.PROVIDER_NAME_FALLBACK.equals(cVar.a.getName())) {
            return 1;
        }
        if (CronetProvider.PROVIDER_NAME_FALLBACK.equals(cVar2.a.getName())) {
            return -1;
        }
        return -CronetEngine.Builder.compareVersions(cVar.a.getVersion(), cVar2.a.getVersion());
    }
}
