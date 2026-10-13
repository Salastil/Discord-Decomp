package fi;

import java.io.Serializable;
import java.util.ArrayList;

/* loaded from: classes3.dex */
public final class m0 implements ei.j, Serializable {

    /* renamed from: d, reason: collision with root package name */
    public final int f8684d;

    public m0() {
        p.c(2, "expectedValuesPerKey");
        this.f8684d = 2;
    }

    @Override // ei.j
    public final Object get() {
        return new ArrayList(this.f8684d);
    }
}
