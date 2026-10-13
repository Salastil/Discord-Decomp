package hs;

import iq.a0;
import java.util.Iterator;

/* loaded from: classes3.dex */
public final class c implements Iterable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f10244d;

    @Override // java.lang.Iterable
    public final Iterator iterator() {
        switch (this.f10244d) {
            case 0:
                return d.f10245b.iterator();
            case 1:
                return e.f10247c.iterator();
            case 2:
                return b.a.iterator();
            case 3:
                return d.a.iterator();
            case 4:
                return b.f10243c.iterator();
            case 5:
                return b.f10242b.iterator();
            case 6:
                return e.f10246b.iterator();
            case 7:
                return e.a.iterator();
            default:
                return a0.a;
        }
    }
}
