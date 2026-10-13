package rd;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

/* loaded from: classes3.dex */
public final class a {
    public final long a;

    /* renamed from: b, reason: collision with root package name */
    public final int f17206b;

    /* renamed from: c, reason: collision with root package name */
    public final List f17207c;

    /* renamed from: d, reason: collision with root package name */
    public final List f17208d;

    /* renamed from: e, reason: collision with root package name */
    public final List f17209e;

    /* renamed from: f, reason: collision with root package name */
    public final List f17210f;

    public a(long j, int i5, ArrayList arrayList, List list, List list2, List list3) {
        this.a = j;
        this.f17206b = i5;
        this.f17207c = Collections.unmodifiableList(arrayList);
        this.f17208d = Collections.unmodifiableList(list);
        this.f17209e = Collections.unmodifiableList(list2);
        this.f17210f = Collections.unmodifiableList(list3);
    }
}
