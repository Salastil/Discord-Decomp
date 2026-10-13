package w;

import java.util.Collection;
import java.util.Set;
import kotlin.collections.i;
import kotlin.collections.j;

/* loaded from: classes.dex */
public abstract class b extends j {
    static {
        e eVar = e.f19592b;
        e eVar2 = e.f19592b;
    }

    @Override // kotlin.collections.j
    public final Set a() {
        return new c(this, 0);
    }

    @Override // kotlin.collections.j
    public final Set b() {
        return new c(this, 1);
    }

    @Override // kotlin.collections.j
    public final int c() {
        return 0;
    }

    @Override // kotlin.collections.j, java.util.Map
    public boolean containsKey(Object obj) {
        e eVar = e.f19592b;
        if (obj == null) {
            return false;
        }
        obj.hashCode();
        return false;
    }

    @Override // kotlin.collections.j
    public final Collection d() {
        return new i(2, this);
    }

    @Override // kotlin.collections.j, java.util.Map
    public Object get(Object obj) {
        e eVar = e.f19592b;
        if (obj == null) {
            return null;
        }
        obj.hashCode();
        return null;
    }
}
