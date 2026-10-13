package di;

import java.util.Set;

/* loaded from: classes3.dex */
public abstract class j extends f implements Set {

    /* renamed from: i, reason: collision with root package name */
    public static final /* synthetic */ int f7589i = 0;

    /* renamed from: e, reason: collision with root package name */
    public transient k f7590e;

    @Override // java.util.Collection, java.util.Set
    public final boolean equals(Object obj) {
        if (obj == this || obj == this) {
            return true;
        }
        if (obj instanceof Set) {
            Set set = (Set) obj;
            try {
                if (set.size() == 0) {
                    return containsAll(set);
                }
            } catch (ClassCastException | NullPointerException unused) {
            }
        }
        return false;
    }
}
