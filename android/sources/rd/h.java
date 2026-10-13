package rd;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

/* loaded from: classes3.dex */
public final class h {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final long f17241b;

    /* renamed from: c, reason: collision with root package name */
    public final List f17242c;

    /* renamed from: d, reason: collision with root package name */
    public final List f17243d;

    public h(String str, long j, ArrayList arrayList, List list) {
        this.a = str;
        this.f17241b = j;
        this.f17242c = Collections.unmodifiableList(arrayList);
        this.f17243d = Collections.unmodifiableList(list);
    }
}
