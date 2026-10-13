package fi;

import java.io.Serializable;

/* loaded from: classes3.dex */
public final class a0 extends m implements Serializable {

    /* renamed from: d, reason: collision with root package name */
    public final Object f8634d;

    /* renamed from: e, reason: collision with root package name */
    public final Object f8635e;

    public a0(Object obj, Object obj2) {
        this.f8634d = obj;
        this.f8635e = obj2;
    }

    @Override // java.util.Map.Entry
    public final Object getKey() {
        return this.f8634d;
    }

    @Override // java.util.Map.Entry
    public final Object getValue() {
        return this.f8635e;
    }

    @Override // java.util.Map.Entry
    public final Object setValue(Object obj) {
        throw new UnsupportedOperationException();
    }
}
