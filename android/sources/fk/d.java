package fk;

import java.io.Serializable;
import java.util.Comparator;

/* loaded from: classes3.dex */
public final class d implements Serializable, Comparator {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f8775d;

    /* renamed from: e, reason: collision with root package name */
    public final float f8776e;

    public /* synthetic */ d(float f2, int i5) {
        this.f8775d = i5;
        this.f8776e = f2;
    }

    @Override // java.util.Comparator
    public final int compare(Object obj, Object obj2) {
        switch (this.f8775d) {
            case 0:
                c cVar = (c) obj;
                c cVar2 = (c) obj2;
                int compare = Integer.compare(cVar2.f8774d, cVar.f8774d);
                if (compare != 0) {
                    return compare;
                }
                float f2 = cVar.f8773c;
                float f10 = this.f8776e;
                return Float.compare(Math.abs(f2 - f10), Math.abs(cVar2.f8773c - f10));
            default:
                float f11 = ((c) obj2).f8773c;
                float f12 = this.f8776e;
                return Float.compare(Math.abs(f11 - f12), Math.abs(((c) obj).f8773c - f12));
        }
    }
}
